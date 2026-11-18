#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JCNJIAGDGEH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class OKEJIMIIIMM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NIEPJEEBLKL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1D0C74C0)
#define NIEPJEEBLKL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1D0C7280)
#define NIEPJEEBLKL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1D0C7400)
#define NIEPJEEBLKL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D0C75A0)
#define NIEPJEEBLKL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1D0C7290)
#define NIEPJEEBLKL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1D0C78F0)
#define NIEPJEEBLKL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1D0C7720)
#define NIEPJEEBLKL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1D0C6ED0)
#define NIEPJEEBLKL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1D0C7B20)
#define NIEPJEEBLKL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1D0C6EB0)
#define NIEPJEEBLKL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D0C7190)
#define NIEPJEEBLKL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0C76D0)

inline static constexpr unsigned int NIEPJEEBLKL_TypeDefinitionIndex = 12033;

class NIEPJEEBLKL : public ::System::Object
{
public:
	::Il2CppArray<::OKEJIMIIIMM*>* OJMBOGGMIKO; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::JCNJIAGDGEH DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEPJEEBLKL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEPJEEBLKL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEPJEEBLKL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NIEPJEEBLKL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NIEPJEEBLKL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEPJEEBLKL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEPJEEBLKL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEPJEEBLKL_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NIEPJEEBLKL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEPJEEBLKL_CHLEALKAOJO_OFFSET))(this);
	}

	::OKEJIMIIIMM* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::OKEJIMIIIMM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NIEPJEEBLKL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEPJEEBLKL_NAMKJOJBAOA_OFFSET))(this);
	}
};
