#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Bounds.h"
class PGGLHFNEMCN;
namespace RPG::Client { class MonoEmoPlayableGraph; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define NCGGFMLOPHB_CCTOR_OFFSET UNITYSDK_OFFSET(0xBB0F810)
#define NCGGFMLOPHB_CLEAR_OFFSET UNITYSDK_OFFSET(0xBB0EE90)
#define NCGGFMLOPHB_CTOR_OFFSET UNITYSDK_OFFSET(0xBB0F800)
#define NCGGFMLOPHB_HGNJNMMNBJM_OFFSET UNITYSDK_OFFSET(0xBB0F160)
#define NCGGFMLOPHB_HHIKIIMHMKB_OFFSET UNITYSDK_OFFSET(0xBB0F2D0)
#define NCGGFMLOPHB_HODBHHDHOCA_OFFSET UNITYSDK_OFFSET(0xBB0EFB0)
#define NCGGFMLOPHB_IMEGHKJFFCI_OFFSET UNITYSDK_OFFSET(0xBB0F380)
#define NCGGFMLOPHB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBB0EDE0)
#define NCGGFMLOPHB_LDACLLAPFBO_OFFSET UNITYSDK_OFFSET(0xBB0ED70)
#define NCGGFMLOPHB_MFABGEDFBAM_OFFSET UNITYSDK_OFFSET(0xBB0F090)
#define NCGGFMLOPHB_PCMPBLPELOB_OFFSET UNITYSDK_OFFSET(0xBB0EF30)
#define NCGGFMLOPHB_PFNPFKAEHGF_OFFSET UNITYSDK_OFFSET(0xBB0F020)

	class NCGGFMLOPHB : public ::System::Object
	{
	public:
		::RPG::Client::MonoEmoPlayableGraph* CEODOONOFBM; // 0x10
		::UnityEngine::Vector2 EMJMDGFPPBG; // 0x18
		::UnityEngine::Vector2 GNEDDHJDNMK; // 0x20
		::UnityEngine::Vector2 MDOCBCLPNIH; // 0x28
		::System::Boolean FOBGFIPLPDN; // 0x30
		::System::Boolean OELBLBCINNB; // 0x31
		::System::Boolean DGPHEEPHEFD; // 0x32
		::System::Boolean BLPDPHFBBIJ; // 0x33
		::UnityEngine::Vector2 OHLIBFDCIKO; // 0x34
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_LAFHHEBDELI()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)UnitySDK::FromName("", "NCGGFMLOPHB")->GetStaticField(0x257A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGGFMLOPHB_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCGGFMLOPHB_CCTOR_OFFSET))();
		}

		::System::Void LDACLLAPFBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGGFMLOPHB_LDACLLAPFBO_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::MonoEmoPlayableGraph* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEmoPlayableGraph*))((::PBYTE)hIl2Cpp + NCGGFMLOPHB_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGGFMLOPHB_CLEAR_OFFSET))(this);
		}

		::System::Boolean PCMPBLPELOB(::RPG::Client::MonoEmoPlayableGraph* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoEmoPlayableGraph*))((::PBYTE)hIl2Cpp + NCGGFMLOPHB_PCMPBLPELOB_OFFSET))(this, a1);
		}

		::System::Void HODBHHDHOCA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NCGGFMLOPHB_HODBHHDHOCA_OFFSET))(this, a1);
		}

		::System::Void PFNPFKAEHGF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NCGGFMLOPHB_PFNPFKAEHGF_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::PlayableGraph MFABGEDFBAM()
		{
			return ((::UnityEngine::Playables::PlayableGraph(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGGFMLOPHB_MFABGEDFBAM_OFFSET))(this);
		}

		::System::Boolean HGNJNMMNBJM(::PGGLHFNEMCN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PGGLHFNEMCN*))((::PBYTE)hIl2Cpp + NCGGFMLOPHB_HGNJNMMNBJM_OFFSET))(this, a1);
		}

		::System::Boolean HHIKIIMHMKB(::UnityEngine::SkinnedMeshRenderer* a1, ::UnityEngine::Bounds a2, ::PGGLHFNEMCN* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Bounds, ::PGGLHFNEMCN*))((::PBYTE)hIl2Cpp + NCGGFMLOPHB_HHIKIIMHMKB_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IMEGHKJFFCI(::UnityEngine::Bounds a1, ::PGGLHFNEMCN* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds, ::PGGLHFNEMCN*))((::PBYTE)hIl2Cpp + NCGGFMLOPHB_IMEGHKJFFCI_OFFSET))(this, a1, a2);
		}

	};
