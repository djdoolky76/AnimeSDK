#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAJEJCBILIA;
namespace System { class Object; }

#define FAJEJCBILIA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E327360)
#define FAJEJCBILIA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3273A0)
#define FAJEJCBILIA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3273B0)

inline static constexpr unsigned int FAJEJCBILIA___c_TypeDefinitionIndex = 29961;

	class FAJEJCBILIA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x582B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAJEJCBILIA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJEJCBILIA___C_CTOR_OFFSET))(this);
		}

		::FAJEJCBILIA* __cctor_b__28_0()
		{
			return ((::FAJEJCBILIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAJEJCBILIA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
