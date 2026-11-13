#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSpotLightRecommend; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_EDITINGSPOTLIGHTRECOMMEND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6883A0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_EDITINGSPOTLIGHTRECOMMEND_GET_DISPLAYROLE_OFFSET UNITYSDK_OFFSET(0x1D68C450)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_EDITINGSPOTLIGHTRECOMMEND__FILLSLOTS_OFFSET UNITYSDK_OFFSET(0x1D68C4A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor_EditingSpotLightRecommend_TypeDefinitionIndex = 66182;

	class GridFightGameFormationEditor_EditingSpotLightRecommend : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* PrimarySpotLightIDs; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* SecondSpotLightIDs; // 0x18
		::RPG::Client::GridFightSpotLightRecommend* Source; // 0x20
		::System::UInt32 RoleID; // 0x28
		::System::Void _ctor(::RPG::Client::GridFightSpotLightRecommend* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightSpotLightRecommend*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_EDITINGSPOTLIGHTRECOMMEND_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole* get_DisplayRole()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_EDITINGSPOTLIGHTRECOMMEND_GET_DISPLAYROLE_OFFSET))(this);
		}

		static ::System::Void _FillSlots(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_EDITINGSPOTLIGHTRECOMMEND__FILLSLOTS_OFFSET))(a1, a2, a3);
		}

	};
}
