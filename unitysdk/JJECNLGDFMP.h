#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGDADKNPPOL;
namespace System { class Action; }

#define JJECNLGDFMP_CFODKNAKEED_OFFSET UNITYSDK_OFFSET(0xBA25AC0)
#define JJECNLGDFMP_CTOR_OFFSET UNITYSDK_OFFSET(0xBA25D40)
#define JJECNLGDFMP_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xBA25630)
#define JJECNLGDFMP_NIAGDJEILBO_OFFSET UNITYSDK_OFFSET(0xBA25800)
#define JJECNLGDFMP_NPIDBFDPAKP_OFFSET UNITYSDK_OFFSET(0xBA25430)
#define JJECNLGDFMP_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0xBA25740)
#define JJECNLGDFMP_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBA25490)

inline static constexpr unsigned int JJECNLGDFMP_TypeDefinitionIndex = 63563;

	class JJECNLGDFMP : public ::System::Object
	{
	public:
		::System::Action* HKHDLACNBOK; // 0x10
		::KGDADKNPPOL* EPGPLAOIMHO; // 0x18
		::KGDADKNPPOL* OAOKEFNJEOB; // 0x20
		::System::Action* GAJBGGODBKM; // 0x28
		::System::UInt32 MAKGNLIFAHL; // 0x30
		::System::Single BEHNGHACJHA; // 0x34
		::System::UInt32 FBEPMDENEMP; // 0x38
		::System::Single HFHJECHDLNN; // 0x3C
		::System::Single HABPNOMOJDC; // 0x40
		::System::Single FDLJADDOCGM; // 0x44
		::System::Boolean IEGFNMBDGGB; // 0x48
		::System::Boolean HMELBDKBAHH; // 0x49
		::System::Boolean NBMEFPHLCPI; // 0x4A
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJECNLGDFMP_CTOR_OFFSET))(this);
		}

		::System::Boolean NPIDBFDPAKP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JJECNLGDFMP_NPIDBFDPAKP_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JJECNLGDFMP_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void NIAGDJEILBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJECNLGDFMP_NIAGDJEILBO_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJECNLGDFMP_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CFODKNAKEED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJECNLGDFMP_CFODKNAKEED_OFFSET))(this);
		}

		::System::Void OPCKNBHNBOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJECNLGDFMP_OPCKNBHNBOA_OFFSET))(this);
		}

	};
