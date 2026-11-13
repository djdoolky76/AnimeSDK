#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGDADKNPPOL;
namespace System { class Action; }

#define JJECNLGDFMP_CFODKNAKEED_OFFSET UNITYSDK_OFFSET(0x1742C410)
#define JJECNLGDFMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1742C690)
#define JJECNLGDFMP_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x1742BF80)
#define JJECNLGDFMP_NIAGDJEILBO_OFFSET UNITYSDK_OFFSET(0x1742C150)
#define JJECNLGDFMP_NPIDBFDPAKP_OFFSET UNITYSDK_OFFSET(0x1742BD80)
#define JJECNLGDFMP_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0x1742C090)
#define JJECNLGDFMP_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1742BDE0)

inline static constexpr unsigned int JJECNLGDFMP_TypeDefinitionIndex = 63563;

	class JJECNLGDFMP : public ::System::Object
	{
	public:
		::KGDADKNPPOL* EPGPLAOIMHO; // 0x10
		::KGDADKNPPOL* OAOKEFNJEOB; // 0x18
		::System::Action* GAJBGGODBKM; // 0x20
		::System::Action* HKHDLACNBOK; // 0x28
		::System::Single HABPNOMOJDC; // 0x30
		::System::Boolean NBMEFPHLCPI; // 0x34
		::System::Boolean HMELBDKBAHH; // 0x35
		::System::Boolean IEGFNMBDGGB; // 0x36
		::System::Byte _padding0[0x1];
		::System::UInt32 FBEPMDENEMP; // 0x38
		::System::Single FDLJADDOCGM; // 0x3C
		::System::UInt32 MAKGNLIFAHL; // 0x40
		::System::Single HFHJECHDLNN; // 0x44
		::System::Single BEHNGHACJHA; // 0x48
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
