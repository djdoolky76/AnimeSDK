#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PIMLKKMCNPG.h"
#include "unitysdk/System/Object.h"

class FFBHJDBGJOM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OMBJGMFPAAN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19DD0AC0)
#define OMBJGMFPAAN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19DD0890)
#define OMBJGMFPAAN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19DD0A00)
#define OMBJGMFPAAN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19DD0BA0)
#define OMBJGMFPAAN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19DD08A0)
#define OMBJGMFPAAN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19DD0D20)
#define OMBJGMFPAAN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19DD04F0)
#define OMBJGMFPAAN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19DD04D0)
#define OMBJGMFPAAN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19DD07B0)
#define OMBJGMFPAAN__CTOR_OFFSET UNITYSDK_OFFSET(0x19DD0CD0)

inline static constexpr unsigned int OMBJGMFPAAN_TypeDefinitionIndex = 16028;

class OMBJGMFPAAN : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::FFBHJDBGJOM*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::PIMLKKMCNPG DHDJDGFNBOA; // 0x28
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBJGMFPAAN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBJGMFPAAN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBJGMFPAAN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OMBJGMFPAAN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OMBJGMFPAAN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBJGMFPAAN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBJGMFPAAN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBJGMFPAAN_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBJGMFPAAN_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OMBJGMFPAAN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
