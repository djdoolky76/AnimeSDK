#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MKBGFIINBII.h"
#include "unitysdk/System/Object.h"

class HGPFBJHJCBJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NBEOBMAKILA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C187E70)
#define NBEOBMAKILA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C187C30)
#define NBEOBMAKILA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C187DB0)
#define NBEOBMAKILA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C187F50)
#define NBEOBMAKILA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C187C40)
#define NBEOBMAKILA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C1880D0)
#define NBEOBMAKILA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C187880)
#define NBEOBMAKILA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C187860)
#define NBEOBMAKILA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C187B40)
#define NBEOBMAKILA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C188080)

inline static constexpr unsigned int NBEOBMAKILA_TypeDefinitionIndex = 13104;

class NBEOBMAKILA : public ::System::Object
{
public:
	::Il2CppArray<::HGPFBJHJCBJ*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::MKBGFIINBII DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBEOBMAKILA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBEOBMAKILA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBEOBMAKILA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NBEOBMAKILA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NBEOBMAKILA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBEOBMAKILA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBEOBMAKILA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBEOBMAKILA_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NBEOBMAKILA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBEOBMAKILA_CHLEALKAOJO_OFFSET))(this);
	}
};
