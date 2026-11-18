#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AELILFOCPFC.h"
#include "unitysdk/Dest/Math/Box3.h"
#include "unitysdk/Dest/Math/Capsule3.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MEAKCNLKBEJ_DCKFBFCKKOK_OFFSET UNITYSDK_OFFSET(0x5ED530)
#define MEAKCNLKBEJ_IDNODBEIBNO_1_OFFSET UNITYSDK_OFFSET(0x15928EA0)
#define MEAKCNLKBEJ_IDNODBEIBNO_OFFSET UNITYSDK_OFFSET(0x15928D20)
#define MEAKCNLKBEJ_JCIODAGLLGB_1_OFFSET UNITYSDK_OFFSET(0x15928E60)
#define MEAKCNLKBEJ_JCIODAGLLGB_OFFSET UNITYSDK_OFFSET(0x15928E30)
#define MEAKCNLKBEJ_KFOCKDFGMLB_OFFSET UNITYSDK_OFFSET(0x5ED4B0)
#define MEAKCNLKBEJ_MBCDAOBLBGB_OFFSET UNITYSDK_OFFSET(0x76D090)
#define MEAKCNLKBEJ_NKDCADABLCL_OFFSET UNITYSDK_OFFSET(0x76D0D0)
#define MEAKCNLKBEJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x15928D10)

inline static constexpr unsigned int MEAKCNLKBEJ_TypeDefinitionIndex = 49590;

struct alignas(4) MEAKCNLKBEJ
{
	static ::MEAKCNLKBEJ* StaticGet_FGBLILBNEHG()
	{
		return (::MEAKCNLKBEJ*)Il2CppClass::FromTypeDefinitionIndex(MEAKCNLKBEJ_TypeDefinitionIndex)->GetStaticField(0xDBB0);
	}
	::AELILFOCPFC FNLGDLHAEGD; // 0x10
	::Dest::Math::Capsule3 FEMPMKEFHJC; // 0x14
	::Dest::Math::Box3 PBCMOBMOJOM; // 0x14

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEAKCNLKBEJ__CCTOR_OFFSET))();
	}

	/*
	static ::MEAKCNLKBEJ IDNODBEIBNO(::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3 JBCNPOHMGPE, ::System::Single KKAMDFNMMJH, ::System::Single NCCDJLDKFGA)
	{
		return ((::MEAKCNLKBEJ(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MEAKCNLKBEJ_IDNODBEIBNO_OFFSET))(OHOGDOMNHNK, JBCNPOHMGPE, KKAMDFNMMJH, NCCDJLDKFGA);
	}
	*/

	::System::Boolean DCKFBFCKKOK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEAKCNLKBEJ_DCKFBFCKKOK_OFFSET))(this);
	}

	::System::Void MBCDAOBLBGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEAKCNLKBEJ_MBCDAOBLBGB_OFFSET))(this);
	}

	/*
	static ::Dest::Math::Box3 JCIODAGLLGB(::MEAKCNLKBEJ& ECMMKCJLBMD)
	{
		return ((::Dest::Math::Box3(*)(::MEAKCNLKBEJ&))((::PBYTE)hIl2Cpp + MEAKCNLKBEJ_JCIODAGLLGB_OFFSET))(ECMMKCJLBMD);
	}
	*/

	/*
	static ::Dest::Math::Capsule3 JCIODAGLLGB_1(::MEAKCNLKBEJ& ECMMKCJLBMD)
	{
		return ((::Dest::Math::Capsule3(*)(::MEAKCNLKBEJ&))((::PBYTE)hIl2Cpp + MEAKCNLKBEJ_JCIODAGLLGB_1_OFFSET))(ECMMKCJLBMD);
	}
	*/

	::System::Boolean KFOCKDFGMLB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEAKCNLKBEJ_KFOCKDFGMLB_OFFSET))(this);
	}

	/*
	static ::MEAKCNLKBEJ IDNODBEIBNO_1(::UnityEngine::Vector3 KDEHMPGOCEP, ::UnityEngine::Vector3 PADJNMGMGHO, ::System::Single NCCDJLDKFGA)
	{
		return ((::MEAKCNLKBEJ(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MEAKCNLKBEJ_IDNODBEIBNO_1_OFFSET))(KDEHMPGOCEP, PADJNMGMGHO, NCCDJLDKFGA);
	}
	*/

	::System::Boolean NKDCADABLCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEAKCNLKBEJ_NKDCADABLCL_OFFSET))(this);
	}
};
