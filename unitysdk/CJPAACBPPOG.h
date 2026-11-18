#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMLMDEILOHJ.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class OGDFMGIMEJA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CJPAACBPPOG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17A892C0)
#define CJPAACBPPOG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17A89090)
#define CJPAACBPPOG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17A89200)
#define CJPAACBPPOG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17A893A0)
#define CJPAACBPPOG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17A890A0)
#define CJPAACBPPOG_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x17A896D0)
#define CJPAACBPPOG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17A89500)
#define CJPAACBPPOG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17A88CF0)
#define CJPAACBPPOG_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x17A894E0)
#define CJPAACBPPOG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17A88CD0)
#define CJPAACBPPOG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17A88FB0)
#define CJPAACBPPOG__CTOR_OFFSET UNITYSDK_OFFSET(0x17A894D0)

inline static constexpr unsigned int CJPAACBPPOG_TypeDefinitionIndex = 12785;

class CJPAACBPPOG : public ::System::Object
{
public:
	::Il2CppArray<::OGDFMGIMEJA*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::CMLMDEILOHJ DHDJDGFNBOA; // 0x28
	::System::Boolean DLGKLGKOMHK; // 0x40
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPAACBPPOG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPAACBPPOG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPAACBPPOG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CJPAACBPPOG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CJPAACBPPOG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPAACBPPOG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPAACBPPOG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPAACBPPOG_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPAACBPPOG_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPAACBPPOG_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CJPAACBPPOG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::OGDFMGIMEJA* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::OGDFMGIMEJA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CJPAACBPPOG_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
