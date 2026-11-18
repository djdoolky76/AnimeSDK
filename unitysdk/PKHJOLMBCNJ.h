#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEEBPHPGLPO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class MGJJKMOHBOF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PKHJOLMBCNJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19DE11F0)
#define PKHJOLMBCNJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19DE0FC0)
#define PKHJOLMBCNJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19DE1130)
#define PKHJOLMBCNJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19DE12D0)
#define PKHJOLMBCNJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19DE0FD0)
#define PKHJOLMBCNJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19DE1450)
#define PKHJOLMBCNJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19DE16A0)
#define PKHJOLMBCNJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19DE0C20)
#define PKHJOLMBCNJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19DE1680)
#define PKHJOLMBCNJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19DE0C00)
#define PKHJOLMBCNJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19DE0EE0)
#define PKHJOLMBCNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19DE1400)

inline static constexpr unsigned int PKHJOLMBCNJ_TypeDefinitionIndex = 17761;

class PKHJOLMBCNJ : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::MGJJKMOHBOF*>* OJMBOGGMIKO; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::DEEBPHPGLPO DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHJOLMBCNJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHJOLMBCNJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHJOLMBCNJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PKHJOLMBCNJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PKHJOLMBCNJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHJOLMBCNJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHJOLMBCNJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHJOLMBCNJ_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHJOLMBCNJ_CHLEALKAOJO_OFFSET))(this);
	}

	::MGJJKMOHBOF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MGJJKMOHBOF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PKHJOLMBCNJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHJOLMBCNJ_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PKHJOLMBCNJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
