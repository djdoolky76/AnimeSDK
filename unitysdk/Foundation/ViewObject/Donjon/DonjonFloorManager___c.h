#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::ViewObject::Donjon { class DonjonFloorObject; }
namespace MoleMole::Config { class ConfigDecorBase; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11D94740)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11D94780)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER___C__ONPOSTLEVELREADY_B__17_0_OFFSET UNITYSDK_OFFSET(0x11D94950)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER___C__ONPOSTPREPAREENTERSCENE_B__16_0_OFFSET UNITYSDK_OFFSET(0x11D94870)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER___C__ONPREPAREENTERSCENE_B__15_0_OFFSET UNITYSDK_OFFSET(0x11D94790)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int DonjonFloorManager___c_TypeDefinitionIndex = 50261;

	class DonjonFloorManager___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MoleMole::Config::ConfigDecorBase*>** StaticGet___9__16_0()
		{
			return (::System::Action_1<::MoleMole::Config::ConfigDecorBase*>**)Il2CppClass::FromTypeDefinitionIndex(DonjonFloorManager___c_TypeDefinitionIndex)->GetStaticField(0x51400);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DonjonFloorManager___c_TypeDefinitionIndex)->GetStaticField(0x51408);
		}
		static ::System::Action_2<::Foundation::ViewObject::Donjon::DonjonFloorObject*, ::MoleMole::Config::ConfigDecorBase*>** StaticGet___9__17_0()
		{
			return (::System::Action_2<::Foundation::ViewObject::Donjon::DonjonFloorObject*, ::MoleMole::Config::ConfigDecorBase*>**)Il2CppClass::FromTypeDefinitionIndex(DonjonFloorManager___c_TypeDefinitionIndex)->GetStaticField(0x51410);
		}
		static ::System::Action_1<::MoleMole::Config::ConfigDecorBase*>** StaticGet___9__15_0()
		{
			return (::System::Action_1<::MoleMole::Config::ConfigDecorBase*>**)Il2CppClass::FromTypeDefinitionIndex(DonjonFloorManager___c_TypeDefinitionIndex)->GetStaticField(0x51418);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnPrepareEnterScene_b__15_0(::MoleMole::Config::ConfigDecorBase* decor)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDecorBase*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER___C__ONPREPAREENTERSCENE_B__15_0_OFFSET))(this, decor);
		}

		::System::Void _OnPostPrepareEnterScene_b__16_0(::MoleMole::Config::ConfigDecorBase* decor)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDecorBase*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER___C__ONPOSTPREPAREENTERSCENE_B__16_0_OFFSET))(this, decor);
		}

		::System::Void _OnPostLevelReady_b__17_0(::Foundation::ViewObject::Donjon::DonjonFloorObject* floorObject, ::MoleMole::Config::ConfigDecorBase* decor)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObject*, ::MoleMole::Config::ConfigDecorBase*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER___C__ONPOSTLEVELREADY_B__17_0_OFFSET))(this, floorObject, decor);
		}
	};
}
