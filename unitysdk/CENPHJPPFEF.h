#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLHHEIILPKP.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class CRC32; }
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Security::Cryptography { class MD5; }

#define CENPHJPPFEF_AFLDLBEHNHA_1_OFFSET UNITYSDK_OFFSET(0x1EF01700)
#define CENPHJPPFEF_AFLDLBEHNHA_OFFSET UNITYSDK_OFFSET(0x1EF00B40)
#define CENPHJPPFEF_BNNKLEIDFPB_1_OFFSET UNITYSDK_OFFSET(0x1EF010C0)
#define CENPHJPPFEF_BNNKLEIDFPB_2_OFFSET UNITYSDK_OFFSET(0x1EF00F30)
#define CENPHJPPFEF_BNNKLEIDFPB_OFFSET UNITYSDK_OFFSET(0x1EF00C60)
#define CENPHJPPFEF_CIGPIIGEAHJ_1_OFFSET UNITYSDK_OFFSET(0x1EF01AC0)
#define CENPHJPPFEF_CIGPIIGEAHJ_OFFSET UNITYSDK_OFFSET(0x1EF00E30)
#define CENPHJPPFEF_DDMPMHAFOBO_1_OFFSET UNITYSDK_OFFSET(0x1EF02320)
#define CENPHJPPFEF_DDMPMHAFOBO_2_OFFSET UNITYSDK_OFFSET(0x1EF024C0)
#define CENPHJPPFEF_DDMPMHAFOBO_OFFSET UNITYSDK_OFFSET(0x1EF01F10)
#define CENPHJPPFEF_ECAHHMGFOMG_OFFSET UNITYSDK_OFFSET(0x1EF02560)
#define CENPHJPPFEF_FGOOMDCJCCN_1_OFFSET UNITYSDK_OFFSET(0x1EF00A70)
#define CENPHJPPFEF_FGOOMDCJCCN_2_OFFSET UNITYSDK_OFFSET(0x1EF01820)
#define CENPHJPPFEF_FGOOMDCJCCN_OFFSET UNITYSDK_OFFSET(0x1EF00930)
#define CENPHJPPFEF_GHPBEEHKCJN_OFFSET UNITYSDK_OFFSET(0x1EF01CF0)
#define CENPHJPPFEF_KDLONODDOKG_1_OFFSET UNITYSDK_OFFSET(0x1EF01FC0)
#define CENPHJPPFEF_KDLONODDOKG_OFFSET UNITYSDK_OFFSET(0x1EF01680)
#define CENPHJPPFEF_KFMEMNMFCGH_OFFSET UNITYSDK_OFFSET(0x1EF021F0)
#define CENPHJPPFEF_KOIGNFIFMIK_1_OFFSET UNITYSDK_OFFSET(0x1EF01D70)
#define CENPHJPPFEF_KOIGNFIFMIK_2_OFFSET UNITYSDK_OFFSET(0x1EF025D0)
#define CENPHJPPFEF_KOIGNFIFMIK_OFFSET UNITYSDK_OFFSET(0x1EF01410)
#define CENPHJPPFEF_LHLGKMGLLIG_OFFSET UNITYSDK_OFFSET(0x1EF014C0)
#define CENPHJPPFEF_MKLMMAFFIFF_OFFSET UNITYSDK_OFFSET(0x1EF01620)
#define CENPHJPPFEF_NFEMOFJPIJA_OFFSET UNITYSDK_OFFSET(0x1EF020C0)
#define CENPHJPPFEF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF00860)

inline static constexpr unsigned int CENPHJPPFEF_TypeDefinitionIndex = 8499;

