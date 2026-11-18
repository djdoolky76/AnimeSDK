#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJFKFJGDDLP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class DPNPKOBALNF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DBEEJIDJCOE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19C00640)
#define DBEEJIDJCOE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19C00400)
#define DBEEJIDJCOE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19C00580)
#define DBEEJIDJCOE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19C00720)
#define DBEEJIDJCOE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19C00410)
#define DBEEJIDJCOE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19C008A0)
#define DBEEJIDJCOE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19C00050)
#define DBEEJIDJCOE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19C00030)
#define DBEEJIDJCOE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19C00310)
#define DBEEJIDJCOE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C00850)

inline static constexpr unsigned int DBEEJIDJCOE_TypeDefinitionIndex = 11658;

class DBEEJIDJCOE : public ::System::Object
{
public:
	::Il2CppArray<::DPNPKOBALNF*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::HJFKFJGDDLP DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBEEJIDJCOE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBEEJIDJCOE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBEEJIDJCOE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DBEEJIDJCOE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DBEEJIDJCOE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBEEJIDJCOE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBEEJIDJCOE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBEEJIDJCOE_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBEEJIDJCOE_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DBEEJIDJCOE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
