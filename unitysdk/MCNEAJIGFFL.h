#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFNMABCCOEB.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/UnityEngine/Vector3.h"

class MKBBPOFGLOF;
namespace MoleMole { class AreaCategoryInOutSubsystem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define MCNEAJIGFFL_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x151C0D50)
#define MCNEAJIGFFL_DOPOGPEKJHH_OFFSET UNITYSDK_OFFSET(0x151C1510)
#define MCNEAJIGFFL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x151C0CE0)
#define MCNEAJIGFFL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x151C0A70)
#define MCNEAJIGFFL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x151C1770)
#define MCNEAJIGFFL__CTOR_OFFSET UNITYSDK_OFFSET(0x151C12D0)

inline static constexpr unsigned int MCNEAJIGFFL_TypeDefinitionIndex = 78799;

class MCNEAJIGFFL : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x28
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::String*>*>* IAELAPHOJJH; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* CKIOGAONLDB; // 0x38
	::MKBBPOFGLOF* BOHNBOELHDG; // 0x40
	::AAMKEDEDHPD_1<::System::String*>* FHFIGKGJJAJ; // 0x48
	::MKBBPOFGLOF* JAIGFKHCMPE; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCNEAJIGFFL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCNEAJIGFFL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MCNEAJIGFFL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MCNEAJIGFFL_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::Cysharp::Threading::Tasks::UniTask DOPOGPEKJHH(::MoleMole::AreaCategoryInOutSubsystem* HIIBPEFJLII, ::KFNMABCCOEB KNFKIGCNPIP, ::UnityEngine::Vector3 OHOGDOMNHNK, ::HOCDHMEPPEG AJHFDMLOGIF, ::HOCDHMEPPEG ENNCGJPONAO, ::System::Int32 FGNCENMOJID, ::System::Int32 BBGFBDFAINB)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::MoleMole::AreaCategoryInOutSubsystem*, ::KFNMABCCOEB, ::UnityEngine::Vector3, ::HOCDHMEPPEG, ::HOCDHMEPPEG, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MCNEAJIGFFL_DOPOGPEKJHH_OFFSET))(this, HIIBPEFJLII, KNFKIGCNPIP, OHOGDOMNHNK, AJHFDMLOGIF, ENNCGJPONAO, FGNCENMOJID, BBGFBDFAINB);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCNEAJIGFFL_GDEOPIBNOIN_OFFSET))(this);
	}
};
