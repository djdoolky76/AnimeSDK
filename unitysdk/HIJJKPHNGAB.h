#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MJBMGOBIONA.h"
#include "unitysdk/System/Object.h"

class CGECNIMBFFN;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HIJJKPHNGAB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BADB060)
#define HIJJKPHNGAB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BADAE20)
#define HIJJKPHNGAB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BADAFA0)
#define HIJJKPHNGAB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BADB140)
#define HIJJKPHNGAB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BADAE30)
#define HIJJKPHNGAB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BADB4C0)
#define HIJJKPHNGAB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BADB340)
#define HIJJKPHNGAB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BADAAD0)
#define HIJJKPHNGAB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BADB740)
#define HIJJKPHNGAB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BADAAB0)
#define HIJJKPHNGAB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BADAD30)
#define HIJJKPHNGAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1BADB270)

inline static constexpr unsigned int HIJJKPHNGAB_TypeDefinitionIndex = 13420;

class HIJJKPHNGAB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::MJBMGOBIONA DHDJDGFNBOA; // 0x20
	::Il2CppArray<::CGECNIMBFFN*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::HashSet_1<::System::String*>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJJKPHNGAB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJJKPHNGAB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJJKPHNGAB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HIJJKPHNGAB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HIJJKPHNGAB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJJKPHNGAB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJJKPHNGAB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJJKPHNGAB_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HIJJKPHNGAB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::CGECNIMBFFN* IFDPKDOFOJD(::System::String* MGMDLMBEDJF)
	{
		return ((::CGECNIMBFFN*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HIJJKPHNGAB_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJJKPHNGAB_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJJKPHNGAB_CHLEALKAOJO_OFFSET))(this);
	}
};
