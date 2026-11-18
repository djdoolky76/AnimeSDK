#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFMHMGNCEFI.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IGFKIDPMDDF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CANCLLOFBOO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17A83170)
#define CANCLLOFBOO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17A82F30)
#define CANCLLOFBOO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17A830B0)
#define CANCLLOFBOO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17A83250)
#define CANCLLOFBOO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17A82F40)
#define CANCLLOFBOO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17A833D0)
#define CANCLLOFBOO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17A82B80)
#define CANCLLOFBOO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17A82B60)
#define CANCLLOFBOO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17A82E40)
#define CANCLLOFBOO__CTOR_OFFSET UNITYSDK_OFFSET(0x17A83380)

inline static constexpr unsigned int CANCLLOFBOO_TypeDefinitionIndex = 17232;

class CANCLLOFBOO : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::Il2CppArray<::IGFKIDPMDDF*>* OJMBOGGMIKO; // 0x20
	::BFMHMGNCEFI DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANCLLOFBOO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CANCLLOFBOO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANCLLOFBOO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CANCLLOFBOO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CANCLLOFBOO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANCLLOFBOO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANCLLOFBOO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANCLLOFBOO_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CANCLLOFBOO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANCLLOFBOO_CHLEALKAOJO_OFFSET))(this);
	}
};
