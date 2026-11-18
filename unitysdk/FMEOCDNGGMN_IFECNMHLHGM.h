#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class FMEOCDNGGMN;
namespace MoleMole { class ConfigTimelineDataExtra; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FMEOCDNGGMN_IFECNMHLHGM_FGDJOAANEHC_OFFSET UNITYSDK_OFFSET(0x156C9130)
#define FMEOCDNGGMN_IFECNMHLHGM_OOIEHAJLFFG_OFFSET UNITYSDK_OFFSET(0x156C97D0)
#define FMEOCDNGGMN_IFECNMHLHGM__CTOR_OFFSET UNITYSDK_OFFSET(0x156C9120)

inline static constexpr unsigned int FMEOCDNGGMN_IFECNMHLHGM_TypeDefinitionIndex = 84868;

class FMEOCDNGGMN_IFECNMHLHGM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::Foundation::AssetPath, ::MoleMole::ConfigTimelineDataExtra*>>* KEJJKECGLOP; // 0x10
	::FMEOCDNGGMN* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMEOCDNGGMN_IFECNMHLHGM__CTOR_OFFSET))(this);
	}

	::System::Void FGDJOAANEHC(::System::Collections::Generic::IEnumerable_1<::MoleMole::ConfigTimelineDataExtra*>* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::ConfigTimelineDataExtra*>*))((::PBYTE)hIl2Cpp + FMEOCDNGGMN_IFECNMHLHGM_FGDJOAANEHC_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void OOIEHAJLFFG(::Foundation::AssetPath OIIHCACKLHD, ::MoleMole::ConfigTimelineDataExtra* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::ConfigTimelineDataExtra*))((::PBYTE)hIl2Cpp + FMEOCDNGGMN_IFECNMHLHGM_OOIEHAJLFFG_OFFSET))(this, OIIHCACKLHD, DFMKILICPFB);
	}
};
