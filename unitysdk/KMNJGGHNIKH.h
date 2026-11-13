#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class FMPCODLIOLG;
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define KMNJGGHNIKH_ADCNFBNLCJI_OFFSET UNITYSDK_OFFSET(0x18F88390)
#define KMNJGGHNIKH_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18F88AC0)
#define KMNJGGHNIKH_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x18F88C40)
#define KMNJGGHNIKH_BHBHABIGGDI_OFFSET UNITYSDK_OFFSET(0x18F87D80)
#define KMNJGGHNIKH_CGDNPIJGNNK_OFFSET UNITYSDK_OFFSET(0x18F87D40)
#define KMNJGGHNIKH_CTOR_OFFSET UNITYSDK_OFFSET(0x18F88DA0)
#define KMNJGGHNIKH_DGBGEJOLBEO_OFFSET UNITYSDK_OFFSET(0x18F88880)
#define KMNJGGHNIKH_EMAMJBCANAA_OFFSET UNITYSDK_OFFSET(0x18F882D0)
#define KMNJGGHNIKH_FDKKHFFLFEA_OFFSET UNITYSDK_OFFSET(0x18F88830)
#define KMNJGGHNIKH_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x18F87BB0)
#define KMNJGGHNIKH_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x18F87CE0)
#define KMNJGGHNIKH_JFEILMNOCMK_OFFSET UNITYSDK_OFFSET(0x18F88940)
#define KMNJGGHNIKH_KJBAHMJOFMA_OFFSET UNITYSDK_OFFSET(0x18F87E10)
#define KMNJGGHNIKH_KNMNEBGCELH_OFFSET UNITYSDK_OFFSET(0x18F87B50)
#define KMNJGGHNIKH_LCJLLGBJENF_OFFSET UNITYSDK_OFFSET(0x18F88790)
#define KMNJGGHNIKH_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0x18F87FA0)
#define KMNJGGHNIKH_OAAOHHINHPH_OFFSET UNITYSDK_OFFSET(0x18F87DD0)
#define KMNJGGHNIKH_OIFOAEBHMCM_OFFSET UNITYSDK_OFFSET(0x18F88A00)
#define KMNJGGHNIKH_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x18F87E60)
#define KMNJGGHNIKH_ONRETURN_OFFSET UNITYSDK_OFFSET(0x18F88060)
#define KMNJGGHNIKH_OPOCPDBMELE_OFFSET UNITYSDK_OFFSET(0x18F887E0)
#define KMNJGGHNIKH__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x18F88160)
#define KMNJGGHNIKH__ONBIND_OFFSET UNITYSDK_OFFSET(0x18F877B0)
#define KMNJGGHNIKH__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x18F880B0)
#define KMNJGGHNIKH__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x18F88010)

inline static constexpr unsigned int KMNJGGHNIKH_TypeDefinitionIndex = 73371;

	class KMNJGGHNIKH : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::UnityEngine::UI::Image* KLMFNOLFOBG; // 0x70
		::UnityEngine::Animator* HFBCMEPMAAP; // 0x78
		::RPG::GameCore::CharacterDataComponent* HKCICBFPGGF; // 0x80
		::UnityEngine::Animator* JANFABBBABL; // 0x88
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* ABAADENDMCM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMNJGGHNIKH_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMNJGGHNIKH__ONBIND_OFFSET))(this);
		}

		::System::Void KNMNEBGCELH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMNJGGHNIKH_KNMNEBGCELH_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMNJGGHNIKH_GET_INDEX_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMNJGGHNIKH_GET_TRANS_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* CGDNPIJGNNK()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMNJGGHNIKH_CGDNPIJGNNK_OFFSET))(this);
		}

		::RPG::GameCore::TeamType BHBHABIGGDI()
		{
			return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + KMNJGGHNIKH_BHBHABIGGDI_OFFSET))(this);
		}

		::FMPCODLIOLG* OAAOHHINHPH()
		{
			return ((::FMPCODLIOLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMNJGGHNIKH_OAAOHHINHPH_OFFSET))(this);
		}

		::System::Void KJBAHMJOFMA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KMNJGGHNIKH_KJBAHMJOFMA_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KMNJGGHNIKH_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMNJGGHNIKH_ONRETURN_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + KMNJGGHNIKH__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMNJGGHNIKH__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMNJGGHNIKH__SETUPVIEW_OFFSET))(this);
		}

		::System::Void LCJLLGBJENF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMNJGGHNIKH_LCJLLGBJENF_OFFSET))(this);
		}

		::System::Void OPOCPDBMELE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMNJGGHNIKH_OPOCPDBMELE_OFFSET))(this);
		}

		::System::Void FDKKHFFLFEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMNJGGHNIKH_FDKKHFFLFEA_OFFSET))(this);
		}

		::System::Void LIDKFDENKAP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KMNJGGHNIKH_LIDKFDENKAP_OFFSET))(this, a1);
		}

		::System::Void EMAMJBCANAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMNJGGHNIKH_EMAMJBCANAA_OFFSET))(this);
		}

		::System::Void ADCNFBNLCJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KMNJGGHNIKH_ADCNFBNLCJI_OFFSET))(this, a1);
		}

		::System::Void DGBGEJOLBEO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KMNJGGHNIKH_DGBGEJOLBEO_OFFSET))(this, a1);
		}

		::System::Void JFEILMNOCMK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KMNJGGHNIKH_JFEILMNOCMK_OFFSET))(this, a1);
		}

		::System::Void OIFOAEBHMCM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KMNJGGHNIKH_OIFOAEBHMCM_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMNJGGHNIKH_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMNJGGHNIKH_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
