#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class EMPEGMEDAHH;
class FAGMJNCLCMN;
class ONOPBAKPNFC;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class KLIOMMIOFDC_1;
template <typename T> class LGFJMNEABJP_1;

#define DAMMKJAAHLD_ADNEKGKLBDB_OFFSET UNITYSDK_OFFSET(0x13E28D30)
#define DAMMKJAAHLD_CMFOIAAGPFL_OFFSET UNITYSDK_OFFSET(0x13E28DC0)
#define DAMMKJAAHLD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13E28240)
#define DAMMKJAAHLD_EDOEJGONKIM_OFFSET UNITYSDK_OFFSET(0x13E28300)
#define DAMMKJAAHLD_EJFLKDALGCD_OFFSET UNITYSDK_OFFSET(0x13E281C0)
#define DAMMKJAAHLD_HPANLLNNGBH_OFFSET UNITYSDK_OFFSET(0x13E286F0)
#define DAMMKJAAHLD_LOBKEJDPEOP_OFFSET UNITYSDK_OFFSET(0x13E29130)
#define DAMMKJAAHLD_MEAHGEPAJBI_OFFSET UNITYSDK_OFFSET(0x13E28870)
#define DAMMKJAAHLD_NGCJHLFLAGK_OFFSET UNITYSDK_OFFSET(0x13E28DD0)
#define DAMMKJAAHLD_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x13E280C0)
#define DAMMKJAAHLD__CTOR_OFFSET UNITYSDK_OFFSET(0x13E282F0)

inline static constexpr unsigned int DAMMKJAAHLD_TypeDefinitionIndex = 67580;

class DAMMKJAAHLD : public ::JJEJBPGJPJN
{
public:
	// static const ::System::Int32 HMBEDLLOOBJ = 0x4; // 0x0
	// static const ::System::Int32 OEHMCKFKFBB = 0x4; // 0x0
	::KLIOMMIOFDC_1<::System::UInt32>* OFAIFIBLLAN; // 0x88
	::KLIOMMIOFDC_1<::System::Int32>* KBFONEHKJDO; // 0x90
	::KLIOMMIOFDC_1<::System::Boolean>* JDBEPMKNBIG; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::KLIOMMIOFDC_1<::System::Single>*>* LCDLIIMOALD; // 0xA0
	::EMPEGMEDAHH* LHHJNNDBLHO; // 0xA8
	::LGFJMNEABJP_1<::FAGMJNCLCMN*>* CKNPMPMOBLJ; // 0xB0
	::LGFJMNEABJP_1<::System::UInt32>* AALCGBNHADJ; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMMKJAAHLD__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMMKJAAHLD_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void EJFLKDALGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMMKJAAHLD_EJFLKDALGCD_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMMKJAAHLD_DISPOSE_OFFSET))(this);
	}

	::System::Void EDOEJGONKIM(::EMPEGMEDAHH*& INIHCBIJDJN)
	{
		return ((::System::Void(*)(::PVOID, ::EMPEGMEDAHH*&))((::PBYTE)hIl2Cpp + DAMMKJAAHLD_EDOEJGONKIM_OFFSET))(this, INIHCBIJDJN);
	}

	::System::Void MEAHGEPAJBI(::System::Int32 HJKAFBFHGOO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DAMMKJAAHLD_MEAHGEPAJBI_OFFSET))(this, HJKAFBFHGOO);
	}

	::System::Void ADNEKGKLBDB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMMKJAAHLD_ADNEKGKLBDB_OFFSET))(this);
	}

	::System::Void CMFOIAAGPFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMMKJAAHLD_CMFOIAAGPFL_OFFSET))(this);
	}

	::System::Void HPANLLNNGBH(::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DAMMKJAAHLD_HPANLLNNGBH_OFFSET))(this, JHFKDGBCOBA);
	}

	::System::Void NGCJHLFLAGK(::ONOPBAKPNFC* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::ONOPBAKPNFC*))((::PBYTE)hIl2Cpp + DAMMKJAAHLD_NGCJHLFLAGK_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void LOBKEJDPEOP(::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DAMMKJAAHLD_LOBKEJDPEOP_OFFSET))(this, JHFKDGBCOBA);
	}
};
