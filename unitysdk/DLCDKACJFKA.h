#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/AdvNPCRunAwayPlayerStatus.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FOOIINCDBFA;
class KDJNAAOFMMJ;
namespace RPG::GameCore { class AdvNPCRunAwayPlayer; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define DLCDKACJFKA_BELOEPOPMEI_OFFSET UNITYSDK_OFFSET(0xF8946F0)
#define DLCDKACJFKA_BEPBDGBNNBC_OFFSET UNITYSDK_OFFSET(0xF891CA0)
#define DLCDKACJFKA_CCTOR_OFFSET UNITYSDK_OFFSET(0xF895BE0)
#define DLCDKACJFKA_CKLFKCDIKNO_OFFSET UNITYSDK_OFFSET(0xF894EB0)
#define DLCDKACJFKA_CTOR_OFFSET UNITYSDK_OFFSET(0xF8918F0)
#define DLCDKACJFKA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF891C30)
#define DLCDKACJFKA_EOIBMFKIIHL_OFFSET UNITYSDK_OFFSET(0xF891E30)
#define DLCDKACJFKA_FEKFKEPEKHC_OFFSET UNITYSDK_OFFSET(0xF894DA0)
#define DLCDKACJFKA_FHJCFGFFKME_OFFSET UNITYSDK_OFFSET(0xF894CD0)
#define DLCDKACJFKA_GMEMLICLJPC_OFFSET UNITYSDK_OFFSET(0xF8945F0)
#define DLCDKACJFKA_HDKDELPOLOM_OFFSET UNITYSDK_OFFSET(0xF8953D0)
#define DLCDKACJFKA_ILBGLLCIIFN_OFFSET UNITYSDK_OFFSET(0xF894FC0)
#define DLCDKACJFKA_IPIIKGMKMCA_OFFSET UNITYSDK_OFFSET(0xF895250)
#define DLCDKACJFKA_JOECFMLMGAP_OFFSET UNITYSDK_OFFSET(0xF895620)
#define DLCDKACJFKA_KFIDOFGOOHF_OFFSET UNITYSDK_OFFSET(0xF895340)
#define DLCDKACJFKA_KKJEGGBCIPJ_OFFSET UNITYSDK_OFFSET(0xF895130)
#define DLCDKACJFKA_MIMDAPHLJNM_OFFSET UNITYSDK_OFFSET(0xF892120)
#define DLCDKACJFKA_OIFLDBBPANB_OFFSET UNITYSDK_OFFSET(0xF894B10)
#define DLCDKACJFKA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF891FC0)
#define DLCDKACJFKA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF894000)
#define DLCDKACJFKA_TICK_OFFSET UNITYSDK_OFFSET(0xF8940E0)

inline static constexpr unsigned int DLCDKACJFKA_TypeDefinitionIndex = 52438;

	class DLCDKACJFKA : public ::GELIALJDFBL
	{
	public:
		::KDJNAAOFMMJ* JKCEICECDKM; // 0x18
		::UnityEngine::Coroutine* DMOCMFLCELA; // 0x20
		::RPG::GameCore::NPCComponent* EJLKKJJLJLJ; // 0x28
		::RPG::GameCore::AdventureCharacterController* OBNKEBHMIIL; // 0x30
		::RPG::GameCore::CharacterVisibleComponent* GFEDNOEAHIG; // 0x38
		::RPG::GameCore::TransformComponent* AHLEHJFOMCF; // 0x40
		::KDJNAAOFMMJ* GCHNLKBDOGM; // 0x48
		::KDJNAAOFMMJ* BECOCLOIHCF; // 0x50
		::RPG::GameCore::AdvNPCRunAwayPlayer* IGHAHBNLIJA; // 0x58
		::FOOIINCDBFA* JCHMONHBIFJ; // 0x60
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x68
		::System::Single FAPJMOLHPED; // 0x70
		::UnityEngine::Vector3 CNIOPJHPIIJ; // 0x74
		::System::Boolean EGJCFPKLAEA; // 0x80
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 MPEPJMMDDOJ; // 0x84
		::RPG::GameCore::AdvNPCRunAwayPlayerStatus CPPNFCBEJLK; // 0x90
		::System::Single BFNCIKMDMDG; // 0x94
		::System::Nullable_1<::UnityEngine::Vector3> LFIELBMBEFM; // 0x98
		::System::Byte _padding1[0x8];
		::UnityEngine::Vector3 DNNLBGCHGEI; // 0xA8
		::System::Int32 JFLHNFPPDFF; // 0xB4
		static ::System::Single* StaticGet_NINLIKBCLNF()
		{
			return (::System::Single*)UnitySDK::FromName("", "DLCDKACJFKA")->GetStaticField(0x13D20);
		}

		static ::System::Int32* StaticGet_FHDJJNNBLLD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DLCDKACJFKA")->GetStaticField(0x13D24);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNPCRunAwayPlayer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNPCRunAwayPlayer*))((::PBYTE)hIl2Cpp + DLCDKACJFKA_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLCDKACJFKA_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCDKACJFKA_DISPOSE_OFFSET))(this);
		}

		::System::Void BEPBDGBNNBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCDKACJFKA_BEPBDGBNNBC_OFFSET))(this);
		}

		::System::Void EOIBMFKIIHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCDKACJFKA_EOIBMFKIIHL_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCDKACJFKA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCDKACJFKA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DLCDKACJFKA_TICK_OFFSET))(this, a1);
		}

		::System::Void ILBGLLCIIFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCDKACJFKA_ILBGLLCIIFN_OFFSET))(this);
		}

		::System::Nullable_1<::System::Single> IPIIKGMKMCA(::RPG::GameCore::TransformComponent* a1)
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + DLCDKACJFKA_IPIIKGMKMCA_OFFSET))(this, a1);
		}

		::System::Boolean CKLFKCDIKNO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCDKACJFKA_CKLFKCDIKNO_OFFSET))(this);
		}

		::System::Boolean FEKFKEPEKHC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCDKACJFKA_FEKFKEPEKHC_OFFSET))(this);
		}

		::System::Boolean OIFLDBBPANB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCDKACJFKA_OIFLDBBPANB_OFFSET))(this);
		}

		::System::Void BELOEPOPMEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCDKACJFKA_BELOEPOPMEI_OFFSET))(this);
		}

		::System::Collections::IEnumerator* KFIDOFGOOHF()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCDKACJFKA_KFIDOFGOOHF_OFFSET))(this);
		}

		::System::Void KKJEGGBCIPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCDKACJFKA_KKJEGGBCIPJ_OFFSET))(this);
		}

		::System::Boolean MIMDAPHLJNM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCDKACJFKA_MIMDAPHLJNM_OFFSET))(this);
		}

		::System::Boolean JOECFMLMGAP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCDKACJFKA_JOECFMLMGAP_OFFSET))(this);
		}

		::System::Boolean FHJCFGFFKME()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCDKACJFKA_FHJCFGFFKME_OFFSET))(this);
		}

		::System::Boolean GMEMLICLJPC(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DLCDKACJFKA_GMEMLICLJPC_OFFSET))(this, a1);
		}

		::System::Boolean HDKDELPOLOM(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DLCDKACJFKA_HDKDELPOLOM_OFFSET))(this, a1, a2, a3);
		}

	};
