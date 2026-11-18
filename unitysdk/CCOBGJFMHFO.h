#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JKMBCKEJFPE.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class EMAMDPOKGDG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CCOBGJFMHFO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C5275C0)
#define CCOBGJFMHFO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C527380)
#define CCOBGJFMHFO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C527500)
#define CCOBGJFMHFO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C5276A0)
#define CCOBGJFMHFO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C527390)
#define CCOBGJFMHFO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1C527A10)
#define CCOBGJFMHFO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C527820)
#define CCOBGJFMHFO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C526FD0)
#define CCOBGJFMHFO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1C5279F0)
#define CCOBGJFMHFO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C526FB0)
#define CCOBGJFMHFO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C527290)
#define CCOBGJFMHFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5277D0)

inline static constexpr unsigned int CCOBGJFMHFO_TypeDefinitionIndex = 17121;

class CCOBGJFMHFO : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::JKMBCKEJFPE DHDJDGFNBOA; // 0x20
	::System::Action* PLDOELOOFLL; // 0x38
	::Il2CppArray<::EMAMDPOKGDG*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOBGJFMHFO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOBGJFMHFO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOBGJFMHFO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CCOBGJFMHFO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CCOBGJFMHFO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOBGJFMHFO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOBGJFMHFO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOBGJFMHFO_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOBGJFMHFO_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CCOBGJFMHFO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOBGJFMHFO_NAMKJOJBAOA_OFFSET))(this);
	}

	::EMAMDPOKGDG* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::EMAMDPOKGDG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CCOBGJFMHFO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
