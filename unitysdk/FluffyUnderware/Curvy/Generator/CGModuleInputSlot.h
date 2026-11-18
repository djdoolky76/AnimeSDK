#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGModuleSlot.h"

namespace FluffyUnderware::Curvy::Generator { class CGModuleOutputSlot; }
namespace FluffyUnderware::Curvy::Generator { class InputSlotInfo; }
namespace FluffyUnderware::Curvy::Generator { class OutputSlotInfo; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT_AREINPUTANDOUTPUTSLOTSCOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1F2032E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT_CANLINKTO_OFFSET UNITYSDK_OFFSET(0x1F202FF0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT_GET_INPUTINFO_OFFSET UNITYSDK_OFFSET(0x1F2018E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT_GET_ISONREQUEST_OFFSET UNITYSDK_OFFSET(0x1F201940)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT_LINKTO_OFFSET UNITYSDK_OFFSET(0x1F201EB0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT_LOADLINKEDSLOTS_OFFSET UNITYSDK_OFFSET(0x1F201A10)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT_SOURCESLOT_OFFSET UNITYSDK_OFFSET(0x1F202CD0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT_UNLINKFROM_OFFSET UNITYSDK_OFFSET(0x1F202780)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F203360)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGModuleInputSlot_TypeDefinitionIndex = 37528;

	class CGModuleInputSlot : public ::FluffyUnderware::Curvy::Generator::CGModuleSlot
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT__CTOR_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::Generator::InputSlotInfo* get_InputInfo()
		{
			return ((::FluffyUnderware::Curvy::Generator::InputSlotInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT_GET_INPUTINFO_OFFSET))(this);
		}

		::System::Boolean get_IsOnRequest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT_GET_ISONREQUEST_OFFSET))(this);
		}

		::System::Void LoadLinkedSlots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT_LOADLINKEDSLOTS_OFFSET))(this);
		}

		::System::Void LinkTo(::FluffyUnderware::Curvy::Generator::CGModuleSlot* outputSlot)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT_LINKTO_OFFSET))(this, outputSlot);
		}

		::System::Void UnlinkFrom(::FluffyUnderware::Curvy::Generator::CGModuleSlot* outputSlot)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT_UNLINKFROM_OFFSET))(this, outputSlot);
		}

		::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* SourceSlot(::System::Int32 index)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT_SOURCESLOT_OFFSET))(this, index);
		}

		::System::Boolean CanLinkTo(::FluffyUnderware::Curvy::Generator::CGModuleSlot* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT_CANLINKTO_OFFSET))(this, other);
		}

		static ::System::Boolean AreInputAndOutputSlotsCompatible(::FluffyUnderware::Curvy::Generator::InputSlotInfo* inputSlotInfo, ::System::Boolean inputSlotModuleIsOnRequest, ::FluffyUnderware::Curvy::Generator::OutputSlotInfo* outputSlotInfo, ::System::Boolean outputSlotModuleIsOnRequest)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::Generator::InputSlotInfo*, ::System::Boolean, ::FluffyUnderware::Curvy::Generator::OutputSlotInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEINPUTSLOT_AREINPUTANDOUTPUTSLOTSCOMPATIBLE_OFFSET))(inputSlotInfo, inputSlotModuleIsOnRequest, outputSlotInfo, outputSlotModuleIsOnRequest);
		}
	};
}
