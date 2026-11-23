#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AACFC915B3A87430.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class F8D1D92FBC105B92;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define E1A4FA603F7094B5_A995AE77AF90DBB9_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define E1A4FA603F7094B5_B3C5FDE65EED2AF2_OFFSET UNITYSDK_OFFSET(0x16F77C0)
#define E1A4FA603F7094B5_BA2B7026D668F706_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define E1A4FA603F7094B5_F23375AC3A8FAEB8_OFFSET UNITYSDK_OFFSET(0x1C28010)
#define E1A4FA603F7094B5_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x24A6650)
#define E1A4FA603F7094B5__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E1A4FA603F7094B5_TypeDefinitionIndex = 4763;

class E1A4FA603F7094B5 : public ::AACFC915B3A87430
{
public:
	::System::Boolean A035EE6965254A87; // 0x10
	::System::Byte _padding0[0x7];
	::System::Collections::Generic::Dictionary_2<::System::String*, ::F8D1D92FBC105B92*>* E777094DC36205D3; // 0x18

	::System::Boolean B3C5FDE65EED2AF2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + E1A4FA603F7094B5_B3C5FDE65EED2AF2_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E1A4FA603F7094B5*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E1A4FA603F7094B5*&))((::PBYTE)hIl2Cpp + E1A4FA603F7094B5_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void A995AE77AF90DBB9(::System::Collections::Generic::Dictionary_2<::System::String*, ::F8D1D92FBC105B92*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::F8D1D92FBC105B92*>*))((::PBYTE)hIl2Cpp + E1A4FA603F7094B5_A995AE77AF90DBB9_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::F8D1D92FBC105B92*>* BA2B7026D668F706()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::F8D1D92FBC105B92*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E1A4FA603F7094B5_BA2B7026D668F706_OFFSET))(this);
	}

	::System::Void F23375AC3A8FAEB8(::System::Boolean E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + E1A4FA603F7094B5_F23375AC3A8FAEB8_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E1A4FA603F7094B5__CTOR_OFFSET))(this);
	}
};
