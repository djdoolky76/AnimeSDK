#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDILMNLHIKM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class DMDCBAINFDK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ABLCJIAPEIM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C5017B0)
#define ABLCJIAPEIM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C501570)
#define ABLCJIAPEIM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C5016F0)
#define ABLCJIAPEIM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C501890)
#define ABLCJIAPEIM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C501580)
#define ABLCJIAPEIM_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1C501A10)
#define ABLCJIAPEIM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C501CA0)
#define ABLCJIAPEIM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C5011C0)
#define ABLCJIAPEIM_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1C501C80)
#define ABLCJIAPEIM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C5011A0)
#define ABLCJIAPEIM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C501480)
#define ABLCJIAPEIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5019C0)

inline static constexpr unsigned int ABLCJIAPEIM_TypeDefinitionIndex = 14785;

class ABLCJIAPEIM : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::DMDCBAINFDK*>* OJMBOGGMIKO; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::KDILMNLHIKM DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABLCJIAPEIM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABLCJIAPEIM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABLCJIAPEIM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ABLCJIAPEIM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ABLCJIAPEIM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABLCJIAPEIM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABLCJIAPEIM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABLCJIAPEIM_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABLCJIAPEIM_CHLEALKAOJO_OFFSET))(this);
	}

	::DMDCBAINFDK* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DMDCBAINFDK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABLCJIAPEIM_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABLCJIAPEIM_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ABLCJIAPEIM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
