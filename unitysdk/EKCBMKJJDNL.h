#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/AOPEILFBPHP.h"
#include "unitysdk/CMJPOKJIEGP.h"
#include "unitysdk/EKCBMKJJDNL_ENEFIKAONIN.h"
#include "unitysdk/IGKFNIEJGLM.h"
class EANJILGOKBE;
class FDOICPJGACI;
class IOIIFAENPNH;
class KKHNFGNFJFD;
namespace RPG::Client { class AnimatorButton; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define EKCBMKJJDNL_CTOR_OFFSET UNITYSDK_OFFSET(0x16446530)
#define EKCBMKJJDNL_DIICKFBCDDA_OFFSET UNITYSDK_OFFSET(0x16445850)
#define EKCBMKJJDNL_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x16445400)
#define EKCBMKJJDNL_EEEDFOHGLPN_OFFSET UNITYSDK_OFFSET(0x16445EB0)
#define EKCBMKJJDNL_FDFIBKPPJDK_OFFSET UNITYSDK_OFFSET(0x16446110)
#define EKCBMKJJDNL_ICPBEMGMKHJ_OFFSET UNITYSDK_OFFSET(0x16446370)
#define EKCBMKJJDNL_IMIKJMCGGML_OFFSET UNITYSDK_OFFSET(0x164464E0)
#define EKCBMKJJDNL_JPNGAHINAPC_OFFSET UNITYSDK_OFFSET(0x16446440)
#define EKCBMKJJDNL_LMNHKOCHGCL_OFFSET UNITYSDK_OFFSET(0x164457E0)
#define EKCBMKJJDNL_MIPFOAFKBLH_OFFSET UNITYSDK_OFFSET(0x16445C30)
#define EKCBMKJJDNL_NCAOGJDNEKD_OFFSET UNITYSDK_OFFSET(0x16445DC0)
#define EKCBMKJJDNL_NJNOPGHGBBE_OFFSET UNITYSDK_OFFSET(0x164455B0)
#define EKCBMKJJDNL_PJHFPGBCNAJ_OFFSET UNITYSDK_OFFSET(0x16445FE0)
#define EKCBMKJJDNL__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x16445020)
#define EKCBMKJJDNL__ONBIND_OFFSET UNITYSDK_OFFSET(0x16445260)
#define EKCBMKJJDNL__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x16445200)
#define EKCBMKJJDNL__ONTICK_OFFSET UNITYSDK_OFFSET(0x164454E0)

inline static constexpr unsigned int EKCBMKJJDNL_TypeDefinitionIndex = 74103;

	class EKCBMKJJDNL : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::List_1<::FDOICPJGACI*>* GCIKKMGIPIO; // 0x60
		::UnityEngine::Transform* FHEMCAFOIKG; // 0x68
		::System::Action_1<::EANJILGOKBE*>* EFLDFAEDJIN; // 0x70
		::RPG::Client::AnimatorButton* IJMNHDMPNGH; // 0x78
		::KKHNFGNFJFD* GAFBGDNAEDO; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKCBMKJJDNL_CTOR_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKCBMKJJDNL__INITVARONCE_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + EKCBMKJJDNL__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKCBMKJJDNL__ONBIND_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKCBMKJJDNL_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EKCBMKJJDNL__ONTICK_OFFSET))(this, a1);
		}

		::System::Void LMNHKOCHGCL(::System::Collections::Generic::List_1<::IOIIFAENPNH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::IOIIFAENPNH*>*))((::PBYTE)hIl2Cpp + EKCBMKJJDNL_LMNHKOCHGCL_OFFSET))(this, a1);
		}

		::System::Void NCAOGJDNEKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKCBMKJJDNL_NCAOGJDNEKD_OFFSET))(this);
		}

		::System::Void EEEDFOHGLPN(::CMJPOKJIEGP a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMJPOKJIEGP))((::PBYTE)hIl2Cpp + EKCBMKJJDNL_EEEDFOHGLPN_OFFSET))(this, a1);
		}

		::System::Void PJHFPGBCNAJ(::AOPEILFBPHP a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOPEILFBPHP))((::PBYTE)hIl2Cpp + EKCBMKJJDNL_PJHFPGBCNAJ_OFFSET))(this, a1);
		}

		::System::Boolean DIICKFBCDDA(::System::Collections::Generic::List_1<::IOIIFAENPNH*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::IOIIFAENPNH*>*))((::PBYTE)hIl2Cpp + EKCBMKJJDNL_DIICKFBCDDA_OFFSET))(this, a1);
		}

		::System::Void MIPFOAFKBLH(::System::Collections::Generic::List_1<::IOIIFAENPNH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::IOIIFAENPNH*>*))((::PBYTE)hIl2Cpp + EKCBMKJJDNL_MIPFOAFKBLH_OFFSET))(this, a1);
		}

		::FDOICPJGACI* FDFIBKPPJDK(::IOIIFAENPNH* a1)
		{
			return ((::FDOICPJGACI*(*)(::PVOID, ::IOIIFAENPNH*))((::PBYTE)hIl2Cpp + EKCBMKJJDNL_FDFIBKPPJDK_OFFSET))(this, a1);
		}

		::System::Void ICPBEMGMKHJ(::FDOICPJGACI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDOICPJGACI*))((::PBYTE)hIl2Cpp + EKCBMKJJDNL_ICPBEMGMKHJ_OFFSET))(this, a1);
		}

		::System::Void JPNGAHINAPC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EKCBMKJJDNL_JPNGAHINAPC_OFFSET))(this, a1);
		}

		::EKCBMKJJDNL_ENEFIKAONIN NJNOPGHGBBE()
		{
			return ((::EKCBMKJJDNL_ENEFIKAONIN(*)(::PVOID))((::PBYTE)hIl2Cpp + EKCBMKJJDNL_NJNOPGHGBBE_OFFSET))(this);
		}

		::System::Int32 IMIKJMCGGML()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKCBMKJJDNL_IMIKJMCGGML_OFFSET))(this);
		}

	};
