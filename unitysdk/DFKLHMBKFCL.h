#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDEFGBKMDAM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CCAPDAAKJFM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DFKLHMBKFCL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A18CCC0)
#define DFKLHMBKFCL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A18CA90)
#define DFKLHMBKFCL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A18CC00)
#define DFKLHMBKFCL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A18CDA0)
#define DFKLHMBKFCL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A18CAA0)
#define DFKLHMBKFCL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A18CF00)
#define DFKLHMBKFCL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A18D0F0)
#define DFKLHMBKFCL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A18C6F0)
#define DFKLHMBKFCL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A18CEE0)
#define DFKLHMBKFCL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A18C6D0)
#define DFKLHMBKFCL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A18C9B0)
#define DFKLHMBKFCL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A18CED0)

inline static constexpr unsigned int DFKLHMBKFCL_TypeDefinitionIndex = 16816;

class DFKLHMBKFCL : public ::System::Object
{
public:
	::EDEFGBKMDAM DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::Il2CppArray<::CCAPDAAKJFM*>* OJMBOGGMIKO; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKLHMBKFCL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKLHMBKFCL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKLHMBKFCL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DFKLHMBKFCL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DFKLHMBKFCL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKLHMBKFCL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKLHMBKFCL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKLHMBKFCL_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKLHMBKFCL_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKLHMBKFCL_NAMKJOJBAOA_OFFSET))(this);
	}

	::CCAPDAAKJFM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CCAPDAAKJFM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DFKLHMBKFCL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DFKLHMBKFCL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
