#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LMIBAPMLJND_RunOutStage.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraBattleRunOut; }
namespace System { class Action; }

#define LMIBAPMLJND_CTOR_OFFSET UNITYSDK_OFFSET(0xB77CFD0)
#define LMIBAPMLJND_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xB77DC00)
#define LMIBAPMLJND_FCOJOHCNHMP_OFFSET UNITYSDK_OFFSET(0xB77E070)
#define LMIBAPMLJND_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xB77E0C0)
#define LMIBAPMLJND_KLJGMNELENC_OFFSET UNITYSDK_OFFSET(0xB77D2B0)
#define LMIBAPMLJND_LOCLIGNNNKO_OFFSET UNITYSDK_OFFSET(0xB77D880)
#define LMIBAPMLJND_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB77D210)
#define LMIBAPMLJND_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xB77E0D0)

inline static constexpr unsigned int LMIBAPMLJND_TypeDefinitionIndex = 78440;

	class LMIBAPMLJND : public ::System::Object
	{
	public:
		::System::Action* MECKBKLEHAN; // 0x10
		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* NHNHKBJJKPP; // 0x18
		::System::Single MOEGDGLAJOC; // 0x20
		::LMIBAPMLJND_RunOutStage PMCOAFPCDFM; // 0x24
		::System::UInt32 NJFKHPIHDEF; // 0x28
		::System::Single FOMCKBAHCFM; // 0x2C
		::System::Single CGKGMIEKCFK; // 0x30
		::System::Boolean _IsFinished_k__BackingField; // 0x34
		::System::Byte _padding0[0x3];
		::System::Single HDKHGKNBPBN; // 0x38
		::System::Single ANIPBKCEANB; // 0x3C
		::UnityEngine::Vector3 AHDEBHBGBCM; // 0x40
		::System::Single BNKPEFBBIDI; // 0x4C
		::System::Single DKOFFPPGEFI; // 0x50
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
