#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectComponentFeatureEvent.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MorphBallBoosterMiddleware; }
namespace System { class EventArgs; }

#define DNBGHIHMJML_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x16BC1920)
#define DNBGHIHMJML_CCPELMHPLHC_OFFSET UNITYSDK_OFFSET(0x16BC0B80)
#define DNBGHIHMJML_CJPKLNBANDF_OFFSET UNITYSDK_OFFSET(0x16BC1910)
#define DNBGHIHMJML_DKJDLEPNKBC_OFFSET UNITYSDK_OFFSET(0x16BC16D0)
#define DNBGHIHMJML_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x16BC0F50)
#define DNBGHIHMJML_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x16BC1900)
#define DNBGHIHMJML_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x16BC14F0)
#define DNBGHIHMJML_KMDCNHNELAM_OFFSET UNITYSDK_OFFSET(0x16BC1730)
#define DNBGHIHMJML_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16BC0B30)
#define DNBGHIHMJML_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x16BC0D00)
#define DNBGHIHMJML_PENODOCBDMG_OFFSET UNITYSDK_OFFSET(0x16BC12E0)
#define DNBGHIHMJML_RECEIVEFEATUREEVENT_OFFSET UNITYSDK_OFFSET(0x16BC0E80)
#define DNBGHIHMJML__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BC0D50)
#define DNBGHIHMJML__CTOR_OFFSET UNITYSDK_OFFSET(0x16BC12A0)

inline static constexpr unsigned int DNBGHIHMJML_TypeDefinitionIndex = 67523;

class DNBGHIHMJML
{
public:
	::MoleMole::MorphBallBoosterMiddleware* LFNHNADIFLJ; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNBGHIHMJML__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBGHIHMJML__CTOR_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBGHIHMJML_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBGHIHMJML_ONRECYCLE_OFFSET))(this);
	}

	::System::Void ReceiveFeatureEvent(::Foundation::ViewObject::EViewObjectComponentFeatureEvent FFNKDGGHBPP, ::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + DNBGHIHMJML_RECEIVEFEATUREEVENT_OFFSET))(this, FFNKDGGHBPP, MNDIBLLFAJI);
	}

	::System::Void PENODOCBDMG(::System::Nullable_1<::UnityEngine::Vector3> OPNKKCDJCMC, ::System::Nullable_1<::System::Single> GDMLGEFCEAH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + DNBGHIHMJML_PENODOCBDMG_OFFSET))(this, OPNKKCDJCMC, GDMLGEFCEAH);
	}

	::System::Void JJEJHGOJOII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBGHIHMJML_JJEJHGOJOII_OFFSET))(this);
	}

	::System::Void DKJDLEPNKBC(::Foundation::ViewObject::EViewObjectComponentFeatureEvent MIALFKCCCPI, ::System::EventArgs* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::EViewObjectComponentFeatureEvent, ::System::EventArgs*))((::PBYTE)hIl2Cpp + DNBGHIHMJML_DKJDLEPNKBC_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KMDCNHNELAM(::MoleMole::EntityHandle HODAIDNDKHD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + DNBGHIHMJML_KMDCNHNELAM_OFFSET))(this, HODAIDNDKHD);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBGHIHMJML_ILHIIDBCNEC_OFFSET))(this);
	}

	::MoleMole::MorphBallBoosterMiddleware* CJPKLNBANDF()
	{
		return ((::MoleMole::MorphBallBoosterMiddleware*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBGHIHMJML_CJPKLNBANDF_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBGHIHMJML_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void CCPELMHPLHC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBGHIHMJML_CCPELMHPLHC_OFFSET))(this);
	}

	::System::Void HMLGKBFFNHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBGHIHMJML_HMLGKBFFNHI_OFFSET))(this);
	}
};
