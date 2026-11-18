#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace Nap::NapECS { class EcsEntity; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define BHGOIJCAJFB_CDEBJPKPNGH_OFFSET UNITYSDK_OFFSET(0x169F3BB0)
#define BHGOIJCAJFB_CFINLEBEOPC_OFFSET UNITYSDK_OFFSET(0x169F33B0)
#define BHGOIJCAJFB_COBPIICGJJA_OFFSET UNITYSDK_OFFSET(0x169F2BD0)
#define BHGOIJCAJFB_DGEGLHGJALC_OFFSET UNITYSDK_OFFSET(0x169F2E30)
#define BHGOIJCAJFB_FNGDMKPLNKM_OFFSET UNITYSDK_OFFSET(0x169F31A0)
#define BHGOIJCAJFB_GALGFCPKMGC_1_OFFSET UNITYSDK_OFFSET(0x169F3A40)
#define BHGOIJCAJFB_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x169F37E0)
#define BHGOIJCAJFB_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x169F2800)
#define BHGOIJCAJFB_HFLHIEOELPH_OFFSET UNITYSDK_OFFSET(0x169F31E0)
#define BHGOIJCAJFB_IHBPFGHPJJP_OFFSET UNITYSDK_OFFSET(0x169F35F0)
#define BHGOIJCAJFB_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x169F2DA0)
#define BHGOIJCAJFB_JLEGHNGEBOG_OFFSET UNITYSDK_OFFSET(0x169F2FD0)
#define BHGOIJCAJFB_JLNLOHBMNNN_OFFSET UNITYSDK_OFFSET(0x169F3440)
#define BHGOIJCAJFB_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x169F39B0)
#define BHGOIJCAJFB_OKEDOCPENDA_OFFSET UNITYSDK_OFFSET(0x169F28F0)
#define BHGOIJCAJFB_ONADD_OFFSET UNITYSDK_OFFSET(0x169F25A0)
#define BHGOIJCAJFB_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x169F27C0)
#define BHGOIJCAJFB__CCTOR_OFFSET UNITYSDK_OFFSET(0x169F2850)
#define BHGOIJCAJFB__CTOR_OFFSET UNITYSDK_OFFSET(0x169F28D0)

inline static constexpr unsigned int BHGOIJCAJFB_TypeDefinitionIndex = 67361;

class BHGOIJCAJFB : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xE3; // 0x0
	::Foundation::AssetPath KHNILJHEHCN; // 0x48
	::UnityEngine::GameObject* JCFADCIKCOM; // 0x58
	::UnityEngine::Vector3 MALDOBJEKGI; // 0x60
	::UnityEngine::Vector3 EABDGIBIAFD; // 0x6C
	::UnityEngine::Vector3 MDLKEFEBKFF; // 0x78

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHGOIJCAJFB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHGOIJCAJFB__CTOR_OFFSET))(this);
	}

	::System::Void OnAdd(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + BHGOIJCAJFB_ONADD_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHGOIJCAJFB_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHGOIJCAJFB_GETCLASSID_OFFSET))(this);
	}

	::UnityEngine::Vector3 OKEDOCPENDA()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BHGOIJCAJFB_OKEDOCPENDA_OFFSET))(this);
	}

	::UnityEngine::Quaternion COBPIICGJJA()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + BHGOIJCAJFB_COBPIICGJJA_OFFSET))(this);
	}

	static ::BHGOIJCAJFB* JFDOOELFAOA()
	{
		return ((::BHGOIJCAJFB*(*)())((::PBYTE)hIl2Cpp + BHGOIJCAJFB_JFDOOELFAOA_OFFSET))();
	}

	::System::Void DGEGLHGJALC(::UnityEngine::Quaternion EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + BHGOIJCAJFB_DGEGLHGJALC_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Vector3 JLEGHNGEBOG()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BHGOIJCAJFB_JLEGHNGEBOG_OFFSET))(this);
	}

	::UnityEngine::Vector3 FNGDMKPLNKM()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BHGOIJCAJFB_FNGDMKPLNKM_OFFSET))(this);
	}

	::System::Void HFLHIEOELPH(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BHGOIJCAJFB_HFLHIEOELPH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CFINLEBEOPC(::Nap::NapECS::EcsEntity* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + BHGOIJCAJFB_CFINLEBEOPC_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void JLNLOHBMNNN(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BHGOIJCAJFB_JLNLOHBMNNN_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Vector3 IHBPFGHPJJP()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BHGOIJCAJFB_IHBPFGHPJJP_OFFSET))(this);
	}

	::System::Void GALGFCPKMGC(::UnityEngine::Vector3 CKPGOKHECCH, ::UnityEngine::Vector3 CFJFMMGPGKE, ::UnityEngine::Vector3 CLMNLPKFBFA, ::Foundation::AssetPath BLIGEBLANDA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + BHGOIJCAJFB_GALGFCPKMGC_OFFSET))(this, CKPGOKHECCH, CFJFMMGPGKE, CLMNLPKFBFA, BLIGEBLANDA);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHGOIJCAJFB_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void GALGFCPKMGC_1(::UnityEngine::Vector3 CKPGOKHECCH, ::UnityEngine::Vector3 CFJFMMGPGKE, ::UnityEngine::Vector3 CLMNLPKFBFA, ::System::String* BLIGEBLANDA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + BHGOIJCAJFB_GALGFCPKMGC_1_OFFSET))(this, CKPGOKHECCH, CFJFMMGPGKE, CLMNLPKFBFA, BLIGEBLANDA);
	}

	::System::Void CDEBJPKPNGH(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BHGOIJCAJFB_CDEBJPKPNGH_OFFSET))(this, EGEGIMGMJHN);
	}
};
