#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IHBGLAHCPBI.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class DPBAKCIOANH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define GEPMKHEIPNG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x16646570)
#define GEPMKHEIPNG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x16646330)
#define GEPMKHEIPNG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x166464B0)
#define GEPMKHEIPNG_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x16646CC0)
#define GEPMKHEIPNG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x16646650)
#define GEPMKHEIPNG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x16646340)
#define GEPMKHEIPNG_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x166467D0)
#define GEPMKHEIPNG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x16646B20)
#define GEPMKHEIPNG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x16645FB0)
#define GEPMKHEIPNG_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x16646B00)
#define GEPMKHEIPNG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x16645F90)
#define GEPMKHEIPNG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x16646240)
#define GEPMKHEIPNG__CTOR_OFFSET UNITYSDK_OFFSET(0x16646780)

inline static constexpr unsigned int GEPMKHEIPNG_TypeDefinitionIndex = 15909;

class GEPMKHEIPNG : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* FLBOKGKPECD; // 0x18
	::IHBGLAHCPBI DHDJDGFNBOA; // 0x20
	::Il2CppArray<::DPBAKCIOANH*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPMKHEIPNG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPMKHEIPNG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPMKHEIPNG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GEPMKHEIPNG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GEPMKHEIPNG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPMKHEIPNG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPMKHEIPNG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPMKHEIPNG_FINALIZE_OFFSET))(this);
	}

	::DPBAKCIOANH* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::DPBAKCIOANH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GEPMKHEIPNG_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPMKHEIPNG_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPMKHEIPNG_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GEPMKHEIPNG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Collections::Generic::IReadOnlyList_1<::DPBAKCIOANH*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::DPBAKCIOANH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPMKHEIPNG_EJABHIAHIAN_OFFSET))(this);
	}
};
