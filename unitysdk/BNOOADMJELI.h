#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define BNOOADMJELI_CTOR_OFFSET UNITYSDK_OFFSET(0xBDE1510)
#define BNOOADMJELI_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xBDE1B40)
#define BNOOADMJELI_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xBDE1D90)
#define BNOOADMJELI_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBDE1710)
#define BNOOADMJELI_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xBDE1DA0)

inline static constexpr unsigned int BNOOADMJELI_TypeDefinitionIndex = 78438;

	class BNOOADMJELI : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* NHNHKBJJKPP; // 0x10
		::System::Action* MECKBKLEHAN; // 0x18
		::System::Int32 GGDBFECPDPF; // 0x20
		::System::Single FOMCKBAHCFM; // 0x24
		::System::Single MFLNKDOADDG; // 0x28
		::System::Boolean _IsFinished_k__BackingField; // 0x2C
		::System::Void _ctor(::System::Single a1, ::System::Int32 a2, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + BNOOADMJELI_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BNOOADMJELI_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNOOADMJELI_DFFCHNLKELO_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNOOADMJELI_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BNOOADMJELI_SET_ISFINISHED_OFFSET))(this, a1);
		}

	};
