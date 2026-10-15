#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEJJPFMAOOB;
namespace System { class Object; }

#define NEJJPFMAOOB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAC97A0)
#define NEJJPFMAOOB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC97E0)
#define NEJJPFMAOOB___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1EAC97F0)

inline static constexpr unsigned int NEJJPFMAOOB___c_TypeDefinitionIndex = 32275;

	class NEJJPFMAOOB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x628E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEJJPFMAOOB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJJPFMAOOB___C_CTOR_OFFSET))(this);
		}

		::NEJJPFMAOOB* __cctor_b__48_0()
		{
			return ((::NEJJPFMAOOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJJPFMAOOB___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
