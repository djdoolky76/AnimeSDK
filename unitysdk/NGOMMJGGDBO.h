#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHMNNLJMGPP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class MDIHGDGJPPP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NGOMMJGGDBO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1AB16FC0)
#define NGOMMJGGDBO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1AB16D80)
#define NGOMMJGGDBO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1AB16F00)
#define NGOMMJGGDBO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AB170A0)
#define NGOMMJGGDBO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1AB16D90)
#define NGOMMJGGDBO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1AB17240)
#define NGOMMJGGDBO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1AB17470)
#define NGOMMJGGDBO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1AB169D0)
#define NGOMMJGGDBO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1AB17220)
#define NGOMMJGGDBO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1AB169B0)
#define NGOMMJGGDBO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1AB16C90)
#define NGOMMJGGDBO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB171D0)

inline static constexpr unsigned int NGOMMJGGDBO_TypeDefinitionIndex = 17465;

class NGOMMJGGDBO : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::Il2CppArray<::MDIHGDGJPPP*>* OJMBOGGMIKO; // 0x28
	::CHMNNLJMGPP DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOMMJGGDBO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOMMJGGDBO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOMMJGGDBO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NGOMMJGGDBO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NGOMMJGGDBO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOMMJGGDBO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOMMJGGDBO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOMMJGGDBO_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOMMJGGDBO_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOMMJGGDBO_CHLEALKAOJO_OFFSET))(this);
	}

	::MDIHGDGJPPP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MDIHGDGJPPP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NGOMMJGGDBO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NGOMMJGGDBO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
