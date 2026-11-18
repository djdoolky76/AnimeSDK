#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKLEBCDLGKC;
class EDINNMNPKOD;
class JJPDGONFBFB;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KNLFLMMHALL_1;

#define AIGIDBNJLHM_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x14213950)
#define AIGIDBNJLHM_DCAEEGJKJNE_OFFSET UNITYSDK_OFFSET(0x14213A90)
#define AIGIDBNJLHM_OKMEFGGMPFG_OFFSET UNITYSDK_OFFSET(0x14214B10)
#define AIGIDBNJLHM_PANCECMBNFK_OFFSET UNITYSDK_OFFSET(0x14213B10)
#define AIGIDBNJLHM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x14213A20)
#define AIGIDBNJLHM__CTOR_OFFSET UNITYSDK_OFFSET(0x142138D0)

inline static constexpr unsigned int AIGIDBNJLHM_TypeDefinitionIndex = 68798;

class AIGIDBNJLHM : public ::System::Object
{
public:
	::CKLEBCDLGKC* KMMKMGDHCOI; // 0x10
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* PFMNHFBAINN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGIDBNJLHM__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::CKLEBCDLGKC* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::CKLEBCDLGKC*))((::PBYTE)hIl2Cpp + AIGIDBNJLHM_BBOMJDBNHIC_OFFSET))(this, AEJAMJDBHAM);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGIDBNJLHM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Int32 DCAEEGJKJNE(::EDINNMNPKOD* HAAEBCOBKFF, ::EDINNMNPKOD* BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::EDINNMNPKOD*, ::EDINNMNPKOD*))((::PBYTE)hIl2Cpp + AIGIDBNJLHM_DCAEEGJKJNE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}

	::System::Void PANCECMBNFK(::JJPDGONFBFB* HAHFDEPIHCP)
	{
		return ((::System::Void(*)(::PVOID, ::JJPDGONFBFB*))((::PBYTE)hIl2Cpp + AIGIDBNJLHM_PANCECMBNFK_OFFSET))(this, HAHFDEPIHCP);
	}

	::System::Void OKMEFGGMPFG(::System::Boolean FIPHFGHNNBE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AIGIDBNJLHM_OKMEFGGMPFG_OFFSET))(this, FIPHFGHNNBE);
	}
};
