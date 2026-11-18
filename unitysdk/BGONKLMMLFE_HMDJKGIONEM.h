#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBHIKNMOHCG.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }

#define BGONKLMMLFE_HMDJKGIONEM_CMDHODDCFOD_OFFSET UNITYSDK_OFFSET(0x747E40)
#define BGONKLMMLFE_HMDJKGIONEM_ENADCIEBIBL_OFFSET UNITYSDK_OFFSET(0x747ED0)
#define BGONKLMMLFE_HMDJKGIONEM_PEIOPEEDDPD_OFFSET UNITYSDK_OFFSET(0x747EE0)
#define BGONKLMMLFE_HMDJKGIONEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C42A80)
#define BGONKLMMLFE_HMDJKGIONEM__CTOR_OFFSET UNITYSDK_OFFSET(0x747DA0)

inline static constexpr unsigned int BGONKLMMLFE_HMDJKGIONEM_TypeDefinitionIndex = 60785;

struct alignas(4) BGONKLMMLFE_HMDJKGIONEM
{
	static ::UnityEngine::Color* StaticGet_ELBOLGJMGEF()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(BGONKLMMLFE_HMDJKGIONEM_TypeDefinitionIndex)->GetStaticField(0x11230);
	}
	// static const ::System::Single MBPPJMLNJGE; // 0x0
	// static const ::System::Int32 JKOJIFMEDHA = 0x168; // 0x0
	::FBHIKNMOHCG EODBKDDMFON; // 0x10
	::UnityEngine::Vector3 OLLFNNGJCFN; // 0x14
	::UnityEngine::Vector3 AEOKBAOODKG; // 0x20
	::UnityEngine::Vector3 IAIGNDIOBAC; // 0x2C
	::System::Single GEEMKIKDHLB; // 0x38
	::System::Single GMLCBDGKHAC; // 0x3C
	::System::Single ODJLNMDABGB; // 0x40

	::System::Void _ctor(::FBHIKNMOHCG& MAJNEEALBKL, ::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3 KBHFBLJPFJH, ::UnityEngine::Vector3 CFJFMMGPGKE, ::System::Single NCCDJLDKFGA, ::System::Single AICBKFLPPJF, ::System::Single KKAMDFNMMJH)
	{
		return ((::System::Void(*)(::PVOID, ::FBHIKNMOHCG&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BGONKLMMLFE_HMDJKGIONEM__CTOR_OFFSET))(this, MAJNEEALBKL, OHOGDOMNHNK, KBHFBLJPFJH, CFJFMMGPGKE, NCCDJLDKFGA, AICBKFLPPJF, KKAMDFNMMJH);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGONKLMMLFE_HMDJKGIONEM__CCTOR_OFFSET))();
	}

	::System::Void CMDHODDCFOD(::UnityEngine::Vector3 GIAEPMKCBIB, ::UnityEngine::Vector3 DOBFFIICAII)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BGONKLMMLFE_HMDJKGIONEM_CMDHODDCFOD_OFFSET))(this, GIAEPMKCBIB, DOBFFIICAII);
	}

	::System::Void ENADCIEBIBL(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BGONKLMMLFE_HMDJKGIONEM_ENADCIEBIBL_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void PEIOPEEDDPD(::UnityEngine::Vector3 MPLDDNMCECG, ::System::Single ENENGINDMAN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + BGONKLMMLFE_HMDJKGIONEM_PEIOPEEDDPD_OFFSET))(this, MPLDDNMCECG, ENENGINDMAN);
	}
};
