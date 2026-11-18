#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMIFCLOPJGB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class GNOIIPFMBNJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OCMKJBEOKIE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17364010)
#define OCMKJBEOKIE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17363DD0)
#define OCMKJBEOKIE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17363F50)
#define OCMKJBEOKIE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x173640F0)
#define OCMKJBEOKIE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17363DE0)
#define OCMKJBEOKIE_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17364430)
#define OCMKJBEOKIE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17364290)
#define OCMKJBEOKIE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17363A50)
#define OCMKJBEOKIE_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17364270)
#define OCMKJBEOKIE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17363A30)
#define OCMKJBEOKIE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17363CE0)
#define OCMKJBEOKIE__CTOR_OFFSET UNITYSDK_OFFSET(0x17364220)

inline static constexpr unsigned int OCMKJBEOKIE_TypeDefinitionIndex = 15044;

class OCMKJBEOKIE : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* FLBOKGKPECD; // 0x18
	::EMIFCLOPJGB DHDJDGFNBOA; // 0x20
	::Il2CppArray<::GNOIIPFMBNJ*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMKJBEOKIE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMKJBEOKIE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMKJBEOKIE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OCMKJBEOKIE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OCMKJBEOKIE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMKJBEOKIE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMKJBEOKIE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMKJBEOKIE_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMKJBEOKIE_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OCMKJBEOKIE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::GNOIIPFMBNJ* IFDPKDOFOJD(::System::Int32 EBCCPPJHLND, ::System::Int32 HFKIDEMMMBN)
	{
		return ((::GNOIIPFMBNJ*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OCMKJBEOKIE_IFDPKDOFOJD_OFFSET))(this, EBCCPPJHLND, HFKIDEMMMBN);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMKJBEOKIE_CHLEALKAOJO_OFFSET))(this);
	}
};
