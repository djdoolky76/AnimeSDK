#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDJIMEBNEMD;
namespace System { class Object; }

#define FDJIMEBNEMD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6436B0)
#define FDJIMEBNEMD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6436F0)
#define FDJIMEBNEMD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F643700)

inline static constexpr unsigned int FDJIMEBNEMD___c_TypeDefinitionIndex = 33184;

	class FDJIMEBNEMD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A2A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDJIMEBNEMD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJIMEBNEMD___C_CTOR_OFFSET))(this);
		}

		::FDJIMEBNEMD* __cctor_b__28_0()
		{
			return ((::FDJIMEBNEMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJIMEBNEMD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
