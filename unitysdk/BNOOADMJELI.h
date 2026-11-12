#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define BNOOADMJELI_CTOR_OFFSET UNITYSDK_OFFSET(0xC7661C0)
#define BNOOADMJELI_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xC7667F0)
#define BNOOADMJELI_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xC766A40)
#define BNOOADMJELI_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC7663C0)
#define BNOOADMJELI_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xC766A50)

inline static constexpr unsigned int BNOOADMJELI_TypeDefinitionIndex = 81174;

	class BNOOADMJELI : public ::System::Object
	{
	public:
		::System::Action* MECKBKLEHAN; // 0x10
		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* NHNHKBJJKPP; // 0x18
		::System::Single MFLNKDOADDG; // 0x20
		::System::Single FOMCKBAHCFM; // 0x24
		::System::Boolean _IsFinished_k__BackingField; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 GGDBFECPDPF; // 0x2C
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
