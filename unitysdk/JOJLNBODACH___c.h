#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define JOJLNBODACH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB29D4D0)
#define JOJLNBODACH___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB29D510)
#define JOJLNBODACH___C__RESETLIGHTV1_B__13_0_OFFSET UNITYSDK_OFFSET(0xB29D520)

inline static constexpr unsigned int JOJLNBODACH___c_TypeDefinitionIndex = 49342;

	class JOJLNBODACH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24B10);
		}

		static ::System::Action** StaticGet___9__13_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24B18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOJLNBODACH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJLNBODACH___C_CTOR_OFFSET))(this);
		}

		::System::Void _ResetLightV1_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJLNBODACH___C__RESETLIGHTV1_B__13_0_OFFSET))(this);
		}

	};
