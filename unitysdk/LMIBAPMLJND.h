#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LMIBAPMLJND_RunOutStage.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraBattleRunOut; }
namespace System { class Action; }

#define LMIBAPMLJND_CTOR_OFFSET UNITYSDK_OFFSET(0xB783880)
#define LMIBAPMLJND_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xB7844B0)
#define LMIBAPMLJND_FCOJOHCNHMP_OFFSET UNITYSDK_OFFSET(0xB784920)
#define LMIBAPMLJND_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xB784970)
#define LMIBAPMLJND_KLJGMNELENC_OFFSET UNITYSDK_OFFSET(0xB783B60)
#define LMIBAPMLJND_LOCLIGNNNKO_OFFSET UNITYSDK_OFFSET(0xB784130)
#define LMIBAPMLJND_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB783AC0)
#define LMIBAPMLJND_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xB784980)

inline static constexpr unsigned int LMIBAPMLJND_TypeDefinitionIndex = 78441;

	class LMIBAPMLJND : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* NHNHKBJJKPP; // 0x10
		::System::Action* MECKBKLEHAN; // 0x18
		::System::Single MOEGDGLAJOC; // 0x20
		::System::Single BNKPEFBBIDI; // 0x24
		::System::Single ANIPBKCEANB; // 0x28
		::UnityEngine::Vector3 AHDEBHBGBCM; // 0x2C
		::System::Single FOMCKBAHCFM; // 0x38
		::System::Boolean _IsFinished_k__BackingField; // 0x3C
		::System::Byte _padding0[0x3];
		::System::UInt32 NJFKHPIHDEF; // 0x40
		::LMIBAPMLJND_RunOutStage PMCOAFPCDFM; // 0x44
		::System::Single CGKGMIEKCFK; // 0x48
		::System::Single DKOFFPPGEFI; // 0x4C
		::System::Single HDKHGKNBPBN; // 0x50
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
