#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKLHIANNECC.h"
#include "unitysdk/PJBGHMDHHBM.h"

class KIGLPNLHEPF;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GHKLKMECBCG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1DABAA90)
#define GHKLKMECBCG_ILPPHLABHAM_OFFSET UNITYSDK_OFFSET(0x1DABAB80)
#define GHKLKMECBCG_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1DABAFA0)
#define GHKLKMECBCG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1DABAC10)
#define GHKLKMECBCG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1DABAAD0)
#define GHKLKMECBCG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB3FB0)

inline static constexpr unsigned int GHKLKMECBCG_TypeDefinitionIndex = 93300;

class GHKLKMECBCG : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::KIGLPNLHEPF*>* JMINOGAOFIL; // 0x18
	::AKLHIANNECC DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKLKMECBCG__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKLKMECBCG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKLKMECBCG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::KIGLPNLHEPF*>* ILPPHLABHAM()
	{
		return ((::System::Collections::Generic::List_1<::KIGLPNLHEPF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKLKMECBCG_ILPPHLABHAM_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GHKLKMECBCG_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::KIGLPNLHEPF* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::KIGLPNLHEPF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GHKLKMECBCG_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}
};
