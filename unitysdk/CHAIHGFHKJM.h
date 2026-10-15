#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChimeraBattlePuzzleArea; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define CHAIHGFHKJM_ABEJAIICNOJ_OFFSET UNITYSDK_OFFSET(0xCC8FC40)
#define CHAIHGFHKJM_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0xCC8F3B0)
#define CHAIHGFHKJM_CTOR_OFFSET UNITYSDK_OFFSET(0xCC8F340)
#define CHAIHGFHKJM_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xCC90310)
#define CHAIHGFHKJM_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xCC90530)
#define CHAIHGFHKJM_GKLJACJDJPE_OFFSET UNITYSDK_OFFSET(0xCC8F5D0)
#define CHAIHGFHKJM_LMGLHEKNHKD_OFFSET UNITYSDK_OFFSET(0xCC90390)
#define CHAIHGFHKJM_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xCC8F550)
#define CHAIHGFHKJM_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xCC90540)

	class CHAIHGFHKJM : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraBattlePuzzleArea* GEJIPOFHMHO; // 0x10
		::System::Action* MECKBKLEHAN; // 0x18
		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* NHNHKBJJKPP; // 0x20
		::RPG::Client::ChimeraBattlePuzzleArea* BJIAFANLGIB; // 0x28
		::System::Single FOMCKBAHCFM; // 0x30
		::System::Boolean _IsFinished_k__BackingField; // 0x34
		::System::Byte _padding0[0x3];
		::System::Single MFLNKDOADDG; // 0x38
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
