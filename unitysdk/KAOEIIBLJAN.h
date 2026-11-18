#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class HGBFKACDPBM;
class JNAGFFCCOHI;
class LOICBEJNBOB;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KAOEIIBLJAN_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x19489770)
#define KAOEIIBLJAN_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x7E0560)
#define KAOEIIBLJAN__CTOR_OFFSET UNITYSDK_OFFSET(0x7E0430)

inline static constexpr unsigned int KAOEIIBLJAN_TypeDefinitionIndex = 57093;

struct alignas(8) KAOEIIBLJAN
{
	::HGBFKACDPBM* HMPEEAAAGHE; // 0x10
	::System::Collections::Generic::List_1<::JNAGFFCCOHI*>* HNGKPMFBGCI; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* EJBIKBALPMP; // 0x20
	::System::Boolean FHLEGNBBFHF; // 0x28

	::System::Void _ctor(::HGBFKACDPBM* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::HGBFKACDPBM*))((::PBYTE)hIl2Cpp + KAOEIIBLJAN__CTOR_OFFSET))(this, GEEHGDABNJF);
	}

	::LOICBEJNBOB* PKOGNPKCHHE()
	{
		return ((::LOICBEJNBOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOEIIBLJAN_PKOGNPKCHHE_OFFSET))(this);
	}

	/*
	static ::KAOEIIBLJAN COKNIICCODC(::HGBFKACDPBM* GEEHGDABNJF)
	{
		return ((::KAOEIIBLJAN(*)(::HGBFKACDPBM*))((::PBYTE)hIl2Cpp + KAOEIIBLJAN_COKNIICCODC_OFFSET))(GEEHGDABNJF);
	}
	*/
};
