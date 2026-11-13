#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitChooseBaseAction.h"
class CHCHAJIANIM;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D591390)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEACTION_GET_OPTIONIDS_OFFSET UNITYSDK_OFFSET(0x1D591590)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEACTION_SELECTMEMBER_OFFSET UNITYSDK_OFFSET(0x1D5914D0)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEACTION_SET_OPTIONIDS_OFFSET UNITYSDK_OFFSET(0x1D5915A0)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEACTION_SYNC_OFFSET UNITYSDK_OFFSET(0x1D591400)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightClaraEnhanceAction_TypeDefinitionIndex = 67131;

	class GridFightClaraEnhanceAction : public ::RPG::Client::GridFightTraitChooseBaseAction
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _OptionIDs_k__BackingField; // 0x30
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEACTION_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Sync(::CHCHAJIANIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHCHAJIANIM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEACTION_SYNC_OFFSET))(this, a1);
		}

		::System::Void SelectMember(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEACTION_SELECTMEMBER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_OptionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEACTION_GET_OPTIONIDS_OFFSET))(this);
		}

		::System::Void set_OptionIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEACTION_SET_OPTIONIDS_OFFSET))(this, a1);
		}

	};
}
