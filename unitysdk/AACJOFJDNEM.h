#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MMFFBCMECAD.h"
#include "unitysdk/System/Object.h"

class LFJGFGEBOCG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define AACJOFJDNEM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1773F990)
#define AACJOFJDNEM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1773F760)
#define AACJOFJDNEM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1773F8D0)
#define AACJOFJDNEM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1773FA70)
#define AACJOFJDNEM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1773F770)
#define AACJOFJDNEM_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1773FDE0)
#define AACJOFJDNEM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1773FC10)
#define AACJOFJDNEM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1773F3C0)
#define AACJOFJDNEM_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1773FBF0)
#define AACJOFJDNEM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1773F3A0)
#define AACJOFJDNEM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1773F680)
#define AACJOFJDNEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1773FBA0)

inline static constexpr unsigned int AACJOFJDNEM_TypeDefinitionIndex = 9266;

class AACJOFJDNEM : public ::System::Object
{
public:
	::MMFFBCMECAD DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::Il2CppArray<::LFJGFGEBOCG*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AACJOFJDNEM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AACJOFJDNEM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AACJOFJDNEM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AACJOFJDNEM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + AACJOFJDNEM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AACJOFJDNEM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AACJOFJDNEM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AACJOFJDNEM_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AACJOFJDNEM_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + AACJOFJDNEM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AACJOFJDNEM_CHLEALKAOJO_OFFSET))(this);
	}

	::LFJGFGEBOCG* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::LFJGFGEBOCG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AACJOFJDNEM_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
