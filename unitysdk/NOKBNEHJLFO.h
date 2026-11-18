#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class OAJHPLFEFLC;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace UnityEngine { class Camera; }

#define NOKBNEHJLFO_AHDLBAAJCCC_OFFSET UNITYSDK_OFFSET(0x172B8B60)
#define NOKBNEHJLFO_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x172B9E60)
#define NOKBNEHJLFO_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x172B8700)
#define NOKBNEHJLFO_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x172B8FE0)
#define NOKBNEHJLFO_KADDIEOEOMF_OFFSET UNITYSDK_OFFSET(0x172B8BF0)
#define NOKBNEHJLFO_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x172B8AD0)
#define NOKBNEHJLFO_NHGGHJLEHPI_OFFSET UNITYSDK_OFFSET(0x172B9730)
#define NOKBNEHJLFO_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x172B8910)
#define NOKBNEHJLFO__CTOR_OFFSET UNITYSDK_OFFSET(0x172B8A80)

inline static constexpr unsigned int NOKBNEHJLFO_TypeDefinitionIndex = 62169;

class NOKBNEHJLFO : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKBNEHJLFO__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NOKBNEHJLFO_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void PostLateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKBNEHJLFO_POSTLATEUPDATE_OFFSET))(this);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NOKBNEHJLFO_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void AHDLBAAJCCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKBNEHJLFO_AHDLBAAJCCC_OFFSET))(this);
	}

	static ::System::Single KADDIEOEOMF(::UnityEngine::Camera* LLFDABJAHII, ::OAJHPLFEFLC* EBGOKAEOKMG)
	{
		return ((::System::Single(*)(::UnityEngine::Camera*, ::OAJHPLFEFLC*))((::PBYTE)hIl2Cpp + NOKBNEHJLFO_KADDIEOEOMF_OFFSET))(LLFDABJAHII, EBGOKAEOKMG);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NOKBNEHJLFO_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::System::Void NHGGHJLEHPI(::OAJHPLFEFLC* EBGOKAEOKMG)
	{
		return ((::System::Void(*)(::OAJHPLFEFLC*))((::PBYTE)hIl2Cpp + NOKBNEHJLFO_NHGGHJLEHPI_OFFSET))(EBGOKAEOKMG);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NOKBNEHJLFO_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
	}
};
