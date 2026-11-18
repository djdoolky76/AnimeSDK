#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJALGNLJFHG.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CHFJPMFEJII;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FGIIJGHOOGL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A5A48D0)
#define FGIIJGHOOGL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5A4650)
#define FGIIJGHOOGL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A5A4660)
#define FGIIJGHOOGL_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x1A5A4A00)
#define FGIIJGHOOGL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5A4720)
#define FGIIJGHOOGL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A5A4850)
#define FGIIJGHOOGL_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x1A5A4AF0)
#define FGIIJGHOOGL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A5A4CD0)
#define FGIIJGHOOGL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A5A42B0)
#define FGIIJGHOOGL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A5A4AD0)
#define FGIIJGHOOGL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A5A4290)
#define FGIIJGHOOGL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A5A4570)
#define FGIIJGHOOGL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5A49B0)

inline static constexpr unsigned int FGIIJGHOOGL_TypeDefinitionIndex = 14073;

class FGIIJGHOOGL : public ::System::Object
{
public:
	::GJALGNLJFHG DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::Il2CppArray<::CHFJPMFEJII*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIIJGHOOGL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIIJGHOOGL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIIJGHOOGL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIIJGHOOGL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIIJGHOOGL_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FGIIJGHOOGL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FGIIJGHOOGL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIIJGHOOGL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIIJGHOOGL_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::CHFJPMFEJII*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::CHFJPMFEJII*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIIJGHOOGL_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FGIIJGHOOGL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIIJGHOOGL_NAMKJOJBAOA_OFFSET))(this);
	}

	::CHFJPMFEJII* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::CHFJPMFEJII*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FGIIJGHOOGL_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}
};
