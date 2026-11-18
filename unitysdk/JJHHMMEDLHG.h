#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFMNJHEEPJM;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JJHHMMEDLHG_BFAOBAKFJDL_OFFSET UNITYSDK_OFFSET(0x14FBEB90)
#define JJHHMMEDLHG_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x14FBECA0)
#define JJHHMMEDLHG_EEJOMPCNFAN_OFFSET UNITYSDK_OFFSET(0x14FBEEF0)
#define JJHHMMEDLHG_GLAIBMOIBIG_OFFSET UNITYSDK_OFFSET(0x14FBEF50)
#define JJHHMMEDLHG__CTOR_OFFSET UNITYSDK_OFFSET(0x14FBEB00)

inline static constexpr unsigned int JJHHMMEDLHG_TypeDefinitionIndex = 69766;

class JJHHMMEDLHG : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::CFMNJHEEPJM*>* CBFCAIJONLL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHHMMEDLHG__CTOR_OFFSET))(this);
	}

	::System::Boolean BFAOBAKFJDL(::System::Int32 BNLHPGHLKDK, ::CFMNJHEEPJM*& JFGMHJOCHGB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CFMNJHEEPJM*&))((::PBYTE)hIl2Cpp + JJHHMMEDLHG_BFAOBAKFJDL_OFFSET))(this, BNLHPGHLKDK, JFGMHJOCHGB);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHHMMEDLHG_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void EEJOMPCNFAN(::System::Int32 BNLHPGHLKDK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JJHHMMEDLHG_EEJOMPCNFAN_OFFSET))(this, BNLHPGHLKDK);
	}

	::System::Void GLAIBMOIBIG(::System::Int32 BNLHPGHLKDK, ::CFMNJHEEPJM* JFGMHJOCHGB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::CFMNJHEEPJM*))((::PBYTE)hIl2Cpp + JJHHMMEDLHG_GLAIBMOIBIG_OFFSET))(this, BNLHPGHLKDK, JFGMHJOCHGB);
	}
};
