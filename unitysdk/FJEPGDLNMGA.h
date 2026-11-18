#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMFEOMMEJHC.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class JEKEBENLAHB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FJEPGDLNMGA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A5A6190)
#define FJEPGDLNMGA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5A5F50)
#define FJEPGDLNMGA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A5A60D0)
#define FJEPGDLNMGA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5A6270)
#define FJEPGDLNMGA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A5A5F60)
#define FJEPGDLNMGA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A5A63F0)
#define FJEPGDLNMGA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A5A5BA0)
#define FJEPGDLNMGA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A5A5B80)
#define FJEPGDLNMGA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A5A5E60)
#define FJEPGDLNMGA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5A63A0)

inline static constexpr unsigned int FJEPGDLNMGA_TypeDefinitionIndex = 13039;

class FJEPGDLNMGA : public ::System::Object
{
public:
	::EMFEOMMEJHC DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::Il2CppArray<::JEKEBENLAHB*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEPGDLNMGA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEPGDLNMGA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEPGDLNMGA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FJEPGDLNMGA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FJEPGDLNMGA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEPGDLNMGA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEPGDLNMGA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEPGDLNMGA_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FJEPGDLNMGA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEPGDLNMGA_CHLEALKAOJO_OFFSET))(this);
	}
};
