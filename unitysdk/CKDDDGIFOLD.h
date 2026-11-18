#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

class PEABBAPILBH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CKDDDGIFOLD_AKMHEJEGBEJ_OFFSET UNITYSDK_OFFSET(0x18DDB270)
#define CKDDDGIFOLD_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x18DDB400)
#define CKDDDGIFOLD_MAMOLOLGBHI_OFFSET UNITYSDK_OFFSET(0x18DDB480)
#define CKDDDGIFOLD_MDMKMKAKEMA_OFFSET UNITYSDK_OFFSET(0x18DDB180)
#define CKDDDGIFOLD_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x18DDB510)
#define CKDDDGIFOLD__CTOR_OFFSET UNITYSDK_OFFSET(0x18DDB100)

inline static constexpr unsigned int CKDDDGIFOLD_TypeDefinitionIndex = 92477;

class CKDDDGIFOLD : public ::System::Object
{
public:
	// static const ::System::String* GHEFCHCCOHD; // 0x0
	::System::Collections::Generic::List_1<::PEABBAPILBH*>* BNBGIFONPGI; // 0x10
	::System::String* KIHGNGKBADE; // 0x18
	::PEABBAPILBH* LDDJOFHAOHG; // 0x20
	::Foundation::Coroutine::CoroutineHandle PHHDHIBOCKA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKDDDGIFOLD__CTOR_OFFSET))(this);
	}

	::System::Void MDMKMKAKEMA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKDDDGIFOLD_MDMKMKAKEMA_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKDDDGIFOLD_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void AKMHEJEGBEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKDDDGIFOLD_AKMHEJEGBEJ_OFFSET))(this);
	}

	::System::Void MAMOLOLGBHI(::PEABBAPILBH* KKIAHJODOIA)
	{
		return ((::System::Void(*)(::PVOID, ::PEABBAPILBH*))((::PBYTE)hIl2Cpp + CKDDDGIFOLD_MAMOLOLGBHI_OFFSET))(this, KKIAHJODOIA);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKDDDGIFOLD_OKJCHFGIKBH_OFFSET))(this);
	}
};
