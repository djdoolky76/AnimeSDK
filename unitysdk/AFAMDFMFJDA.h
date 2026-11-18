#pragma once
#include "unitysdk/unitysdk.h"

class NPAPJAMMAHF;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AFAMDFMFJDA_DJDJKILDPGP_OFFSET UNITYSDK_OFFSET(0x11B91DC0)
#define AFAMDFMFJDA_EJJBNGFNAHE_OFFSET UNITYSDK_OFFSET(0x11B923C0)
#define AFAMDFMFJDA_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x11B91E00)
#define AFAMDFMFJDA_KKEGDMJJELA_OFFSET UNITYSDK_OFFSET(0x11B922E0)
#define AFAMDFMFJDA_NHHJDHJGOAB_OFFSET UNITYSDK_OFFSET(0x11B91F00)
#define AFAMDFMFJDA__CTOR_OFFSET UNITYSDK_OFFSET(0x11B91E40)

inline static constexpr unsigned int AFAMDFMFJDA_TypeDefinitionIndex = 66921;

class AFAMDFMFJDA
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPAPJAMMAHF*>* HNMJIGLCBHI; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* MLLMGOLFKMJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAMDFMFJDA__CTOR_OFFSET))(this);
	}

	::System::Void DJDJKILDPGP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAMDFMFJDA_DJDJKILDPGP_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAMDFMFJDA_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void NHHJDHJGOAB(::System::Collections::Generic::List_1<::NPAPJAMMAHF*>* DJLOKMMLFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NPAPJAMMAHF*>*))((::PBYTE)hIl2Cpp + AFAMDFMFJDA_NHHJDHJGOAB_OFFSET))(this, DJLOKMMLFJC);
	}

	::NPAPJAMMAHF* KKEGDMJJELA(::System::UInt32 MGMDLMBEDJF)
	{
		return ((::NPAPJAMMAHF*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AFAMDFMFJDA_KKEGDMJJELA_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPAPJAMMAHF*>* EJJBNGFNAHE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NPAPJAMMAHF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAMDFMFJDA_EJJBNGFNAHE_OFFSET))(this);
	}
};
