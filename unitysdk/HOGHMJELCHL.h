#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CODJPBEMOAC.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class BFIPCJHDGFF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HOGHMJELCHL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1953A150)
#define HOGHMJELCHL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19539F20)
#define HOGHMJELCHL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1953A090)
#define HOGHMJELCHL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1953A230)
#define HOGHMJELCHL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19539F30)
#define HOGHMJELCHL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1953A370)
#define HOGHMJELCHL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1953A590)
#define HOGHMJELCHL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19539B80)
#define HOGHMJELCHL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1953A570)
#define HOGHMJELCHL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19539B60)
#define HOGHMJELCHL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19539E40)
#define HOGHMJELCHL__CTOR_OFFSET UNITYSDK_OFFSET(0x1953A360)

inline static constexpr unsigned int HOGHMJELCHL_TypeDefinitionIndex = 9561;

class HOGHMJELCHL : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::CODJPBEMOAC DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::Il2CppArray<::BFIPCJHDGFF*>* OJMBOGGMIKO; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGHMJELCHL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGHMJELCHL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGHMJELCHL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HOGHMJELCHL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HOGHMJELCHL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGHMJELCHL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGHMJELCHL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGHMJELCHL_FINALIZE_OFFSET))(this);
	}

	::BFIPCJHDGFF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::BFIPCJHDGFF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOGHMJELCHL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGHMJELCHL_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGHMJELCHL_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HOGHMJELCHL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
