#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoEffectPluginConstantScreenSize; }
namespace MoleMole { class MonoEffectPluginFollowCamera; }
namespace UnityEngine { class Transform; }

#define OAJHPLFEFLC_GALGFCPKMGC_1_OFFSET UNITYSDK_OFFSET(0xE0E1E30)
#define OAJHPLFEFLC_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0xE0E1DE0)
#define OAJHPLFEFLC_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xE0E1CC0)
#define OAJHPLFEFLC_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0xE0E2000)
#define OAJHPLFEFLC_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0xE0E20C0)
#define OAJHPLFEFLC_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xE0E1BD0)
#define OAJHPLFEFLC__CCTOR_OFFSET UNITYSDK_OFFSET(0xE0E1D10)
#define OAJHPLFEFLC__CTOR_OFFSET UNITYSDK_OFFSET(0xE0E1D90)

inline static constexpr unsigned int OAJHPLFEFLC_TypeDefinitionIndex = 45419;

class OAJHPLFEFLC : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xBF; // 0x0
	::MoleMole::MonoEffectPluginConstantScreenSize* CBDLBGIFLEE; // 0x48
	::UnityEngine::Transform* IOKELNPAHPL; // 0x50
	::UnityEngine::Transform* HFNHJDMMEFK; // 0x58
	::MoleMole::MonoEffectPluginFollowCamera* HGKJJNMGGFM; // 0x60
	::System::Single KKBOKBBDAEI; // 0x68
	::System::Single PIAPPEECNCF; // 0x6C
	::UnityEngine::Vector3 MCNLHBPNGFA; // 0x70
	::UnityEngine::Vector3 POBHBJPPKJB; // 0x7C
	::System::Single POLMDFIGOKN; // 0x88
	::UnityEngine::Vector2 NLOMNHFAEHK; // 0x8C
	::System::Boolean NNPGIAAOEIG; // 0x94
	::System::Boolean GHGBHAOHIEI; // 0x95
	::System::Byte _padding0[0x2];
	::UnityEngine::Vector2 OOBFMPLMJPD; // 0x98
	::UnityEngine::Vector3 IJILACPBCMC; // 0xA0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAJHPLFEFLC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAJHPLFEFLC__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAJHPLFEFLC_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAJHPLFEFLC_GETCLASSID_OFFSET))(this);
	}

	::System::Void GALGFCPKMGC(::MoleMole::MonoEffectPluginFollowCamera* KFOKBGJMDEC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginFollowCamera*))((::PBYTE)hIl2Cpp + OAJHPLFEFLC_GALGFCPKMGC_OFFSET))(this, KFOKBGJMDEC);
	}

	::System::Void GALGFCPKMGC_1(::MoleMole::MonoEffectPluginConstantScreenSize* MCNBIILENHH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginConstantScreenSize*))((::PBYTE)hIl2Cpp + OAJHPLFEFLC_GALGFCPKMGC_1_OFFSET))(this, MCNBIILENHH);
	}

	static ::OAJHPLFEFLC* JFDOOELFAOA()
	{
		return ((::OAJHPLFEFLC*(*)())((::PBYTE)hIl2Cpp + OAJHPLFEFLC_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAJHPLFEFLC_MEFBHFEOKGH_OFFSET))(this);
	}
};
