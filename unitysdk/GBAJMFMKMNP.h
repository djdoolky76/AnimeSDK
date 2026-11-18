#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"
#include "unitysdk/StateTreeCore/StateTreeDataView.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataDesc.h"
#include "unitysdk/UnrealTypes/NativeListView_1.h"
#include "unitysdk/UnrealTypes/ReadOnlyNativeListView_1.h"

namespace StateTreeCore { class StateTree; }
namespace UnrealTypes { class Object; }

#define GBAJMFMKMNP_GET_ISBOUND_OFFSET UNITYSDK_OFFSET(0x48C0E0)
#define GBAJMFMKMNP_KOLDFDJNAMG_OFFSET UNITYSDK_OFFSET(0x6E0230)
#define GBAJMFMKMNP_STATETREECORE_IEXTERNALDATACOLLECTOR_COLLECTEXTERNALDATA_OFFSET UNITYSDK_OFFSET(0x6E0170)
#define GBAJMFMKMNP__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)

inline static constexpr unsigned int GBAJMFMKMNP_TypeDefinitionIndex = 60006;

struct alignas(8) GBAJMFMKMNP
{
	::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*> HOHOHPHGHBO; // 0x10

	::System::Void _ctor(::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*> FFJBLFCLKLF)
	{
		return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>))((::PBYTE)hIl2Cpp + GBAJMFMKMNP__CTOR_OFFSET))(this, FFJBLFCLKLF);
	}

	::System::Boolean get_IsBound()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBAJMFMKMNP_GET_ISBOUND_OFFSET))(this);
	}

	::System::Boolean StateTreeCore_IExternalDataCollector_CollectExternalData(::StateTreeCore::StateTreeExecutionContext& AAOCANGHBDG, ::UnrealTypes::TObjectHandle_1<::StateTreeCore::StateTree*> EFHACKCKCGC, ::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreeExternalDataDesc> BMIKMLFJFDC, ::UnrealTypes::NativeListView_1<::StateTreeCore::StateTreeDataView> LDODOFGHPEO)
	{
		return ((::System::Boolean(*)(::PVOID, ::StateTreeCore::StateTreeExecutionContext&, ::UnrealTypes::TObjectHandle_1<::StateTreeCore::StateTree*>, ::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreeExternalDataDesc>, ::UnrealTypes::NativeListView_1<::StateTreeCore::StateTreeDataView>))((::PBYTE)hIl2Cpp + GBAJMFMKMNP_STATETREECORE_IEXTERNALDATACOLLECTOR_COLLECTEXTERNALDATA_OFFSET))(this, AAOCANGHBDG, EFHACKCKCGC, BMIKMLFJFDC, LDODOFGHPEO);
	}

	::System::Boolean KOLDFDJNAMG(::StateTreeCore::StateTreeExecutionContext& AAOCANGHBDG, ::UnrealTypes::TObjectHandle_1<::StateTreeCore::StateTree*> EFHACKCKCGC, ::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreeExternalDataDesc> BMIKMLFJFDC, ::UnrealTypes::NativeListView_1<::StateTreeCore::StateTreeDataView> LDODOFGHPEO)
	{
		return ((::System::Boolean(*)(::PVOID, ::StateTreeCore::StateTreeExecutionContext&, ::UnrealTypes::TObjectHandle_1<::StateTreeCore::StateTree*>, ::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreeExternalDataDesc>, ::UnrealTypes::NativeListView_1<::StateTreeCore::StateTreeDataView>))((::PBYTE)hIl2Cpp + GBAJMFMKMNP_KOLDFDJNAMG_OFFSET))(this, AAOCANGHBDG, EFHACKCKCGC, BMIKMLFJFDC, LDODOFGHPEO);
	}
};
