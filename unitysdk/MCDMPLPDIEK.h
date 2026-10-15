#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHAAEPHBCLP;
class PBMPKABBHOO;
namespace RPG::Client::Compliance::Ftc::DirectPurchase { class FtcDirectPurchase; }

#define MCDMPLPDIEK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB877E70)
#define MCDMPLPDIEK_CTOR_OFFSET UNITYSDK_OFFSET(0xB877DF0)

inline static constexpr unsigned int MCDMPLPDIEK_TypeDefinitionIndex = 74833;

	class MCDMPLPDIEK : public ::System::Object
	{
	public:
		::CHAAEPHBCLP* ADHGPMBAAFG; // 0x10
		::PBMPKABBHOO* KKHDIBEHPJA; // 0x18
		::System::Void _ctor(::CHAAEPHBCLP* a1, ::PBMPKABBHOO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CHAAEPHBCLP*, ::PBMPKABBHOO*))((::PBYTE)hIl2Cpp + MCDMPLPDIEK_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Compliance::Ftc::DirectPurchase::FtcDirectPurchase* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::RPG::Client::Compliance::Ftc::DirectPurchase::FtcDirectPurchase*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MCDMPLPDIEK_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
