#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KCGJFLDILFN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CJODANGIKBA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JJIEELDNAIB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1748E3C0)
#define JJIEELDNAIB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1748E190)
#define JJIEELDNAIB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1748E300)
#define JJIEELDNAIB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1748E4A0)
#define JJIEELDNAIB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1748E1A0)
#define JJIEELDNAIB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1748E640)
#define JJIEELDNAIB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1748E870)
#define JJIEELDNAIB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1748DDF0)
#define JJIEELDNAIB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1748E620)
#define JJIEELDNAIB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1748DDD0)
#define JJIEELDNAIB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1748E0B0)
#define JJIEELDNAIB__CTOR_OFFSET UNITYSDK_OFFSET(0x1748E5D0)

inline static constexpr unsigned int JJIEELDNAIB_TypeDefinitionIndex = 12093;

class JJIEELDNAIB : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::CJODANGIKBA*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::System::Action* PLDOELOOFLL; // 0x28
	::KCGJFLDILFN DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIEELDNAIB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIEELDNAIB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIEELDNAIB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JJIEELDNAIB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JJIEELDNAIB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIEELDNAIB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIEELDNAIB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIEELDNAIB_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIEELDNAIB_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIEELDNAIB_CHLEALKAOJO_OFFSET))(this);
	}

	::CJODANGIKBA* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CJODANGIKBA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JJIEELDNAIB_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JJIEELDNAIB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
