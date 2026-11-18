#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class ENGKPGFGGLM;
class HGGBGKKEBCC;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsWorld; }

#define NAHNJKBGNNE_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x16B43AA0)
#define NAHNJKBGNNE_BOJEJMKNAEG_1_OFFSET UNITYSDK_OFFSET(0x16B43990)
#define NAHNJKBGNNE_BOJEJMKNAEG_OFFSET UNITYSDK_OFFSET(0x16B431A0)
#define NAHNJKBGNNE_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x16B43080)
#define NAHNJKBGNNE_DJDMHPLEHCA_OFFSET UNITYSDK_OFFSET(0x16B436C0)
#define NAHNJKBGNNE_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x16B43B40)
#define NAHNJKBGNNE_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x16B44210)
#define NAHNJKBGNNE_PMHJBNNPCLB_OFFSET UNITYSDK_OFFSET(0x16B43AF0)
#define NAHNJKBGNNE__CTOR_OFFSET UNITYSDK_OFFSET(0x16B43150)

inline static constexpr unsigned int NAHNJKBGNNE_TypeDefinitionIndex = 58124;

class NAHNJKBGNNE : public ::OAOOLPCNHKA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAHNJKBGNNE__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NAHNJKBGNNE_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	static ::System::Void BOJEJMKNAEG(::HGGBGKKEBCC* DGCGOJNDKPM)
	{
		return ((::System::Void(*)(::HGGBGKKEBCC*))((::PBYTE)hIl2Cpp + NAHNJKBGNNE_BOJEJMKNAEG_OFFSET))(DGCGOJNDKPM);
	}

	static ::System::Void DJDMHPLEHCA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAHNJKBGNNE_DJDMHPLEHCA_OFFSET))();
	}

	static ::System::Void BOJEJMKNAEG_1(::System::UInt32 ACHBBPJIBIE)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NAHNJKBGNNE_BOJEJMKNAEG_1_OFFSET))(ACHBBPJIBIE);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NAHNJKBGNNE_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
	}

	::System::Void PMHJBNNPCLB(::Nap::NapECS::EcsEntity* BFDPPMDEOFF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NAHNJKBGNNE_PMHJBNNPCLB_OFFSET))(this, BFDPPMDEOFF);
	}

	static ::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + NAHNJKBGNNE_KOLPCLEMHGJ_OFFSET))(FFNKDGGHBPP);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NAHNJKBGNNE_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}
};
