#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIWeapon; }
namespace MoleMole::Config { class WeaponInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define PKPJKOAIIOD_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x1CB4E960)
#define PKPJKOAIIOD_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x1CB4EB80)
#define PKPJKOAIIOD_INIFENKCMHM_OFFSET UNITYSDK_OFFSET(0x1CB4EC70)
#define PKPJKOAIIOD_KPMDDBBDAJJ_OFFSET UNITYSDK_OFFSET(0x1CB4EEF0)
#define PKPJKOAIIOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB4E950)

inline static constexpr unsigned int PKPJKOAIIOD_TypeDefinitionIndex = 39193;

class PKPJKOAIIOD : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigUIWeapon** StaticGet_INICMOELDOK()
	{
		return (::MoleMole::Config::ConfigUIWeapon**)Il2CppClass::FromTypeDefinitionIndex(PKPJKOAIIOD_TypeDefinitionIndex)->GetStaticField(0x459E0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPJKOAIIOD__CTOR_OFFSET))(this);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + PKPJKOAIIOD_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + PKPJKOAIIOD_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Config::WeaponInfo* INIFENKCMHM(::System::Int32 BFBDDOPFNHN)
	{
		return ((::MoleMole::Config::WeaponInfo*(*)(::System::Int32))((::PBYTE)hIl2Cpp + PKPJKOAIIOD_INIFENKCMHM_OFFSET))(BFBDDOPFNHN);
	}

	static ::MoleMole::Config::ConfigUIWeapon* KPMDDBBDAJJ()
	{
		return ((::MoleMole::Config::ConfigUIWeapon*(*)())((::PBYTE)hIl2Cpp + PKPJKOAIIOD_KPMDDBBDAJJ_OFFSET))();
	}
};
