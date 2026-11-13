#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define JOJLNBODACH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4DF620)
#define JOJLNBODACH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4DF660)
#define JOJLNBODACH___C__RESETLIGHTV1_B__13_0_OFFSET UNITYSDK_OFFSET(0x1B4DF670)

inline static constexpr unsigned int JOJLNBODACH___c_TypeDefinitionIndex = 50418;

	class JOJLNBODACH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x28F00);
		}

		static ::System::Action** StaticGet___9__13_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x28F08);
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
