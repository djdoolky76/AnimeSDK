#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

namespace MoleMole { class MonoStageEnv; }
namespace UnityEngine { class GameObject; }

#define DHLJPEOBEGH_BBHKDKPFEGO_OFFSET UNITYSDK_OFFSET(0x16BA0950)
#define DHLJPEOBEGH_FNDJIFBAGEE_OFFSET UNITYSDK_OFFSET(0x16BA0AA0)
#define DHLJPEOBEGH_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x16BA07E0)
#define DHLJPEOBEGH_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x16BA08D0)
#define DHLJPEOBEGH_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x16BA0A10)
#define DHLJPEOBEGH_OGGLLBBNBAB_OFFSET UNITYSDK_OFFSET(0x16BA08C0)
#define DHLJPEOBEGH_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x16BA0790)
#define DHLJPEOBEGH__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BA0830)
#define DHLJPEOBEGH__CTOR_OFFSET UNITYSDK_OFFSET(0x16BA08B0)

inline static constexpr unsigned int DHLJPEOBEGH_TypeDefinitionIndex = 71602;

class DHLJPEOBEGH : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x4E; // 0x0
	::UnityEngine::GameObject* CILPLOIOKOA; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHLJPEOBEGH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLJPEOBEGH__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLJPEOBEGH_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLJPEOBEGH_GETCLASSID_OFFSET))(this);
	}

	::UnityEngine::GameObject* OGGLLBBNBAB()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLJPEOBEGH_OGGLLBBNBAB_OFFSET))(this);
	}

	static ::DHLJPEOBEGH* JFDOOELFAOA()
	{
		return ((::DHLJPEOBEGH*(*)())((::PBYTE)hIl2Cpp + DHLJPEOBEGH_JFDOOELFAOA_OFFSET))();
	}

	::MoleMole::MonoStageEnv* BBHKDKPFEGO()
	{
		return ((::MoleMole::MonoStageEnv*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLJPEOBEGH_BBHKDKPFEGO_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLJPEOBEGH_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void FNDJIFBAGEE(::UnityEngine::GameObject* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DHLJPEOBEGH_FNDJIFBAGEE_OFFSET))(this, EGEGIMGMJHN);
	}
};
