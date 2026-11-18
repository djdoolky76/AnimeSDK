#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigUIWeaponGacha; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CADLFLNOJEJ_AEAPENBMKPD_OFFSET UNITYSDK_OFFSET(0x14F0C010)
#define CADLFLNOJEJ_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x14F0B4B0)
#define CADLFLNOJEJ_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x14F0B8B0)
#define CADLFLNOJEJ_DMGFFNOFKEN_OFFSET UNITYSDK_OFFSET(0x14F0BD20)
#define CADLFLNOJEJ_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x14F0B6D0)
#define CADLFLNOJEJ_KPDPMLIKOCE_OFFSET UNITYSDK_OFFSET(0x14F0B9A0)
#define CADLFLNOJEJ_NEBACKNOCKH_OFFSET UNITYSDK_OFFSET(0x14F0B190)
#define CADLFLNOJEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14F0B180)

inline static constexpr unsigned int CADLFLNOJEJ_TypeDefinitionIndex = 39672;

class CADLFLNOJEJ : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigUIWeaponGacha** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigUIWeaponGacha**)Il2CppClass::FromTypeDefinitionIndex(CADLFLNOJEJ_TypeDefinitionIndex)->GetStaticField(0x31090);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CADLFLNOJEJ__CTOR_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 NEBACKNOCKH()
	{
		return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + CADLFLNOJEJ_NEBACKNOCKH_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CADLFLNOJEJ_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::Config::ConfigUIWeaponGacha* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigUIWeaponGacha*(*)())((::PBYTE)hIl2Cpp + CADLFLNOJEJ_KGNEJKNNODJ_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CADLFLNOJEJ_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Boolean KPDPMLIKOCE(::System::Int32 HPAPIAGFFNP, ::UnityEngine::Vector3& CJGAFLKGLKL)
	{
		return ((::System::Boolean(*)(::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CADLFLNOJEJ_KPDPMLIKOCE_OFFSET))(HPAPIAGFFNP, CJGAFLKGLKL);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector3>* DMGFFNOFKEN()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector3>*(*)())((::PBYTE)hIl2Cpp + CADLFLNOJEJ_DMGFFNOFKEN_OFFSET))();
	}

	static ::UnityEngine::Vector3 AEAPENBMKPD()
	{
		return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + CADLFLNOJEJ_AEAPENBMKPD_OFFSET))();
	}
};
