#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFHPFBIIKAK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class HGNALINJKCC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JIDNKECAOMG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B7DACD0)
#define JIDNKECAOMG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B7DAA50)
#define JIDNKECAOMG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B7DAA60)
#define JIDNKECAOMG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B7DAB20)
#define JIDNKECAOMG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B7DAC50)
#define JIDNKECAOMG_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B7DAE20)
#define JIDNKECAOMG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B7DB050)
#define JIDNKECAOMG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B7DA6B0)
#define JIDNKECAOMG_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B7DAE00)
#define JIDNKECAOMG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B7DA690)
#define JIDNKECAOMG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B7DA970)
#define JIDNKECAOMG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7DADB0)

inline static constexpr unsigned int JIDNKECAOMG_TypeDefinitionIndex = 13940;

class JIDNKECAOMG : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::HGNALINJKCC*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::System::Action* PLDOELOOFLL; // 0x28
	::DFHPFBIIKAK DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDNKECAOMG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDNKECAOMG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDNKECAOMG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDNKECAOMG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDNKECAOMG_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JIDNKECAOMG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JIDNKECAOMG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDNKECAOMG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDNKECAOMG_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDNKECAOMG_CHLEALKAOJO_OFFSET))(this);
	}

	::HGNALINJKCC* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HGNALINJKCC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JIDNKECAOMG_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JIDNKECAOMG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
