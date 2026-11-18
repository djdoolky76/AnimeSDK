#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKIMFKMBPEP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class MMNCFODCOIG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define BBMLLJMIGMD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19BE1420)
#define BBMLLJMIGMD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19BE11E0)
#define BBMLLJMIGMD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19BE1360)
#define BBMLLJMIGMD_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x19BE1A10)
#define BBMLLJMIGMD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19BE1500)
#define BBMLLJMIGMD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19BE11F0)
#define BBMLLJMIGMD_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x19BE1640)
#define BBMLLJMIGMD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19BE1840)
#define BBMLLJMIGMD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19BE0E30)
#define BBMLLJMIGMD_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19BE1820)
#define BBMLLJMIGMD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19BE0E10)
#define BBMLLJMIGMD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19BE10F0)
#define BBMLLJMIGMD__CTOR_OFFSET UNITYSDK_OFFSET(0x19BE1630)

inline static constexpr unsigned int BBMLLJMIGMD_TypeDefinitionIndex = 15484;

class BBMLLJMIGMD : public ::System::Object
{
public:
	::Il2CppArray<::MMNCFODCOIG*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::HKIMFKMBPEP DHDJDGFNBOA; // 0x28
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMLLJMIGMD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMLLJMIGMD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMLLJMIGMD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BBMLLJMIGMD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BBMLLJMIGMD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMLLJMIGMD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMLLJMIGMD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMLLJMIGMD_FINALIZE_OFFSET))(this);
	}

	::MMNCFODCOIG* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::MMNCFODCOIG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BBMLLJMIGMD_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMLLJMIGMD_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BBMLLJMIGMD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Collections::Generic::IReadOnlyList_1<::MMNCFODCOIG*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::MMNCFODCOIG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMLLJMIGMD_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMLLJMIGMD_NAMKJOJBAOA_OFFSET))(this);
	}
};
