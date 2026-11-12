#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace RPG::Client::ChenLingGameBoy { class ChenLingGameBoyPuzzleData; }

#define BMLCCKIPGKK_AMCBFNCIJKK_OFFSET UNITYSDK_OFFSET(0xC73CA10)
#define BMLCCKIPGKK_BADJCIBELAP_OFFSET UNITYSDK_OFFSET(0xC73CF10)
#define BMLCCKIPGKK_BBAMILMLIKP_OFFSET UNITYSDK_OFFSET(0xC73C7D0)
#define BMLCCKIPGKK_BLBAIFAHDNB_OFFSET UNITYSDK_OFFSET(0xC73CD20)
#define BMLCCKIPGKK_CTOR_OFFSET UNITYSDK_OFFSET(0xC73C670)
#define BMLCCKIPGKK_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC73C740)
#define BMLCCKIPGKK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC73CA80)
#define BMLCCKIPGKK_JGANPEBALDF_OFFSET UNITYSDK_OFFSET(0xC73CE60)
#define BMLCCKIPGKK_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xC73CBD0)

inline static constexpr unsigned int BMLCCKIPGKK_TypeDefinitionIndex = 79262;

	class BMLCCKIPGKK : public ::System::Object
	{
	public:
		::NDDFLGNNMDK* FKINCGODJEP; // 0x10
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x18
		::System::UInt64 FABFIHPINPL; // 0x20
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + BMLCCKIPGKK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLCCKIPGKK_EXECUTE_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLCCKIPGKK_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLCCKIPGKK_TEARDOWN_OFFSET))(this);
		}

		::System::Void BBAMILMLIKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLCCKIPGKK_BBAMILMLIKP_OFFSET))(this);
		}

		::System::Void AMCBFNCIJKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLCCKIPGKK_AMCBFNCIJKK_OFFSET))(this);
		}

		::System::Boolean JGANPEBALDF(::RPG::Client::ChenLingGameBoy::ChenLingGameBoyPuzzleData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingGameBoy::ChenLingGameBoyPuzzleData*))((::PBYTE)hIl2Cpp + BMLCCKIPGKK_JGANPEBALDF_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingGameBoy::ChenLingGameBoyPuzzleData* BLBAIFAHDNB()
		{
			return ((::RPG::Client::ChenLingGameBoy::ChenLingGameBoyPuzzleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLCCKIPGKK_BLBAIFAHDNB_OFFSET))(this);
		}

		::System::Void BADJCIBELAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLCCKIPGKK_BADJCIBELAP_OFFSET))(this);
		}

	};
