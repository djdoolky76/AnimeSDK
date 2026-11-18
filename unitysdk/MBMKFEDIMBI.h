#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JCPMOBCJCDK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class PKBAJACPKPB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MBMKFEDIMBI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B657FB0)
#define MBMKFEDIMBI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B657D80)
#define MBMKFEDIMBI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B657EF0)
#define MBMKFEDIMBI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B658090)
#define MBMKFEDIMBI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B657D90)
#define MBMKFEDIMBI_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B658400)
#define MBMKFEDIMBI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B658210)
#define MBMKFEDIMBI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B6579E0)
#define MBMKFEDIMBI_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B6583E0)
#define MBMKFEDIMBI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B6579C0)
#define MBMKFEDIMBI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B657CA0)
#define MBMKFEDIMBI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6581C0)

inline static constexpr unsigned int MBMKFEDIMBI_TypeDefinitionIndex = 12175;

class MBMKFEDIMBI : public ::System::Object
{
public:
	::Il2CppArray<::PKBAJACPKPB*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::System::Action* PLDOELOOFLL; // 0x28
	::JCPMOBCJCDK DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMKFEDIMBI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMKFEDIMBI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMKFEDIMBI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MBMKFEDIMBI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MBMKFEDIMBI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMKFEDIMBI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMKFEDIMBI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMKFEDIMBI_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMKFEDIMBI_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MBMKFEDIMBI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMKFEDIMBI_NAMKJOJBAOA_OFFSET))(this);
	}

	::PKBAJACPKPB* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::PKBAJACPKPB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MBMKFEDIMBI_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
