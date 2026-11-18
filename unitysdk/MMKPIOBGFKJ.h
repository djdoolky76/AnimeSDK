#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FBCHHDJFCHG;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define MMKPIOBGFKJ_ADMOIMJLCHI_OFFSET UNITYSDK_OFFSET(0x131A44E0)
#define MMKPIOBGFKJ_CHLHFJCLLNC_OFFSET UNITYSDK_OFFSET(0x131A4750)
#define MMKPIOBGFKJ_HIGEPLPMFBK_OFFSET UNITYSDK_OFFSET(0x131A4BC0)
#define MMKPIOBGFKJ_IFACPJMPPMM_OFFSET UNITYSDK_OFFSET(0x131A4CD0)
#define MMKPIOBGFKJ_LJAAGGAANJC_OFFSET UNITYSDK_OFFSET(0x131A44F0)
#define MMKPIOBGFKJ_LOAMKNDPKDK_OFFSET UNITYSDK_OFFSET(0x131A48E0)
#define MMKPIOBGFKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x131A4480)

inline static constexpr unsigned int MMKPIOBGFKJ_TypeDefinitionIndex = 44189;

class MMKPIOBGFKJ : public ::System::Object
{
public:
	::UnityEngine::Transform* JNLBPMKIFNK; // 0x10
	::Foundation::AssetRequestHandle _GAPABOCPMNO_k__BackingField; // 0x18
	::System::String* ABOMFKBGCAJ; // 0x38
	::FBCHHDJFCHG* PBICNKPNJLG; // 0x40
	::UnityEngine::Vector3 OHOGDOMNHNK; // 0x48
	::UnityEngine::LayerMask FBNGKPGLADH; // 0x54
	::UnityEngine::Quaternion BFBELMDIAHI; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKPIOBGFKJ__CTOR_OFFSET))(this);
	}

	::System::Void ADMOIMJLCHI(::Foundation::AssetRequestHandle EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + MMKPIOBGFKJ_ADMOIMJLCHI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LJAAGGAANJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKPIOBGFKJ_LJAAGGAANJC_OFFSET))(this);
	}

	::System::Void CHLHFJCLLNC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKPIOBGFKJ_CHLHFJCLLNC_OFFSET))(this);
	}

	::System::Void LOAMKNDPKDK(::UnityEngine::Object* NGLKIKLLLFL, ::Foundation::AssetRequestHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + MMKPIOBGFKJ_LOAMKNDPKDK_OFFSET))(this, NGLKIKLLLFL, PHHDHIBOCKA);
	}

	::Foundation::AssetRequestHandle IFACPJMPPMM()
	{
		return ((::Foundation::AssetRequestHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKPIOBGFKJ_IFACPJMPPMM_OFFSET))(this);
	}

	::System::Void HIGEPLPMFBK(::UnityEngine::GameObject* JEIDPPCEHLD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MMKPIOBGFKJ_HIGEPLPMFBK_OFFSET))(this, JEIDPPCEHLD);
	}
};
