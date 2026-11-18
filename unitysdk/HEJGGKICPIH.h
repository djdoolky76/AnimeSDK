#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JKDIGFDBJEB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class PJDPEHJKBKP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HEJGGKICPIH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x16658A60)
#define HEJGGKICPIH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x166587E0)
#define HEJGGKICPIH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x166587F0)
#define HEJGGKICPIH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x166588B0)
#define HEJGGKICPIH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x166589E0)
#define HEJGGKICPIH_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x16658E60)
#define HEJGGKICPIH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x16658BB0)
#define HEJGGKICPIH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x16658430)
#define HEJGGKICPIH_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x16658B90)
#define HEJGGKICPIH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x16658410)
#define HEJGGKICPIH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x166586F0)
#define HEJGGKICPIH__CTOR_OFFSET UNITYSDK_OFFSET(0x16658B40)

inline static constexpr unsigned int HEJGGKICPIH_TypeDefinitionIndex = 14959;

class HEJGGKICPIH : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::Il2CppArray<::PJDPEHJKBKP*>* OJMBOGGMIKO; // 0x28
	::JKDIGFDBJEB DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEJGGKICPIH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEJGGKICPIH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEJGGKICPIH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEJGGKICPIH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEJGGKICPIH_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HEJGGKICPIH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HEJGGKICPIH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEJGGKICPIH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEJGGKICPIH_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HEJGGKICPIH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEJGGKICPIH_CHLEALKAOJO_OFFSET))(this);
	}

	::PJDPEHJKBKP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::PJDPEHJKBKP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HEJGGKICPIH_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
