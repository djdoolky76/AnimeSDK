#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGKCOJECILF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class BANFDKHCJOH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JJFEFHGIPOP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18BCC880)
#define JJFEFHGIPOP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18BCC650)
#define JJFEFHGIPOP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18BCC7C0)
#define JJFEFHGIPOP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18BCC960)
#define JJFEFHGIPOP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18BCC660)
#define JJFEFHGIPOP_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x18BCCAE0)
#define JJFEFHGIPOP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18BCCD30)
#define JJFEFHGIPOP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18BCC2B0)
#define JJFEFHGIPOP_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x18BCCD10)
#define JJFEFHGIPOP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18BCC290)
#define JJFEFHGIPOP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18BCC570)
#define JJFEFHGIPOP__CTOR_OFFSET UNITYSDK_OFFSET(0x18BCCA90)

inline static constexpr unsigned int JJFEFHGIPOP_TypeDefinitionIndex = 16089;

class JJFEFHGIPOP : public ::System::Object
{
public:
	::GGKCOJECILF DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::Il2CppArray<::BANFDKHCJOH*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFEFHGIPOP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFEFHGIPOP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFEFHGIPOP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JJFEFHGIPOP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JJFEFHGIPOP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFEFHGIPOP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFEFHGIPOP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFEFHGIPOP_FINALIZE_OFFSET))(this);
	}

	::BANFDKHCJOH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::BANFDKHCJOH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JJFEFHGIPOP_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JJFEFHGIPOP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFEFHGIPOP_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFEFHGIPOP_CHLEALKAOJO_OFFSET))(this);
	}
};
