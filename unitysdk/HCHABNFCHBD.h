#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LDNHPIJHFEP;
class OCLLKJMICKK;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HCHABNFCHBD_DLHPKLNCKHB_OFFSET UNITYSDK_OFFSET(0x1EE54F50)
#define HCHABNFCHBD_FCMCANCHPNJ_OFFSET UNITYSDK_OFFSET(0x1EE54D10)
#define HCHABNFCHBD_FLOAAMAGMGG_OFFSET UNITYSDK_OFFSET(0x1EE54F40)
#define HCHABNFCHBD_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1EE54EB0)
#define HCHABNFCHBD_OMMICIJCCKB_OFFSET UNITYSDK_OFFSET(0x1EE54E70)
#define HCHABNFCHBD__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE54B90)

inline static constexpr unsigned int HCHABNFCHBD_TypeDefinitionIndex = 94619;

class HCHABNFCHBD : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::LDNHPIJHFEP*>* COKIPMBMMKE; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* HGKANJHHLMF; // 0x18
	::System::Int32 KJOOEKDCCNL; // 0x20

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::Int32>* HGKANJHHLMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + HCHABNFCHBD__CTOR_OFFSET))(this, HGKANJHHLMF);
	}

	::System::Boolean FCMCANCHPNJ(::OCLLKJMICKK* KMHICJLIECP)
	{
		return ((::System::Boolean(*)(::PVOID, ::OCLLKJMICKK*))((::PBYTE)hIl2Cpp + HCHABNFCHBD_FCMCANCHPNJ_OFFSET))(this, KMHICJLIECP);
	}

	::System::Void OMMICIJCCKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHABNFCHBD_OMMICIJCCKB_OFFSET))(this);
	}

	::HCHABNFCHBD* JFDOOELFAOA()
	{
		return ((::HCHABNFCHBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHABNFCHBD_JFDOOELFAOA_OFFSET))(this);
	}

	::System::Int32 FLOAAMAGMGG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHABNFCHBD_FLOAAMAGMGG_OFFSET))(this);
	}

	::System::Void DLHPKLNCKHB(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HCHABNFCHBD_DLHPKLNCKHB_OFFSET))(this, EGEGIMGMJHN);
	}
};
