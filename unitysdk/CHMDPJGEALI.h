#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/KNMMFMPPCGB.h"
#include "unitysdk/System/Object.h"

class PNNIKBOPNLG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CHMDPJGEALI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B99A920)
#define CHMDPJGEALI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B99A6E0)
#define CHMDPJGEALI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B99A860)
#define CHMDPJGEALI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B99AA00)
#define CHMDPJGEALI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B99A6F0)
#define CHMDPJGEALI_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B99AD70)
#define CHMDPJGEALI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B99ABA0)
#define CHMDPJGEALI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B99A330)
#define CHMDPJGEALI_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B99AB80)
#define CHMDPJGEALI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B99A310)
#define CHMDPJGEALI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B99A5F0)
#define CHMDPJGEALI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B99AB30)

inline static constexpr unsigned int CHMDPJGEALI_TypeDefinitionIndex = 12750;

class CHMDPJGEALI : public ::System::Object
{
public:
	::Il2CppArray<::PNNIKBOPNLG*>* OJMBOGGMIKO; // 0x10
	::KNMMFMPPCGB DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMDPJGEALI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMDPJGEALI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMDPJGEALI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CHMDPJGEALI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CHMDPJGEALI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMDPJGEALI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMDPJGEALI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMDPJGEALI_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMDPJGEALI_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMDPJGEALI_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CHMDPJGEALI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::PNNIKBOPNLG* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::PNNIKBOPNLG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CHMDPJGEALI_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
