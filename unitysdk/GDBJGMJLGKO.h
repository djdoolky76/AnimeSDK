#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GAPIFCABODG.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class EBGNGNMMODB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GDBJGMJLGKO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B4D04E0)
#define GDBJGMJLGKO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B4D02A0)
#define GDBJGMJLGKO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B4D0420)
#define GDBJGMJLGKO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B4D05C0)
#define GDBJGMJLGKO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B4D02B0)
#define GDBJGMJLGKO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B4D0740)
#define GDBJGMJLGKO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B4D0950)
#define GDBJGMJLGKO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B4CFEF0)
#define GDBJGMJLGKO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B4CFED0)
#define GDBJGMJLGKO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B4D01B0)
#define GDBJGMJLGKO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4D06F0)

inline static constexpr unsigned int GDBJGMJLGKO_TypeDefinitionIndex = 11743;

class GDBJGMJLGKO : public ::System::Object
{
public:
	::GAPIFCABODG DHDJDGFNBOA; // 0x10
	::Il2CppArray<::EBGNGNMMODB*>* OJMBOGGMIKO; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBJGMJLGKO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBJGMJLGKO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBJGMJLGKO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GDBJGMJLGKO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GDBJGMJLGKO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBJGMJLGKO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBJGMJLGKO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBJGMJLGKO_FINALIZE_OFFSET))(this);
	}

	::EBGNGNMMODB* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::EBGNGNMMODB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GDBJGMJLGKO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBJGMJLGKO_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GDBJGMJLGKO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
