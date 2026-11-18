#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HAKKGKHIEPB.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CPDDHGKFEDO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GMJEDKMAECB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17BF3230)
#define GMJEDKMAECB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17BF2FF0)
#define GMJEDKMAECB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17BF3170)
#define GMJEDKMAECB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17BF3310)
#define GMJEDKMAECB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17BF3000)
#define GMJEDKMAECB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17BF3490)
#define GMJEDKMAECB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17BF2C40)
#define GMJEDKMAECB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17BF2C20)
#define GMJEDKMAECB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17BF2F00)
#define GMJEDKMAECB__CTOR_OFFSET UNITYSDK_OFFSET(0x17BF3440)

inline static constexpr unsigned int GMJEDKMAECB_TypeDefinitionIndex = 14925;

class GMJEDKMAECB : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::Il2CppArray<::CPDDHGKFEDO*>* OJMBOGGMIKO; // 0x18
	::HAKKGKHIEPB DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMJEDKMAECB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GMJEDKMAECB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMJEDKMAECB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GMJEDKMAECB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GMJEDKMAECB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMJEDKMAECB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMJEDKMAECB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMJEDKMAECB_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GMJEDKMAECB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMJEDKMAECB_CHLEALKAOJO_OFFSET))(this);
	}
};
