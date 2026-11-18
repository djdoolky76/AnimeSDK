#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CCBGGAFNBHM;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NEGMFBJEDAK_ABOPPPICICB_OFFSET UNITYSDK_OFFSET(0xE190420)
#define NEGMFBJEDAK_JNLANBGOFME_OFFSET UNITYSDK_OFFSET(0xE1903E0)
#define NEGMFBJEDAK_MHHJGNKKJFD_OFFSET UNITYSDK_OFFSET(0xE190260)
#define NEGMFBJEDAK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0xE190150)
#define NEGMFBJEDAK__CTOR_OFFSET UNITYSDK_OFFSET(0xE190050)

inline static constexpr unsigned int NEGMFBJEDAK_TypeDefinitionIndex = 84942;

class NEGMFBJEDAK : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::CCBGGAFNBHM*>* LNGHKHELEBJ; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::CCBGGAFNBHM*>* HNMMBFABMKN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGMFBJEDAK__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGMFBJEDAK_PHOADBJGFBE_OFFSET))(this);
	}

	::CCBGGAFNBHM* MHHJGNKKJFD(::System::Int32 HLPPGDOIPDF)
	{
		return ((::CCBGGAFNBHM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEGMFBJEDAK_MHHJGNKKJFD_OFFSET))(this, HLPPGDOIPDF);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::CCBGGAFNBHM*>* JNLANBGOFME()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::CCBGGAFNBHM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGMFBJEDAK_JNLANBGOFME_OFFSET))(this);
	}

	::CCBGGAFNBHM* ABOPPPICICB(::System::Int32 HLPPGDOIPDF, ::System::Int32 MKCKPBPDGBF, ::System::Boolean BNCKGCHFHFF, ::System::Boolean MBNNJODEJEL, ::System::Boolean IOFNCLLNNJK)
	{
		return ((::CCBGGAFNBHM*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NEGMFBJEDAK_ABOPPPICICB_OFFSET))(this, HLPPGDOIPDF, MKCKPBPDGBF, BNCKGCHFHFF, MBNNJODEJEL, IOFNCLLNNJK);
	}
};
