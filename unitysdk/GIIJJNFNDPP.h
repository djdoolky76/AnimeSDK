#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/Match3GameState.h"
#include "unitysdk/System/Object.h"
class BOMFGKDLHIB;
class EFHNDMENDHI;
class FDPALAEIHPB;
class HEAIEBHLCMJ;
namespace RPG::Client::LittleGame { class MatchThreeTimelineBattleField; }
namespace System { class Object; }

#define GIIJJNFNDPP_ABEHJIMKBNF_OFFSET UNITYSDK_OFFSET(0x1A3E04A0)
#define GIIJJNFNDPP_AEDLDKMIEFD_OFFSET UNITYSDK_OFFSET(0x1A3DF6F0)
#define GIIJJNFNDPP_AFLCNJCNNAD_OFFSET UNITYSDK_OFFSET(0x1A3DE5C0)
#define GIIJJNFNDPP_AOLGOHOAIAE_OFFSET UNITYSDK_OFFSET(0x1A3DF550)
#define GIIJJNFNDPP_BJDODFLFJOA_OFFSET UNITYSDK_OFFSET(0x1A3DF4E0)
#define GIIJJNFNDPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3DDFC0)
#define GIIJJNFNDPP_DLAKCLFMGCM_OFFSET UNITYSDK_OFFSET(0x1A3DE100)
#define GIIJJNFNDPP_EIPNIOPNJAF_OFFSET UNITYSDK_OFFSET(0x1A3E05F0)
#define GIIJJNFNDPP_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A3DE250)
#define GIIJJNFNDPP_FDAFLPCLCEJ_OFFSET UNITYSDK_OFFSET(0x1A3DFF90)
#define GIIJJNFNDPP_FMKOOGGEBMF_OFFSET UNITYSDK_OFFSET(0x1A3DEAA0)
#define GIIJJNFNDPP_HFFILIIECGN_OFFSET UNITYSDK_OFFSET(0x1A3DEED0)
#define GIIJJNFNDPP_HGMAJJBBECC_OFFSET UNITYSDK_OFFSET(0x1A3DE3E0)
#define GIIJJNFNDPP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A3DE000)
#define GIIJJNFNDPP_IPNEEBNBEMC_OFFSET UNITYSDK_OFFSET(0x1A3E0530)
#define GIIJJNFNDPP_OLOLNPKJENN_OFFSET UNITYSDK_OFFSET(0x1A3E0140)
#define GIIJJNFNDPP_OOIPEGGCBGO_OFFSET UNITYSDK_OFFSET(0x1A3E0000)
#define GIIJJNFNDPP_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1A3DF390)

inline static constexpr unsigned int GIIJJNFNDPP_TypeDefinitionIndex = 78930;

	class GIIJJNFNDPP : public ::System::Object
	{
	public:
		::FDPALAEIHPB* FKINCGODJEP; // 0x10
		::HEAIEBHLCMJ* MGBABGFLKHN; // 0x18
		::RPG::Client::LittleGame::MatchThreeTimelineBattleField* IELGKICMLCJ; // 0x20
		::BOMFGKDLHIB* PDENFEFCAGN; // 0x28
		::System::Int32 KEGFNHBGLNH; // 0x30
		::System::Single JEPNDEPHLEL; // 0x34
		::System::Boolean BLCJNPPMGLL; // 0x38
		::System::Boolean DKNHFOJELEK; // 0x39
		::System::Byte _padding0[0x2];
		::System::Int32 JJDLIJINKNE; // 0x3C
		::System::UInt32 FFDAIDHAJAL; // 0x40
		// static const ::System::Object GFFBHPGALJF; // 0x0
		::System::Void _ctor(::FDPALAEIHPB* a1, ::BOMFGKDLHIB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::BOMFGKDLHIB*))((::PBYTE)hIl2Cpp + GIIJJNFNDPP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIJJNFNDPP_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIJJNFNDPP_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIJJNFNDPP_TEARDOWN_OFFSET))(this);
		}

		::System::Void BJDODFLFJOA(::EFHNDMENDHI* a1, ::RPG::Client::LittleGame::Match3::Match3GameState a2)
		{
			return ((::System::Void(*)(::PVOID, ::EFHNDMENDHI*, ::RPG::Client::LittleGame::Match3::Match3GameState))((::PBYTE)hIl2Cpp + GIIJJNFNDPP_BJDODFLFJOA_OFFSET))(this, a1, a2);
		}

		::System::Void HFFILIIECGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIJJNFNDPP_HFFILIIECGN_OFFSET))(this);
		}

		::System::Void DLAKCLFMGCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIJJNFNDPP_DLAKCLFMGCM_OFFSET))(this);
		}

		::System::Void FDAFLPCLCEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIJJNFNDPP_FDAFLPCLCEJ_OFFSET))(this);
		}

		::System::Void AFLCNJCNNAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIJJNFNDPP_AFLCNJCNNAD_OFFSET))(this);
		}

		::System::Void OLOLNPKJENN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIJJNFNDPP_OLOLNPKJENN_OFFSET))(this);
		}

		::System::Void AEDLDKMIEFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIJJNFNDPP_AEDLDKMIEFD_OFFSET))(this);
		}

		::System::Void OOIPEGGCBGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIJJNFNDPP_OOIPEGGCBGO_OFFSET))(this);
		}

		::System::Void FMKOOGGEBMF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GIIJJNFNDPP_FMKOOGGEBMF_OFFSET))(this, a1);
		}

		::System::Void HGMAJJBBECC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIJJNFNDPP_HGMAJJBBECC_OFFSET))(this);
		}

		::System::Void IPNEEBNBEMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIJJNFNDPP_IPNEEBNBEMC_OFFSET))(this);
		}

		::System::Void ABEHJIMKBNF(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + GIIJJNFNDPP_ABEHJIMKBNF_OFFSET))(this, a1, a2);
		}

		::System::Void AOLGOHOAIAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIJJNFNDPP_AOLGOHOAIAE_OFFSET))(this);
		}

		::System::Void EIPNIOPNJAF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GIIJJNFNDPP_EIPNIOPNJAF_OFFSET))(this, a1);
		}

	};
