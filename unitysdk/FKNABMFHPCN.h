#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/MechCraftExamItemState.h"
#include "unitysdk/System/Object.h"
class FIEEBCKMKDF;
namespace System { class String; }

#define FKNABMFHPCN_CTOR_OFFSET UNITYSDK_OFFSET(0x158051D0)
#define FKNABMFHPCN_DJKDMLAEAKO_OFFSET UNITYSDK_OFFSET(0x15805120)
#define FKNABMFHPCN_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x158050E0)
#define FKNABMFHPCN_GET_STATE_OFFSET UNITYSDK_OFFSET(0x15805100)
#define FKNABMFHPCN_LCHCCIGGIAD_OFFSET UNITYSDK_OFFSET(0x15805170)
#define FKNABMFHPCN_SET_MODEL_OFFSET UNITYSDK_OFFSET(0x158050F0)
#define FKNABMFHPCN_SET_STATE_OFFSET UNITYSDK_OFFSET(0x15805110)

inline static constexpr unsigned int FKNABMFHPCN_TypeDefinitionIndex = 79642;

	class FKNABMFHPCN : public ::System::Object
	{
	public:
		::FIEEBCKMKDF* _Model_k__BackingField; // 0x10
		::RPG::Client::MechCraft::ViewModel::MechCraftExamItemState _State_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNABMFHPCN_CTOR_OFFSET))(this);
		}

		::FIEEBCKMKDF* get_Model()
		{
			return ((::FIEEBCKMKDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNABMFHPCN_GET_MODEL_OFFSET))(this);
		}

		::System::Void set_Model(::FIEEBCKMKDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIEEBCKMKDF*))((::PBYTE)hIl2Cpp + FKNABMFHPCN_SET_MODEL_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftExamItemState get_State()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftExamItemState(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNABMFHPCN_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::MechCraft::ViewModel::MechCraftExamItemState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftExamItemState))((::PBYTE)hIl2Cpp + FKNABMFHPCN_SET_STATE_OFFSET))(this, a1);
		}

		::System::UInt32 DJKDMLAEAKO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNABMFHPCN_DJKDMLAEAKO_OFFSET))(this);
		}

		::System::String* LCHCCIGGIAD()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNABMFHPCN_LCHCCIGGIAD_OFFSET))(this);
		}

	};
