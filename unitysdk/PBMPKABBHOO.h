#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOEEDNCHKMI;
namespace RPG::Client::Compliance::Ftc::DirectPurchase { class FtcDirectPurchase; }

#define PBMPKABBHOO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBFEE460)
#define PBMPKABBHOO_CTOR_OFFSET UNITYSDK_OFFSET(0xBFEE410)

inline static constexpr unsigned int PBMPKABBHOO_TypeDefinitionIndex = 74829;

	class PBMPKABBHOO : public ::System::Object
	{
	public:
		::BOEEDNCHKMI* KLCDAHLCILC; // 0x10
		::System::Void _ctor(::BOEEDNCHKMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOEEDNCHKMI*))((::PBYTE)hIl2Cpp + PBMPKABBHOO_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Compliance::Ftc::DirectPurchase::FtcDirectPurchase* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::RPG::Client::Compliance::Ftc::DirectPurchase::FtcDirectPurchase*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PBMPKABBHOO_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
