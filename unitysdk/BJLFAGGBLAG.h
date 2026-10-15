#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJLFAGGBLAG;
namespace RPG::GameCore { class TrainPartyGridSpecialShowRow; }
namespace System { class String; }

#define BJLFAGGBLAG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB7A44E0)
#define BJLFAGGBLAG_CTOR_OFFSET UNITYSDK_OFFSET(0xB7A4560)
#define BJLFAGGBLAG_LNLMELEFIKE_OFFSET UNITYSDK_OFFSET(0xB7A4570)
#define BJLFAGGBLAG_PDAENODHFCM_OFFSET UNITYSDK_OFFSET(0xB7A4620)

inline static constexpr unsigned int BJLFAGGBLAG_TypeDefinitionIndex = 74327;

	class BJLFAGGBLAG : public ::System::Object
	{
	public:
		::System::UInt32 NMMKHFIFPEJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJLFAGGBLAG_CTOR_OFFSET))(this);
		}

		static ::BJLFAGGBLAG* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::BJLFAGGBLAG*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BJLFAGGBLAG_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::String* LNLMELEFIKE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJLFAGGBLAG_LNLMELEFIKE_OFFSET))(this);
		}

		::RPG::GameCore::TrainPartyGridSpecialShowRow* PDAENODHFCM()
		{
			return ((::RPG::GameCore::TrainPartyGridSpecialShowRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJLFAGGBLAG_PDAENODHFCM_OFFSET))(this);
		}

	};
