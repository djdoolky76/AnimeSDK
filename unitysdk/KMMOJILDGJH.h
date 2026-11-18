#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KMMOJILDGJH_GLOAAACBNPP_OFFSET UNITYSDK_OFFSET(0xD409810)
#define KMMOJILDGJH_JIKKCOCEIFH_OFFSET UNITYSDK_OFFSET(0xD409930)
#define KMMOJILDGJH_JPPEEOLOGGP_OFFSET UNITYSDK_OFFSET(0xD4098E0)
#define KMMOJILDGJH_MAMNIGKOFLN_OFFSET UNITYSDK_OFFSET(0xD4097A0)
#define KMMOJILDGJH_MBHJJNFNGPE_OFFSET UNITYSDK_OFFSET(0xD409870)
#define KMMOJILDGJH_PEOEBEBFIJO_OFFSET UNITYSDK_OFFSET(0xD409800)
#define KMMOJILDGJH__CTOR_OFFSET UNITYSDK_OFFSET(0xD409790)

inline static constexpr unsigned int KMMOJILDGJH_TypeDefinitionIndex = 53031;

class KMMOJILDGJH : public ::System::Object
{
public:
	::System::Int32 LLEMJLOKGGH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMOJILDGJH__CTOR_OFFSET))(this);
	}

	::System::Boolean MAMNIGKOFLN(::System::Int32 BOGPAHGJOJK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KMMOJILDGJH_MAMNIGKOFLN_OFFSET))(this, BOGPAHGJOJK);
	}

	::System::Boolean PEOEBEBFIJO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMMOJILDGJH_PEOEBEBFIJO_OFFSET))(this);
	}

	::System::Boolean GLOAAACBNPP(::System::Int32 BOGPAHGJOJK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KMMOJILDGJH_GLOAAACBNPP_OFFSET))(this, BOGPAHGJOJK);
	}

	::System::Void MBHJJNFNGPE(::System::Int32 BOGPAHGJOJK, ::System::Boolean JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + KMMOJILDGJH_MBHJJNFNGPE_OFFSET))(this, BOGPAHGJOJK, JKBLDFBGBPK);
	}

	static ::System::Boolean JPPEEOLOGGP(::KMMOJILDGJH* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::KMMOJILDGJH*))((::PBYTE)hIl2Cpp + KMMOJILDGJH_JPPEEOLOGGP_OFFSET))(LJBPECKCCEA);
	}

	::System::Void JIKKCOCEIFH(::System::Int32 BOGPAHGJOJK, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + KMMOJILDGJH_JIKKCOCEIFH_OFFSET))(this, BOGPAHGJOJK, EGEGIMGMJHN);
	}
};
