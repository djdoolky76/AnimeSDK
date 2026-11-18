#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNBOFOIKBIK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class DIHOCEGMDNJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EPICJMLEBGO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B859190)
#define EPICJMLEBGO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B858F10)
#define EPICJMLEBGO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B858F20)
#define EPICJMLEBGO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B858FE0)
#define EPICJMLEBGO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B859110)
#define EPICJMLEBGO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B859590)
#define EPICJMLEBGO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B8592C0)
#define EPICJMLEBGO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B858B60)
#define EPICJMLEBGO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B859570)
#define EPICJMLEBGO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B858B40)
#define EPICJMLEBGO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B858E20)
#define EPICJMLEBGO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B859270)

inline static constexpr unsigned int EPICJMLEBGO_TypeDefinitionIndex = 14583;

class EPICJMLEBGO : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::JNBOFOIKBIK DHDJDGFNBOA; // 0x28
	::Il2CppArray<::DIHOCEGMDNJ*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPICJMLEBGO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPICJMLEBGO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPICJMLEBGO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPICJMLEBGO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPICJMLEBGO_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EPICJMLEBGO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + EPICJMLEBGO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPICJMLEBGO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPICJMLEBGO_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EPICJMLEBGO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPICJMLEBGO_NAMKJOJBAOA_OFFSET))(this);
	}

	::DIHOCEGMDNJ* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DIHOCEGMDNJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPICJMLEBGO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
