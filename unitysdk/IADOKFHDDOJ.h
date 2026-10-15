#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALAHCOICOLM;
namespace ObservableCollections { template <typename T> class ObservableList_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }

#define IADOKFHDDOJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x15DF4C50)
#define IADOKFHDDOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15DF4C40)
#define IADOKFHDDOJ_DHCECDODIJN_OFFSET UNITYSDK_OFFSET(0x15DF4DA0)
#define IADOKFHDDOJ_GET_ISOVERRIDEPANELVISIBLE_OFFSET UNITYSDK_OFFSET(0x15DF4D80)
#define IADOKFHDDOJ_GET_ISSLOTLISTVISIBLE_OFFSET UNITYSDK_OFFSET(0x15DF4D70)
#define IADOKFHDDOJ_GET_SLOTS_OFFSET UNITYSDK_OFFSET(0x15DF4D90)
#define IADOKFHDDOJ_MLKBLGCOLCA_OFFSET UNITYSDK_OFFSET(0x15DF4E30)
#define IADOKFHDDOJ_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x15DF4F60)

inline static constexpr unsigned int IADOKFHDDOJ_TypeDefinitionIndex = 49717;

	class IADOKFHDDOJ : public ::System::Object
	{
	public:
		::ObservableCollections::ObservableList_1<::ALAHCOICOLM*>* _Slots_k__BackingField; // 0x10
		::R3::ReactiveProperty_1<::System::Boolean>* _IsOverridePanelVisible_k__BackingField; // 0x18
		::R3::ReactiveProperty_1<::System::Boolean>* _IsSlotListVisible_k__BackingField; // 0x20
		// static const ::System::Object KLDOOKEFEMH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IADOKFHDDOJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IADOKFHDDOJ_CTOR_1_OFFSET))(this, a1);
		}

		::R3::ReactiveProperty_1<::System::Boolean>* get_IsSlotListVisible()
		{
			return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IADOKFHDDOJ_GET_ISSLOTLISTVISIBLE_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::Boolean>* get_IsOverridePanelVisible()
		{
			return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IADOKFHDDOJ_GET_ISOVERRIDEPANELVISIBLE_OFFSET))(this);
		}

		::ObservableCollections::ObservableList_1<::ALAHCOICOLM*>* get_Slots()
		{
			return ((::ObservableCollections::ObservableList_1<::ALAHCOICOLM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IADOKFHDDOJ_GET_SLOTS_OFFSET))(this);
		}

		::ALAHCOICOLM* DHCECDODIJN(::System::Int32 a1)
		{
			return ((::ALAHCOICOLM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IADOKFHDDOJ_DHCECDODIJN_OFFSET))(this, a1);
		}

		::System::Boolean MLKBLGCOLCA(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + IADOKFHDDOJ_MLKBLGCOLCA_OFFSET))(this, a1, a2);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IADOKFHDDOJ_PJPFIHFAHGO_OFFSET))(this);
		}

	};
