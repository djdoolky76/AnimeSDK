#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALCAOBIABGN;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Object; }

#define ALCAOBIABGN_AALFLKDNJHK_OFFSET UNITYSDK_OFFSET(0x15561390)
#define ALCAOBIABGN_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x15561470)
#define ALCAOBIABGN_CTOR_OFFSET UNITYSDK_OFFSET(0x15561180)
#define ALCAOBIABGN_EBMKEGMGNMI_OFFSET UNITYSDK_OFFSET(0x155614C0)
#define ALCAOBIABGN_FMPLJNILOPP_OFFSET UNITYSDK_OFFSET(0x15561630)
#define ALCAOBIABGN_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0x155611D0)
#define ALCAOBIABGN_LDHJGFOOKPO_OFFSET UNITYSDK_OFFSET(0x15561580)
#define ALCAOBIABGN_LEHKGLNGAGF_OFFSET UNITYSDK_OFFSET(0x15561110)

inline static constexpr unsigned int ALCAOBIABGN_TypeDefinitionIndex = 57185;

	class ALCAOBIABGN : public ::System::Object
	{
	public:
		::System::String* ENJLNAMAFLG; // 0x10
		::System::String* CDMFNHJGGKF; // 0x18
		::UnityEngine::Object* NHFPKBHLLLH; // 0x20
		::RPG::Client::OnAssetOperationDelegate* EPEKNJLONJA; // 0x28
		::UnityEngine::Object* IFCMOPKIFGD; // 0x30
		::System::String* CDGELMPLLPG; // 0x38
		::System::Action* GICMMIMFLIM; // 0x40
		::RPG::Client::IAssetOperation* CNPEOFLMHEC; // 0x48
		::RPG::Client::IAssetOperation* CABJOOIBDPM; // 0x50
		::System::Int32 MNIPENLIKPH; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCAOBIABGN_CTOR_OFFSET))(this);
		}

		::System::Boolean LEHKGLNGAGF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCAOBIABGN_LEHKGLNGAGF_OFFSET))(this);
		}

		::System::Void HKEPJLDBGIG(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ALCAOBIABGN_HKEPJLDBGIG_OFFSET))(this, a1, a2);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCAOBIABGN_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void AALFLKDNJHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCAOBIABGN_AALFLKDNJHK_OFFSET))(this);
		}

		::System::Void EBMKEGMGNMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCAOBIABGN_EBMKEGMGNMI_OFFSET))(this);
		}

		::System::Void LDHJGFOOKPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCAOBIABGN_LDHJGFOOKPO_OFFSET))(this);
		}

		::System::Boolean FMPLJNILOPP(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + ALCAOBIABGN_FMPLJNILOPP_OFFSET))(this, a1);
		}

	};