class CENPHJPPFEF : public ::System::Object
{
public:
	static ::System::Security::Cryptography::MD5** StaticGet_GINOOIODBOD()
	{
		return (::System::Security::Cryptography::MD5**)Il2CppClass::FromTypeDefinitionIndex(CENPHJPPFEF_TypeDefinitionIndex)->GetStaticField(0x7140);
	}
	static ::Foundation::CRC32** StaticGet_FFCHPENBKDB()
	{
		return (::Foundation::CRC32**)Il2CppClass::FromTypeDefinitionIndex(CENPHJPPFEF_TypeDefinitionIndex)->GetStaticField(0x7148);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CENPHJPPFEF__CCTOR_OFFSET))();
	}

	static ::System::String* FGOOMDCJCCN(::System::IO::Stream* DGIKMCCHNAM, ::System::Boolean MABNBOGANPA)
	{
		return ((::System::String*(*)(::System::IO::Stream*, ::System::Boolean))((::PBYTE)hIl2Cpp + CENPHJPPFEF_FGOOMDCJCCN_OFFSET))(DGIKMCCHNAM, MABNBOGANPA);
	}

	static ::System::String* AFLDLBEHNHA(::CLHHEIILPKP MEAINBLGOFH, ::System::IO::Stream* CPKODGLINAO, ::System::Boolean MABNBOGANPA)
	{
		return ((::System::String*(*)(::CLHHEIILPKP, ::System::IO::Stream*, ::System::Boolean))((::PBYTE)hIl2Cpp + CENPHJPPFEF_AFLDLBEHNHA_OFFSET))(MEAINBLGOFH, CPKODGLINAO, MABNBOGANPA);
	}

	static ::System::String* BNNKLEIDFPB(::System::IO::Stream* DGIKMCCHNAM, ::System::Boolean MABNBOGANPA)
	{
		return ((::System::String*(*)(::System::IO::Stream*, ::System::Boolean))((::PBYTE)hIl2Cpp + CENPHJPPFEF_BNNKLEIDFPB_OFFSET))(DGIKMCCHNAM, MABNBOGANPA);
	}

	static ::System::String* BNNKLEIDFPB_1(::System::String* CEKNHIDPNNA, ::System::Boolean MABNBOGANPA)
	{
		return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CENPHJPPFEF_BNNKLEIDFPB_1_OFFSET))(CEKNHIDPNNA, MABNBOGANPA);
	}

	static ::System::String* KOIGNFIFMIK(::System::IO::Stream* HLFFCMIFFIB)
	{
		return ((::System::String*(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + CENPHJPPFEF_KOIGNFIFMIK_OFFSET))(HLFFCMIFFIB);
	}

	static ::System::String* MKLMMAFFIFF()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CENPHJPPFEF_MKLMMAFFIFF_OFFSET))();
	}

	static ::System::String* FGOOMDCJCCN_1(::System::Security::Cryptography::MD5* GINOOIODBOD, ::System::IO::Stream* DGIKMCCHNAM)
	{
		return ((::System::String*(*)(::System::Security::Cryptography::MD5*, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + CENPHJPPFEF_FGOOMDCJCCN_1_OFFSET))(GINOOIODBOD, DGIKMCCHNAM);
	}

	static ::System::UInt64 KDLONODDOKG(::System::String* CJBJONJDOLI)
	{
		return ((::System::UInt64(*)(::System::String*))((::PBYTE)hIl2Cpp + CENPHJPPFEF_KDLONODDOKG_OFFSET))(CJBJONJDOLI);
	}

	static ::System::String* BNNKLEIDFPB_2(::Foundation::CRC32* FFCHPENBKDB, ::System::IO::Stream* DGIKMCCHNAM)
	{
		return ((::System::String*(*)(::Foundation::CRC32*, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + CENPHJPPFEF_BNNKLEIDFPB_2_OFFSET))(FFCHPENBKDB, DGIKMCCHNAM);
	}

	static ::System::UInt64 CIGPIIGEAHJ(::System::IO::Stream* DGIKMCCHNAM)
	{
		return ((::System::UInt64(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + CENPHJPPFEF_CIGPIIGEAHJ_OFFSET))(DGIKMCCHNAM);
	}

	static ::System::String* AFLDLBEHNHA_1(::CLHHEIILPKP MEAINBLGOFH, ::System::String* CMFPFPJHDHJ, ::System::Boolean MABNBOGANPA)
	{
		return ((::System::String*(*)(::CLHHEIILPKP, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CENPHJPPFEF_AFLDLBEHNHA_1_OFFSET))(MEAINBLGOFH, CMFPFPJHDHJ, MABNBOGANPA);
	}

	static ::System::UInt32 GHPBEEHKCJN(::System::String* CJBJONJDOLI)
	{
		return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + CENPHJPPFEF_GHPBEEHKCJN_OFFSET))(CJBJONJDOLI);
	}

	static ::System::String* KOIGNFIFMIK_1(::System::String* HLFFCMIFFIB)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CENPHJPPFEF_KOIGNFIFMIK_1_OFFSET))(HLFFCMIFFIB);
	}

	static ::System::UInt64 CIGPIIGEAHJ_1(::System::String* CEKNHIDPNNA)
	{
		return ((::System::UInt64(*)(::System::String*))((::PBYTE)hIl2Cpp + CENPHJPPFEF_CIGPIIGEAHJ_1_OFFSET))(CEKNHIDPNNA);
	}

	static ::System::String* DDMPMHAFOBO(::System::IO::Stream* HLFFCMIFFIB)
	{
		return ((::System::String*(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + CENPHJPPFEF_DDMPMHAFOBO_OFFSET))(HLFFCMIFFIB);
	}

	static ::System::UInt64 KDLONODDOKG_1(::System::IO::Stream* DGIKMCCHNAM)
	{
		return ((::System::UInt64(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + CENPHJPPFEF_KDLONODDOKG_1_OFFSET))(DGIKMCCHNAM);
	}

	static ::System::Boolean NFEMOFJPIJA(::System::String* HLFFCMIFFIB, ::System::String* CBIEJMBPAIC)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CENPHJPPFEF_NFEMOFJPIJA_OFFSET))(HLFFCMIFFIB, CBIEJMBPAIC);
	}

	static ::System::String* LHLGKMGLLIG(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CENPHJPPFEF_LHLGKMGLLIG_OFFSET))(LJBPECKCCEA);
	}

	static ::System::Boolean KFMEMNMFCGH(::System::String* HLFFCMIFFIB, ::System::String* CBIEJMBPAIC)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CENPHJPPFEF_KFMEMNMFCGH_OFFSET))(HLFFCMIFFIB, CBIEJMBPAIC);
	}

	static ::System::String* DDMPMHAFOBO_1(::System::String* HLFFCMIFFIB)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CENPHJPPFEF_DDMPMHAFOBO_1_OFFSET))(HLFFCMIFFIB);
	}

	static ::System::String* DDMPMHAFOBO_2(::System::String* HLFFCMIFFIB, ::System::String* JBDIALDJPLJ)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CENPHJPPFEF_DDMPMHAFOBO_2_OFFSET))(HLFFCMIFFIB, JBDIALDJPLJ);
	}

	static ::System::UInt32 ECAHHMGFOMG(::Il2CppArray<::System::Byte>* AOADDGCDELC)
	{
		return ((::System::UInt32(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CENPHJPPFEF_ECAHHMGFOMG_OFFSET))(AOADDGCDELC);
	}

	static ::System::String* FGOOMDCJCCN_2(::System::String* CEKNHIDPNNA, ::System::Boolean MABNBOGANPA)
	{
		return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CENPHJPPFEF_FGOOMDCJCCN_2_OFFSET))(CEKNHIDPNNA, MABNBOGANPA);
	}

	static ::System::String* KOIGNFIFMIK_2(::Il2CppArray<::System::Byte>* AOADDGCDELC)
	{
		return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CENPHJPPFEF_KOIGNFIFMIK_2_OFFSET))(AOADDGCDELC);
	}
};
