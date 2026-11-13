#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define ODCFEGFDIMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x19A353F0)
#define ODCFEGFDIMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x19A35420)
#define ODCFEGFDIMM___C__FINISHINITGAME_B__15_0_OFFSET UNITYSDK_OFFSET(0x19A35480)
#define ODCFEGFDIMM___C___INITAUDIOPCK_B__12_2_OFFSET UNITYSDK_OFFSET(0x19A35430)

inline static constexpr unsigned int ODCFEGFDIMM___c_TypeDefinitionIndex = 62536;

	class ODCFEGFDIMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69210);
		}

		static ::System::Action** StaticGet___9__12_2()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69218);
		}

		static ::System::Action** StaticGet___9__15_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODCFEGFDIMM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCFEGFDIMM___C_CTOR_OFFSET))(this);
		}

		::System::Void __InitAudioPck_b__12_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCFEGFDIMM___C___INITAUDIOPCK_B__12_2_OFFSET))(this);
		}

		::System::Void _FinishInitGame_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCFEGFDIMM___C__FINISHINITGAME_B__15_0_OFFSET))(this);
		}

	};
