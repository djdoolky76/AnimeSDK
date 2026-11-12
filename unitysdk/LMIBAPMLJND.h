#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LMIBAPMLJND_RunOutStage.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraBattleRunOut; }
namespace System { class Action; }

#define LMIBAPMLJND_CTOR_OFFSET UNITYSDK_OFFSET(0xC023960)
#define LMIBAPMLJND_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xC024580)
#define LMIBAPMLJND_FCOJOHCNHMP_OFFSET UNITYSDK_OFFSET(0xC0249F0)
#define LMIBAPMLJND_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xC024A40)
#define LMIBAPMLJND_KLJGMNELENC_OFFSET UNITYSDK_OFFSET(0xC023C30)
#define LMIBAPMLJND_LOCLIGNNNKO_OFFSET UNITYSDK_OFFSET(0xC024200)
#define LMIBAPMLJND_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC023B90)
#define LMIBAPMLJND_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xC024A50)

inline static constexpr unsigned int LMIBAPMLJND_TypeDefinitionIndex = 81176;

	class LMIBAPMLJND : public ::System::Object
	{
	public:
		::System::Action* MECKBKLEHAN; // 0x10
		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* NHNHKBJJKPP; // 0x18
		::UnityEngine::Vector3 AHDEBHBGBCM; // 0x20
		::System::Boolean _IsFinished_k__BackingField; // 0x2C
		::System::Byte _padding0[0x3];
		::System::Single CGKGMIEKCFK; // 0x30
		::System::Single BNKPEFBBIDI; // 0x34
		::LMIBAPMLJND_RunOutStage PMCOAFPCDFM; // 0x38
		::System::Single FOMCKBAHCFM; // 0x3C
		::System::Single DKOFFPPGEFI; // 0x40
		::System::Single HDKHGKNBPBN; // 0x44
		::System::UInt32 NJFKHPIHDEF; // 0x48
		::System::Single ANIPBKCEANB; // 0x4C
		::System::Single MOEGDGLAJOC; // 0x50
		::System::Void _ctor(::RPG::GameCore::ChimeraBattleRunOut* a1, ::System::UInt32 a2, ::System::Int32 a3, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleRunOut*, ::System::UInt32, ::System::Int32, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + LMIBAPMLJND_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LMIBAPMLJND_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void KLJGMNELENC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIBAPMLJND_KLJGMNELENC_OFFSET))(this);
		}

		::System::Void LOCLIGNNNKO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LMIBAPMLJND_LOCLIGNNNKO_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIBAPMLJND_DFFCHNLKELO_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIBAPMLJND_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LMIBAPMLJND_SET_ISFINISHED_OFFSET))(this, a1);
		}

		::System::Single FCOJOHCNHMP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIBAPMLJND_FCOJOHCNHMP_OFFSET))(this);
		}

	};
