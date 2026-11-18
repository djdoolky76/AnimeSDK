#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

namespace MoleMole { class MonoStageEnv; }
namespace MoleMole::Config { class StageEntry; }
namespace UnityEngine { class GameObject; }

#define GOPHICLGFAA_APAOFIKOBIC_OFFSET UNITYSDK_OFFSET(0x15B338D0)
#define GOPHICLGFAA_FNDJIFBAGEE_OFFSET UNITYSDK_OFFSET(0x15B33980)
#define GOPHICLGFAA_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x15B33990)
#define GOPHICLGFAA_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15B33750)
#define GOPHICLGFAA_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x15B338E0)
#define GOPHICLGFAA_KFNAHHHGCDH_OFFSET UNITYSDK_OFFSET(0x15B33830)
#define GOPHICLGFAA_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x15B33840)
#define GOPHICLGFAA_MHBJNFLELNH_OFFSET UNITYSDK_OFFSET(0x15B33970)
#define GOPHICLGFAA_OGGLLBBNBAB_OFFSET UNITYSDK_OFFSET(0x15B33960)
#define GOPHICLGFAA_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15B33700)
#define GOPHICLGFAA__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B337A0)
#define GOPHICLGFAA__CTOR_OFFSET UNITYSDK_OFFSET(0x15B33820)

inline static constexpr unsigned int GOPHICLGFAA_TypeDefinitionIndex = 83657;

class GOPHICLGFAA : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x74; // 0x0
	::MoleMole::Config::StageEntry* JPJCBMBBLLF; // 0x48
	::MoleMole::MonoStageEnv* EHFGILKJFDF; // 0x50
	::UnityEngine::GameObject* CILPLOIOKOA; // 0x58

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOPHICLGFAA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOPHICLGFAA__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOPHICLGFAA_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOPHICLGFAA_GETCLASSID_OFFSET))(this);
	}

	::System::Void KFNAHHHGCDH(::MoleMole::MonoStageEnv* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoStageEnv*))((::PBYTE)hIl2Cpp + GOPHICLGFAA_KFNAHHHGCDH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOPHICLGFAA_MEFBHFEOKGH_OFFSET))(this);
	}

	::MoleMole::MonoStageEnv* APAOFIKOBIC()
	{
		return ((::MoleMole::MonoStageEnv*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOPHICLGFAA_APAOFIKOBIC_OFFSET))(this);
	}

	static ::GOPHICLGFAA* JFDOOELFAOA()
	{
		return ((::GOPHICLGFAA*(*)())((::PBYTE)hIl2Cpp + GOPHICLGFAA_JFDOOELFAOA_OFFSET))();
	}

	::UnityEngine::GameObject* OGGLLBBNBAB()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOPHICLGFAA_OGGLLBBNBAB_OFFSET))(this);
	}

	::MoleMole::Config::StageEntry* MHBJNFLELNH()
	{
		return ((::MoleMole::Config::StageEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOPHICLGFAA_MHBJNFLELNH_OFFSET))(this);
	}

	::System::Void FNDJIFBAGEE(::UnityEngine::GameObject* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + GOPHICLGFAA_FNDJIFBAGEE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GALGFCPKMGC(::MoleMole::Config::StageEntry* HNMINGJFFPA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::StageEntry*))((::PBYTE)hIl2Cpp + GOPHICLGFAA_GALGFCPKMGC_OFFSET))(this, HNMINGJFFPA);
	}
};
