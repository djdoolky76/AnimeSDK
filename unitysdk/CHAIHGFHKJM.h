#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChimeraBattlePuzzleArea; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define CHAIHGFHKJM_ABEJAIICNOJ_OFFSET UNITYSDK_OFFSET(0xD63D910)
#define CHAIHGFHKJM_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0xD63D080)
#define CHAIHGFHKJM_CTOR_OFFSET UNITYSDK_OFFSET(0xD63D010)
#define CHAIHGFHKJM_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xD63DFE0)
#define CHAIHGFHKJM_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xD63E200)
#define CHAIHGFHKJM_GKLJACJDJPE_OFFSET UNITYSDK_OFFSET(0xD63D2A0)
#define CHAIHGFHKJM_LMGLHEKNHKD_OFFSET UNITYSDK_OFFSET(0xD63E060)
#define CHAIHGFHKJM_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xD63D220)
#define CHAIHGFHKJM_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xD63E210)

inline static constexpr unsigned int CHAIHGFHKJM_TypeDefinitionIndex = 81178;

	class CHAIHGFHKJM : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraBattlePuzzleArea* BJIAFANLGIB; // 0x10
		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* NHNHKBJJKPP; // 0x18
		::RPG::Client::ChimeraBattlePuzzleArea* GEJIPOFHMHO; // 0x20
		::System::Action* MECKBKLEHAN; // 0x28
		::System::Boolean _IsFinished_k__BackingField; // 0x30
		::System::Byte _padding0[0x3];
		::System::Single MFLNKDOADDG; // 0x34
		::System::Single FOMCKBAHCFM; // 0x38
		::System::Void _ctor(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a1, ::System::Action* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CHAIHGFHKJM_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHAIHGFHKJM_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHAIHGFHKJM_DFFCHNLKELO_OFFSET))(this);
		}

		::System::Void BIOBBNGDGDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHAIHGFHKJM_BIOBBNGDGDF_OFFSET))(this);
		}

		::System::Void LMGLHEKNHKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHAIHGFHKJM_LMGLHEKNHKD_OFFSET))(this);
		}

		::System::Void ABEJAIICNOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHAIHGFHKJM_ABEJAIICNOJ_OFFSET))(this);
		}

		::System::Void GKLJACJDJPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHAIHGFHKJM_GKLJACJDJPE_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHAIHGFHKJM_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CHAIHGFHKJM_SET_ISFINISHED_OFFSET))(this, a1);
		}

	};
