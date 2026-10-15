#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PDFKHMDEOGC.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SpikeTrapState.h"
namespace System { class String; }

#define GACEPNEKIAI_EKCGDFFIOMG_OFFSET UNITYSDK_OFFSET(0x3C31E20)
#define GACEPNEKIAI_FMKEDLMCMNA_OFFSET UNITYSDK_OFFSET(0x3C31EA0)
#define GACEPNEKIAI_KMMKJCOMPKJ_OFFSET UNITYSDK_OFFSET(0x3C31DA0)
#define GACEPNEKIAI_NNLIEBLEANC_OFFSET UNITYSDK_OFFSET(0x3C31D30)

inline static constexpr unsigned int GACEPNEKIAI_TypeDefinitionIndex = 43470;

	struct alignas(8) GACEPNEKIAI
	{
		::System::String* LOPPEGGELBJ; // 0x10
		::System::Boolean NOOJOFHAIAA; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::Client::LittleGame::FiveDim::SpikeTrapState MEPFOEEGBEA; // 0x1C
		::System::Int32 MNMHMECGDAK; // 0x20
		::System::Single LBGDJBJHIEJ; // 0x24
		::System::Boolean INNLLCMIDFK; // 0x28
		::System::Byte _padding1[0x3];
		::System::Int32 HECLPDOELBK; // 0x2C
		::Il2CppArray<::PDFKHMDEOGC>* NHCACHLGEBF; // 0x30
		::RPG::Client::LittleGame::FiveDim::SpikeTrapState NNLIEBLEANC(::System::Int32 a1)
		{
			return ((::RPG::Client::LittleGame::FiveDim::SpikeTrapState(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GACEPNEKIAI_NNLIEBLEANC_OFFSET))(this, a1);
		}

		::System::Void KMMKJCOMPKJ(::System::Int32 a1, ::RPG::Client::LittleGame::FiveDim::SpikeTrapState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::LittleGame::FiveDim::SpikeTrapState))((::PBYTE)hIl2Cpp + GACEPNEKIAI_KMMKJCOMPKJ_OFFSET))(this, a1, a2);
		}

		::System::Single EKCGDFFIOMG(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GACEPNEKIAI_EKCGDFFIOMG_OFFSET))(this, a1);
		}

		::System::Single FMKEDLMCMNA(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GACEPNEKIAI_FMKEDLMCMNA_OFFSET))(this, a1);
		}

	};
