#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNAKIBHJLFN.h"
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Exception; }

#define IJAGKJGEPMG_CTOR_OFFSET UNITYSDK_OFFSET(0x164494D0)
#define IJAGKJGEPMG_DMJOKNMPLHJ_OFFSET UNITYSDK_OFFSET(0x16449840)
#define IJAGKJGEPMG_HGAMLCFBAHL_OFFSET UNITYSDK_OFFSET(0x164497B0)
#define IJAGKJGEPMG_KGDLMPEABGG_OFFSET UNITYSDK_OFFSET(0x16449520)
#define IJAGKJGEPMG__PLAYTRANSITION_B__1_0_OFFSET UNITYSDK_OFFSET(0x16449A30)

inline static constexpr unsigned int IJAGKJGEPMG_TypeDefinitionIndex = 73111;

	class IJAGKJGEPMG : public ::KNAKIBHJLFN
	{
	public:
		::RPG::Client::UIController* HKJLKMCDMGB; // 0x28
		::RPG::Client::Promises::Promise* NFEBMNGKADJ; // 0x30
		::RPG::Client::Promises::Promise* ECDCAFKFIFJ; // 0x38
		::RPG::Client::UIController* IBLBKLNHKLL; // 0x40
		::RPG::Client::Promises::Promise* OBLMKODKNCA; // 0x48
		::System::Void _ctor(::RPG::Client::UIController* a1, ::RPG::Client::UIController* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + IJAGKJGEPMG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KGDLMPEABGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJAGKJGEPMG_KGDLMPEABGG_OFFSET))(this);
		}

		::System::Boolean HGAMLCFBAHL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJAGKJGEPMG_HGAMLCFBAHL_OFFSET))(this);
		}

		::System::Void DMJOKNMPLHJ(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + IJAGKJGEPMG_DMJOKNMPLHJ_OFFSET))(this, a1);
		}

		::System::Void _PlayTransition_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJAGKJGEPMG__PLAYTRANSITION_B__1_0_OFFSET))(this);
		}

	};
