#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APPFDJPMNGJ.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NLOJDGKOEHG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CPPDFIDGEOP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A58AB80)
#define CPPDFIDGEOP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A58A940)
#define CPPDFIDGEOP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A58AAC0)
#define CPPDFIDGEOP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A58AC60)
#define CPPDFIDGEOP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A58A950)
#define CPPDFIDGEOP_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A58AE00)
#define CPPDFIDGEOP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A58B030)
#define CPPDFIDGEOP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A58A590)
#define CPPDFIDGEOP_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A58ADE0)
#define CPPDFIDGEOP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A58A570)
#define CPPDFIDGEOP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A58A850)
#define CPPDFIDGEOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A58AD90)

inline static constexpr unsigned int CPPDFIDGEOP_TypeDefinitionIndex = 10103;

class CPPDFIDGEOP : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::Il2CppArray<::NLOJDGKOEHG*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::APPFDJPMNGJ DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPDFIDGEOP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPDFIDGEOP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPDFIDGEOP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CPPDFIDGEOP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CPPDFIDGEOP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPDFIDGEOP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPDFIDGEOP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPDFIDGEOP_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPDFIDGEOP_NAMKJOJBAOA_OFFSET))(this);
	}

	::NLOJDGKOEHG* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NLOJDGKOEHG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CPPDFIDGEOP_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CPPDFIDGEOP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPDFIDGEOP_CHLEALKAOJO_OFFSET))(this);
	}
};
