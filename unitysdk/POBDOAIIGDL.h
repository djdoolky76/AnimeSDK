#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMOJCPMHLMG.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class LIIPKJFNCLB;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define POBDOAIIGDL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1F292F80)
#define POBDOAIIGDL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1F292D50)
#define POBDOAIIGDL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1F292EC0)
#define POBDOAIIGDL_ECEHIDKBKAH_OFFSET UNITYSDK_OFFSET(0x1F2931C0)
#define POBDOAIIGDL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1F293060)
#define POBDOAIIGDL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1F292D60)
#define POBDOAIIGDL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1F293240)
#define POBDOAIIGDL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1F293450)
#define POBDOAIIGDL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1F292A10)
#define POBDOAIIGDL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1F2931A0)
#define POBDOAIIGDL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1F2929F0)
#define POBDOAIIGDL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1F292C70)
#define POBDOAIIGDL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F293190)

inline static constexpr unsigned int POBDOAIIGDL_TypeDefinitionIndex = 11953;

class POBDOAIIGDL : public ::System::Object
{
public:
	::JMOJCPMHLMG DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* FLBOKGKPECD; // 0x28
	::Il2CppArray<::LIIPKJFNCLB*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POBDOAIIGDL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POBDOAIIGDL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POBDOAIIGDL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + POBDOAIIGDL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + POBDOAIIGDL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POBDOAIIGDL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POBDOAIIGDL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POBDOAIIGDL_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POBDOAIIGDL_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::String* ECEHIDKBKAH(::System::String* PFLKHEPPIPJ, ::System::Int32 BGHNJOIIPDI)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + POBDOAIIGDL_ECEHIDKBKAH_OFFSET))(this, PFLKHEPPIPJ, BGHNJOIIPDI);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POBDOAIIGDL_CHLEALKAOJO_OFFSET))(this);
	}

	::LIIPKJFNCLB* IFDPKDOFOJD(::System::String* MGMDLMBEDJF)
	{
		return ((::LIIPKJFNCLB*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + POBDOAIIGDL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + POBDOAIIGDL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
