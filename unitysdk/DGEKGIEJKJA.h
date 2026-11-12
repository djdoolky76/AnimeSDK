#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class EFANHJHLAJM;
class FMPCODLIOLG;
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class CharacterHudComponent; }
namespace RPG::GameCore { class EntityRevive; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define DGEKGIEJKJA_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xF417C10)
#define DGEKGIEJKJA_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xF417D30)
#define DGEKGIEJKJA_BHBHABIGGDI_OFFSET UNITYSDK_OFFSET(0xF417390)
#define DGEKGIEJKJA_CGDNPIJGNNK_OFFSET UNITYSDK_OFFSET(0xF417350)
#define DGEKGIEJKJA_CTOR_OFFSET UNITYSDK_OFFSET(0xF417E20)
#define DGEKGIEJKJA_GBGALIOKBHN_OFFSET UNITYSDK_OFFSET(0xF417AE0)
#define DGEKGIEJKJA_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xF4171C0)
#define DGEKGIEJKJA_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xF4172F0)
#define DGEKGIEJKJA_IPMGACIGPOE_OFFSET UNITYSDK_OFFSET(0xF4179F0)
#define DGEKGIEJKJA_KJBAHMJOFMA_OFFSET UNITYSDK_OFFSET(0xF417420)
#define DGEKGIEJKJA_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0xF417520)
#define DGEKGIEJKJA_NIOPMOPLOFP_OFFSET UNITYSDK_OFFSET(0xF417990)
#define DGEKGIEJKJA_OAAOHHINHPH_OFFSET UNITYSDK_OFFSET(0xF4173E0)
#define DGEKGIEJKJA_OGPAMKGAGJF_OFFSET UNITYSDK_OFFSET(0xF417870)
#define DGEKGIEJKJA_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xF417480)
#define DGEKGIEJKJA_ONRETURN_OFFSET UNITYSDK_OFFSET(0xF417640)
#define DGEKGIEJKJA__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xF417700)
#define DGEKGIEJKJA__ONBIND_OFFSET UNITYSDK_OFFSET(0xF417050)
#define DGEKGIEJKJA__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xF417690)
#define DGEKGIEJKJA__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xF4175A0)

inline static constexpr unsigned int DGEKGIEJKJA_TypeDefinitionIndex = 73405;

	class DGEKGIEJKJA : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::CharacterDataComponent* HKCICBFPGGF; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::UnityEngine::Transform* GIMFNPMDJMD; // 0x70
		::RPG::GameCore::CharacterHudComponent* ILCDDGCKNEP; // 0x78
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x80
		::EFANHJHLAJM* AKNLKEAMBEG; // 0x88
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEKGIEJKJA_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEKGIEJKJA__ONBIND_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEKGIEJKJA_GET_INDEX_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEKGIEJKJA_GET_TRANS_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* CGDNPIJGNNK()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEKGIEJKJA_CGDNPIJGNNK_OFFSET))(this);
		}

		::RPG::GameCore::TeamType BHBHABIGGDI()
		{
			return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEKGIEJKJA_BHBHABIGGDI_OFFSET))(this);
		}

		::FMPCODLIOLG* OAAOHHINHPH()
		{
			return ((::FMPCODLIOLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEKGIEJKJA_OAAOHHINHPH_OFFSET))(this);
		}

		::System::Void KJBAHMJOFMA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DGEKGIEJKJA_KJBAHMJOFMA_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DGEKGIEJKJA_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEKGIEJKJA_ONRETURN_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + DGEKGIEJKJA__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEKGIEJKJA__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEKGIEJKJA__SETUPVIEW_OFFSET))(this);
		}

		::System::Void OGPAMKGAGJF(::RPG::GameCore::EntityRevive* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityRevive*))((::PBYTE)hIl2Cpp + DGEKGIEJKJA_OGPAMKGAGJF_OFFSET))(this, a1);
		}

		::System::Void NIOPMOPLOFP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DGEKGIEJKJA_NIOPMOPLOFP_OFFSET))(this, a1);
		}

		::System::Void LIDKFDENKAP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DGEKGIEJKJA_LIDKFDENKAP_OFFSET))(this, a1);
		}

		::System::Void IPMGACIGPOE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DGEKGIEJKJA_IPMGACIGPOE_OFFSET))(this, a1);
		}

		::System::Void GBGALIOKBHN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DGEKGIEJKJA_GBGALIOKBHN_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEKGIEJKJA_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEKGIEJKJA_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
