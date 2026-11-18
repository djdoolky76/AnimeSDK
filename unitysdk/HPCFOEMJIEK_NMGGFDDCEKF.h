#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class HPCFOEMJIEK;
namespace MoleMole { class ConfigTimelineData; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HPCFOEMJIEK_NMGGFDDCEKF_FGDJOAANEHC_OFFSET UNITYSDK_OFFSET(0x10128940)
#define HPCFOEMJIEK_NMGGFDDCEKF_OOIEHAJLFFG_OFFSET UNITYSDK_OFFSET(0x101288D0)
#define HPCFOEMJIEK_NMGGFDDCEKF__CTOR_OFFSET UNITYSDK_OFFSET(0x101288C0)

inline static constexpr unsigned int HPCFOEMJIEK_NMGGFDDCEKF_TypeDefinitionIndex = 83293;

class HPCFOEMJIEK_NMGGFDDCEKF : public ::System::Object
{
public:
	::HPCFOEMJIEK* KLHPEBKNIFB; // 0x10
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::Foundation::AssetPath, ::MoleMole::ConfigTimelineData*>>* KEJJKECGLOP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCFOEMJIEK_NMGGFDDCEKF__CTOR_OFFSET))(this);
	}

	::System::Void OOIEHAJLFFG(::Foundation::AssetPath OIIHCACKLHD, ::MoleMole::ConfigTimelineData* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::ConfigTimelineData*))((::PBYTE)hIl2Cpp + HPCFOEMJIEK_NMGGFDDCEKF_OOIEHAJLFFG_OFFSET))(this, OIIHCACKLHD, DFMKILICPFB);
	}

	::System::Void FGDJOAANEHC(::System::Collections::Generic::IEnumerable_1<::MoleMole::ConfigTimelineData*>* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::ConfigTimelineData*>*))((::PBYTE)hIl2Cpp + HPCFOEMJIEK_NMGGFDDCEKF_FGDJOAANEHC_OFFSET))(this, PIIPCLCCOIG);
	}
};
