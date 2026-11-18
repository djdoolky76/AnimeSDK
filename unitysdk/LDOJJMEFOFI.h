#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LDOJJMEFOFI_AKLDNEHNHOD_OFFSET UNITYSDK_OFFSET(0x17687250)
#define LDOJJMEFOFI_AOPGPMDDDDI_OFFSET UNITYSDK_OFFSET(0x176870F0)
#define LDOJJMEFOFI_BIONFBGOPBJ_OFFSET UNITYSDK_OFFSET(0x1A604290)
#define LDOJJMEFOFI_BJLICCPDEDF_OFFSET UNITYSDK_OFFSET(0x1A604200)
#define LDOJJMEFOFI_EIMBLDPBBIC_OFFSET UNITYSDK_OFFSET(0x17686C70)
#define LDOJJMEFOFI_GDGAOFKOIBB_OFFSET UNITYSDK_OFFSET(0x176870A0)
#define LDOJJMEFOFI_HBKMPNHAADO_OFFSET UNITYSDK_OFFSET(0x1A604480)
#define LDOJJMEFOFI_HNEEAEOPBCA_OFFSET UNITYSDK_OFFSET(0x1A604500)
#define LDOJJMEFOFI_MKGDMOEHLCD_OFFSET UNITYSDK_OFFSET(0x17686F00)
#define LDOJJMEFOFI__CTOR_OFFSET UNITYSDK_OFFSET(0x17686B50)

inline static constexpr unsigned int LDOJJMEFOFI_TypeDefinitionIndex = 72423;

class LDOJJMEFOFI : public ::System::Object
{
public:
	// static const ::System::String* AOKECMKGJJJ; // 0x0
	// static const ::System::String* NNFNGEBGBCP; // 0x0
	// static const ::System::String* HNGNJFFEEBG; // 0x0
	// static const ::System::String* PNEMPJGNBJG; // 0x0
	// static const ::System::String* FOEBIGBOFEF; // 0x0
	// static const ::System::String* NHOKLHCNJGA; // 0x0
	// static const ::System::String* AGBHJCGNFJC; // 0x0
	// static const ::System::String* JHBFFMCPGFF; // 0x0
	// static const ::System::Single LLGJJIADALG; // 0x0
	// static const ::System::Single KHAOJMMBKKH; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* AOAMOPHJFPJ; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* DPPBFONOPLN; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* FFKDEAGBKDN; // 0x20
	::System::Boolean EACLGOLMNCO; // 0x28
	::System::Boolean CNLGJNELDLN; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOJJMEFOFI__CTOR_OFFSET))(this);
	}

	static ::System::Void EIMBLDPBBIC(::System::String* LGNLPMEAAMO, ::System::String* MHJJHIJECKC)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + LDOJJMEFOFI_EIMBLDPBBIC_OFFSET))(LGNLPMEAAMO, MHJJHIJECKC);
	}

	::System::Void MKGDMOEHLCD(::System::Boolean BMPFBLHNDKD, ::System::Single ELHMOANKHFM, ::System::Single AKJPGDGGAHC, ::System::Single BEGKNHAIFEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LDOJJMEFOFI_MKGDMOEHLCD_OFFSET))(this, BMPFBLHNDKD, ELHMOANKHFM, AKJPGDGGAHC, BEGKNHAIFEA);
	}

	::System::Void GDGAOFKOIBB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOJJMEFOFI_GDGAOFKOIBB_OFFSET))(this);
	}

	::System::Void AOPGPMDDDDI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOJJMEFOFI_AOPGPMDDDDI_OFFSET))(this);
	}

	::System::Void AKLDNEHNHOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOJJMEFOFI_AKLDNEHNHOD_OFFSET))(this);
	}

	::System::Void BJLICCPDEDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOJJMEFOFI_BJLICCPDEDF_OFFSET))(this);
	}

	::System::Void BIONFBGOPBJ(::System::UInt32 BKLGNCBNEGM, ::System::Single OLKMHFKHILI)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + LDOJJMEFOFI_BIONFBGOPBJ_OFFSET))(this, BKLGNCBNEGM, OLKMHFKHILI);
	}

	::System::Void HBKMPNHAADO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOJJMEFOFI_HBKMPNHAADO_OFFSET))(this);
	}

	::System::Void HNEEAEOPBCA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOJJMEFOFI_HNEEAEOPBCA_OFFSET))(this);
	}
};
