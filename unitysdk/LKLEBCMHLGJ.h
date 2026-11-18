#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class HFIDMCHECDJ;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define LKLEBCMHLGJ_AGEAOJNEPOC_OFFSET UNITYSDK_OFFSET(0x16C62130)
#define LKLEBCMHLGJ_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x16C614B0)
#define LKLEBCMHLGJ_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x16C616D0)
#define LKLEBCMHLGJ_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x16C61DF0)
#define LKLEBCMHLGJ_INEGOEGIOKM_OFFSET UNITYSDK_OFFSET(0x16C62210)
#define LKLEBCMHLGJ_JAIMGBEJCBK_OFFSET UNITYSDK_OFFSET(0x16C622A0)
#define LKLEBCMHLGJ_KNOOKLJAOGP_OFFSET UNITYSDK_OFFSET(0x16C61C20)
#define LKLEBCMHLGJ_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x16C61B90)
#define LKLEBCMHLGJ_NOKDJPCOGOC_OFFSET UNITYSDK_OFFSET(0x16C617F0)
#define LKLEBCMHLGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16C617A0)

inline static constexpr unsigned int LKLEBCMHLGJ_TypeDefinitionIndex = 82418;

class LKLEBCMHLGJ : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLEBCMHLGJ__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + LKLEBCMHLGJ_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLEBCMHLGJ_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void NOKDJPCOGOC(::HFIDMCHECDJ* JDBCANMOPJG)
	{
		return ((::System::Void(*)(::PVOID, ::HFIDMCHECDJ*))((::PBYTE)hIl2Cpp + LKLEBCMHLGJ_NOKDJPCOGOC_OFFSET))(this, JDBCANMOPJG);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + LKLEBCMHLGJ_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void KNOOKLJAOGP(::HFIDMCHECDJ* JDBCANMOPJG, ::System::Single MKANDLFGANE)
	{
		return ((::System::Void(*)(::HFIDMCHECDJ*, ::System::Single))((::PBYTE)hIl2Cpp + LKLEBCMHLGJ_KNOOKLJAOGP_OFFSET))(JDBCANMOPJG, MKANDLFGANE);
	}

	static ::System::Void HMLGKBFFNHI(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LKLEBCMHLGJ_HMLGKBFFNHI_OFFSET))(NJNCGJLHLKC);
	}

	::System::Void AGEAOJNEPOC(::HFIDMCHECDJ* JDBCANMOPJG)
	{
		return ((::System::Void(*)(::PVOID, ::HFIDMCHECDJ*))((::PBYTE)hIl2Cpp + LKLEBCMHLGJ_AGEAOJNEPOC_OFFSET))(this, JDBCANMOPJG);
	}

	::System::Void INEGOEGIOKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKLEBCMHLGJ_INEGOEGIOKM_OFFSET))(this);
	}

	static ::System::Void JAIMGBEJCBK(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + LKLEBCMHLGJ_JAIMGBEJCBK_OFFSET))(KECKGDFIALJ);
	}
};
