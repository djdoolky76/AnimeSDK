#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EADFNFLODCM.h"
#include "unitysdk/PJBGHMDHHBM.h"

class CHEFMGPEGHH;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GEIBOMDABLM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E237140)
#define GEIBOMDABLM_KCCCOFHMPKH_OFFSET UNITYSDK_OFFSET(0x1E237830)
#define GEIBOMDABLM_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E237910)
#define GEIBOMDABLM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E2373A0)
#define GEIBOMDABLM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E237280)
#define GEIBOMDABLM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E237180)

inline static constexpr unsigned int GEIBOMDABLM_TypeDefinitionIndex = 94316;

class GEIBOMDABLM : public ::PJBGHMDHHBM
{
public:
	::EADFNFLODCM DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::CHEFMGPEGHH*>* JMINOGAOFIL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::CHEFMGPEGHH*>*>* ODGFGCLKCOJ; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIBOMDABLM__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIBOMDABLM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIBOMDABLM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GEIBOMDABLM_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Collections::Generic::List_1<::CHEFMGPEGHH*>* KCCCOFHMPKH(::System::Int32 AMHFLBPBKLL)
	{
		return ((::System::Collections::Generic::List_1<::CHEFMGPEGHH*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GEIBOMDABLM_KCCCOFHMPKH_OFFSET))(this, AMHFLBPBKLL);
	}

	::CHEFMGPEGHH* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CHEFMGPEGHH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GEIBOMDABLM_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}
};
