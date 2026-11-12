#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHAAEPHBCLP;
class LNJFHOIKPFK;
class PBMPKABBHOO;
namespace RPG::Client::Compliance::Ftc::DirectPurchase { class FtcDirectPurchase; }

#define MCDMPLPDIEK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC0DE900)
#define MCDMPLPDIEK_CTOR_OFFSET UNITYSDK_OFFSET(0xC0DE850)

inline static constexpr unsigned int MCDMPLPDIEK_TypeDefinitionIndex = 77004;

	class MCDMPLPDIEK : public ::System::Object
	{
	public:
		::CHAAEPHBCLP* ADHGPMBAAFG; // 0x10
		::PBMPKABBHOO* KKHDIBEHPJA; // 0x18
		::LNJFHOIKPFK* JMGMBCPMBBC; // 0x20
		::System::Void _ctor(::CHAAEPHBCLP* a1, ::PBMPKABBHOO* a2, ::LNJFHOIKPFK* a3)
		{
			return ((::System::Void(*)(::PVOID, ::CHAAEPHBCLP*, ::PBMPKABBHOO*, ::LNJFHOIKPFK*))((::PBYTE)hIl2Cpp + MCDMPLPDIEK_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Compliance::Ftc::DirectPurchase::FtcDirectPurchase* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::RPG::Client::Compliance::Ftc::DirectPurchase::FtcDirectPurchase*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MCDMPLPDIEK_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
