#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JINIMMNEHBF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CCBGGAFNBHM_DLENFNLEKEG_OFFSET UNITYSDK_OFFSET(0x199F2ED0)
#define CCBGGAFNBHM_HNOMNPJOKCH_OFFSET UNITYSDK_OFFSET(0x199F2F30)
#define CCBGGAFNBHM_KDFLAKOBKOC_OFFSET UNITYSDK_OFFSET(0x199F2E50)
#define CCBGGAFNBHM_MPJOCJBIFNB_OFFSET UNITYSDK_OFFSET(0x199F2E40)
#define CCBGGAFNBHM__CTOR_OFFSET UNITYSDK_OFFSET(0x199F2E10)

inline static constexpr unsigned int CCBGGAFNBHM_TypeDefinitionIndex = 80457;

class CCBGGAFNBHM : public ::System::Object
{
public:
	::JINIMMNEHBF* DGKDJINBGHJ; // 0x10
	::System::Int32 HLPPGDOIPDF; // 0x18
	::System::Int32 MKCKPBPDGBF; // 0x1C
	::System::Boolean OBEHBHJCKHN; // 0x20
	::System::Boolean HECMNBACADL; // 0x21
	::System::Boolean OOOGLILFFFE; // 0x22

	::System::Void _ctor(::System::Int32 HLPPGDOIPDF, ::System::Int32 MKCKPBPDGBF, ::System::Boolean LJNPANEPJFO, ::System::Boolean GLEBBLNFPME, ::System::Boolean JNBLBNKCLMB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CCBGGAFNBHM__CTOR_OFFSET))(this, HLPPGDOIPDF, MKCKPBPDGBF, LJNPANEPJFO, GLEBBLNFPME, JNBLBNKCLMB);
	}

	::System::Boolean MPJOCJBIFNB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCBGGAFNBHM_MPJOCJBIFNB_OFFSET))(this);
	}

	::JINIMMNEHBF* KDFLAKOBKOC()
	{
		return ((::JINIMMNEHBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCBGGAFNBHM_KDFLAKOBKOC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* DLENFNLEKEG()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCBGGAFNBHM_DLENFNLEKEG_OFFSET))(this);
	}

	::System::Boolean HNOMNPJOKCH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCBGGAFNBHM_HNOMNPJOKCH_OFFSET))(this);
	}
};
