#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/KKKLIANFBAP.h"
#include "unitysdk/System/Object.h"

class CLIMHFIAMEK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BEJNFJGLHAL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1577C0A0)
#define BEJNFJGLHAL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1577BE20)
#define BEJNFJGLHAL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1577BE30)
#define BEJNFJGLHAL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1577BEF0)
#define BEJNFJGLHAL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1577C020)
#define BEJNFJGLHAL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1577C4A0)
#define BEJNFJGLHAL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1577C1F0)
#define BEJNFJGLHAL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1577BA80)
#define BEJNFJGLHAL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1577C1D0)
#define BEJNFJGLHAL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1577BA60)
#define BEJNFJGLHAL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1577BD40)
#define BEJNFJGLHAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1577C180)

inline static constexpr unsigned int BEJNFJGLHAL_TypeDefinitionIndex = 9159;

class BEJNFJGLHAL : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::KKKLIANFBAP DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::Il2CppArray<::CLIMHFIAMEK*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEJNFJGLHAL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEJNFJGLHAL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEJNFJGLHAL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEJNFJGLHAL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEJNFJGLHAL_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BEJNFJGLHAL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BEJNFJGLHAL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEJNFJGLHAL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEJNFJGLHAL_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEJNFJGLHAL_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BEJNFJGLHAL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::CLIMHFIAMEK* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CLIMHFIAMEK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEJNFJGLHAL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
