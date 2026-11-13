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

#define PBDJFDBEDCL_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18AF5D60)
#define PBDJFDBEDCL_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x18AF5E30)
#define PBDJFDBEDCL_BNCHHCGENKE_OFFSET UNITYSDK_OFFSET(0x18AF5A80)
#define PBDJFDBEDCL_CTOR_OFFSET UNITYSDK_OFFSET(0x18AF5ED0)
#define PBDJFDBEDCL_DHEJAGFIEBA_OFFSET UNITYSDK_OFFSET(0x18AF5B00)
#define PBDJFDBEDCL_EMLFFGPEEMD_OFFSET UNITYSDK_OFFSET(0x18AF5720)
#define PBDJFDBEDCL_EOFNEOKIHME_OFFSET UNITYSDK_OFFSET(0x18AF5C60)
#define PBDJFDBEDCL_IGMFCMMBJKK_OFFSET UNITYSDK_OFFSET(0x18AF5920)
#define PBDJFDBEDCL_KLPENANMIMO_OFFSET UNITYSDK_OFFSET(0x18AF5BD0)
#define PBDJFDBEDCL_MEPFNJJDBMJ_OFFSET UNITYSDK_OFFSET(0x18AF57E0)
#define PBDJFDBEDCL_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x18AF5990)
#define PBDJFDBEDCL_PIIINLMDBMJ_OFFSET UNITYSDK_OFFSET(0x18AF5630)
#define PBDJFDBEDCL__ONBIND_OFFSET UNITYSDK_OFFSET(0x18AF5510)
#define PBDJFDBEDCL__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x18AF5440)
#define PBDJFDBEDCL__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x18AF5890)

inline static constexpr unsigned int PBDJFDBEDCL_TypeDefinitionIndex = 74247;

	class PBDJFDBEDCL : public ::GJPBCNIIEOB
	{
	public:
		::RPG::Client::UIStateCtrl* GIMAEGBDOBL; // 0x168
		::AIFAHLNOMGK* KONBDNNCNKL; // 0x170
		::RPG::Client::BattleAvatarNihiluxCustomUIData* EHNOGCBHACN; // 0x178
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
