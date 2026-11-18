#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBAEFOAMOPC.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class FGAPEJADPPB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HIFJOCCKNFP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B611D50)
#define HIFJOCCKNFP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B611B10)
#define HIFJOCCKNFP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B611C90)
#define HIFJOCCKNFP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B611E30)
#define HIFJOCCKNFP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B611B20)
#define HIFJOCCKNFP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B611FB0)
#define HIFJOCCKNFP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B611760)
#define HIFJOCCKNFP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B611740)
#define HIFJOCCKNFP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B611A20)
#define HIFJOCCKNFP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B611F60)

inline static constexpr unsigned int HIFJOCCKNFP_TypeDefinitionIndex = 12999;

class HIFJOCCKNFP : public ::System::Object
{
public:
	::GBAEFOAMOPC DHDJDGFNBOA; // 0x10
	::Il2CppArray<::FGAPEJADPPB*>* OJMBOGGMIKO; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFJOCCKNFP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFJOCCKNFP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFJOCCKNFP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HIFJOCCKNFP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HIFJOCCKNFP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFJOCCKNFP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFJOCCKNFP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFJOCCKNFP_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HIFJOCCKNFP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFJOCCKNFP_CHLEALKAOJO_OFFSET))(this);
	}
};
