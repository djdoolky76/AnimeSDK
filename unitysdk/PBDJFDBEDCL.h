#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPBCNIIEOB.h"
#include "unitysdk/RPG/GameCore/NihiluxElationUIType.h"
#include "unitysdk/BAHMMEEMJOB.h"
#include "unitysdk/IGKFNIEJGLM.h"
class AIFAHLNOMGK;
namespace RPG::Client { class BattleAvatarNihiluxCustomUIData; }
namespace RPG::Client { class UIStateCtrl; }
namespace System { class Object; }
namespace System { class String; }

#define PBDJFDBEDCL_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC8E81F0)
#define PBDJFDBEDCL_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC8E82C0)
#define PBDJFDBEDCL_BNCHHCGENKE_OFFSET UNITYSDK_OFFSET(0xC8E7F10)
#define PBDJFDBEDCL_CTOR_OFFSET UNITYSDK_OFFSET(0xC8E8360)
#define PBDJFDBEDCL_DHEJAGFIEBA_OFFSET UNITYSDK_OFFSET(0xC8E7F90)
#define PBDJFDBEDCL_EMLFFGPEEMD_OFFSET UNITYSDK_OFFSET(0xC8E7BB0)
#define PBDJFDBEDCL_EOFNEOKIHME_OFFSET UNITYSDK_OFFSET(0xC8E80F0)
#define PBDJFDBEDCL_IGMFCMMBJKK_OFFSET UNITYSDK_OFFSET(0xC8E7DB0)
#define PBDJFDBEDCL_KLPENANMIMO_OFFSET UNITYSDK_OFFSET(0xC8E8060)
#define PBDJFDBEDCL_MEPFNJJDBMJ_OFFSET UNITYSDK_OFFSET(0xC8E7C70)
#define PBDJFDBEDCL_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xC8E7E20)
#define PBDJFDBEDCL_PIIINLMDBMJ_OFFSET UNITYSDK_OFFSET(0xC8E7AC0)
#define PBDJFDBEDCL__ONBIND_OFFSET UNITYSDK_OFFSET(0xC8E79A0)
#define PBDJFDBEDCL__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xC8E78D0)
#define PBDJFDBEDCL__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC8E7D20)

inline static constexpr unsigned int PBDJFDBEDCL_TypeDefinitionIndex = 74248;

	class PBDJFDBEDCL : public ::GJPBCNIIEOB
	{
	public:
		::RPG::Client::UIStateCtrl* GIMAEGBDOBL; // 0x168
		::RPG::Client::BattleAvatarNihiluxCustomUIData* EHNOGCBHACN; // 0x170
		::AIFAHLNOMGK* KONBDNNCNKL; // 0x178
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDJFDBEDCL_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + PBDJFDBEDCL__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDJFDBEDCL__ONBIND_OFFSET))(this);
		}

		::System::Void PIIINLMDBMJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PBDJFDBEDCL_PIIINLMDBMJ_OFFSET))(this, a1);
		}

		::System::Boolean EMLFFGPEEMD(::BAHMMEEMJOB a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAHMMEEMJOB))((::PBYTE)hIl2Cpp + PBDJFDBEDCL_EMLFFGPEEMD_OFFSET))(this, a1);
		}

		::System::Void MEPFNJJDBMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDJFDBEDCL_MEPFNJJDBMJ_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDJFDBEDCL__SETUPVIEW_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + PBDJFDBEDCL_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void BNCHHCGENKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDJFDBEDCL_BNCHHCGENKE_OFFSET))(this);
		}

		::System::Void IGMFCMMBJKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDJFDBEDCL_IGMFCMMBJKK_OFFSET))(this);
		}

		::System::String* DHEJAGFIEBA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDJFDBEDCL_DHEJAGFIEBA_OFFSET))(this);
		}

		::RPG::GameCore::NihiluxElationUIType KLPENANMIMO()
		{
			return ((::RPG::GameCore::NihiluxElationUIType(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDJFDBEDCL_KLPENANMIMO_OFFSET))(this);
		}

		::System::Void EOFNEOKIHME(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PBDJFDBEDCL_EOFNEOKIHME_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDJFDBEDCL_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDJFDBEDCL_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
