#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIDOLGNHIPA.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class HIBCOKCOCCL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KKHLDFEDLPB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B7E6990)
#define KKHLDFEDLPB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B7E6620)
#define KKHLDFEDLPB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B7E67A0)
#define KKHLDFEDLPB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B7E6860)
#define KKHLDFEDLPB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B7E6630)
#define KKHLDFEDLPB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B7E6AC0)
#define KKHLDFEDLPB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B7E6EF0)
#define KKHLDFEDLPB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B7E62A0)
#define KKHLDFEDLPB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B7E6ED0)
#define KKHLDFEDLPB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B7E6280)
#define KKHLDFEDLPB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B7E6530)
#define KKHLDFEDLPB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E6A70)

inline static constexpr unsigned int KKHLDFEDLPB_TypeDefinitionIndex = 9907;

class KKHLDFEDLPB : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* FLBOKGKPECD; // 0x18
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* LHINHLCKHNE; // 0x20
	::Il2CppArray<::HIBCOKCOCCL*>* OJMBOGGMIKO; // 0x28
	::AIDOLGNHIPA DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHLDFEDLPB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHLDFEDLPB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHLDFEDLPB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KKHLDFEDLPB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KKHLDFEDLPB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHLDFEDLPB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHLDFEDLPB_FINALIZE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHLDFEDLPB_BHLAEBMEOLO_OFFSET))(this);
	}

	::HIBCOKCOCCL* IFDPKDOFOJD(::System::Int32 DAKFBIOBNBN, ::System::Int32 JHKACBBCGKL)
	{
		return ((::HIBCOKCOCCL*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KKHLDFEDLPB_IFDPKDOFOJD_OFFSET))(this, DAKFBIOBNBN, JHKACBBCGKL);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KKHLDFEDLPB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHLDFEDLPB_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHLDFEDLPB_NAMKJOJBAOA_OFFSET))(this);
	}
};
