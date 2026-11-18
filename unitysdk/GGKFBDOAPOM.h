#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHEKFPBLMAO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class DFAMLDBNEPA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GGKFBDOAPOM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x16647BC0)
#define GGKFBDOAPOM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x16647980)
#define GGKFBDOAPOM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x16647B00)
#define GGKFBDOAPOM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x16647CA0)
#define GGKFBDOAPOM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x16647990)
#define GGKFBDOAPOM_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x16648010)
#define GGKFBDOAPOM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x16647E20)
#define GGKFBDOAPOM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x166475D0)
#define GGKFBDOAPOM_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x16647FF0)
#define GGKFBDOAPOM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x166475B0)
#define GGKFBDOAPOM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x16647890)
#define GGKFBDOAPOM__CTOR_OFFSET UNITYSDK_OFFSET(0x16647DD0)

inline static constexpr unsigned int GGKFBDOAPOM_TypeDefinitionIndex = 11715;

class GGKFBDOAPOM : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::GHEKFPBLMAO DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::DFAMLDBNEPA*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKFBDOAPOM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKFBDOAPOM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKFBDOAPOM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GGKFBDOAPOM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GGKFBDOAPOM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKFBDOAPOM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKFBDOAPOM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKFBDOAPOM_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GGKFBDOAPOM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKFBDOAPOM_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKFBDOAPOM_CHLEALKAOJO_OFFSET))(this);
	}

	::DFAMLDBNEPA* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DFAMLDBNEPA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GGKFBDOAPOM_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
