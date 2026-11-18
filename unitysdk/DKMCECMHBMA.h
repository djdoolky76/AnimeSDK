#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFANPBPDKKF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class MDIGEHANODA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DKMCECMHBMA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17F202C0)
#define DKMCECMHBMA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17F20090)
#define DKMCECMHBMA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17F20200)
#define DKMCECMHBMA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17F203A0)
#define DKMCECMHBMA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17F200A0)
#define DKMCECMHBMA_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17F20520)
#define DKMCECMHBMA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17F20770)
#define DKMCECMHBMA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17F1FCF0)
#define DKMCECMHBMA_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17F20750)
#define DKMCECMHBMA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17F1FCD0)
#define DKMCECMHBMA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17F1FFB0)
#define DKMCECMHBMA__CTOR_OFFSET UNITYSDK_OFFSET(0x17F204D0)

inline static constexpr unsigned int DKMCECMHBMA_TypeDefinitionIndex = 10963;

class DKMCECMHBMA : public ::System::Object
{
public:
	::Il2CppArray<::MDIGEHANODA*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::CFANPBPDKKF DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMCECMHBMA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMCECMHBMA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMCECMHBMA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DKMCECMHBMA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DKMCECMHBMA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMCECMHBMA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMCECMHBMA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMCECMHBMA_FINALIZE_OFFSET))(this);
	}

	::MDIGEHANODA* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MDIGEHANODA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DKMCECMHBMA_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMCECMHBMA_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DKMCECMHBMA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMCECMHBMA_CHLEALKAOJO_OFFSET))(this);
	}
};
