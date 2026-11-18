#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/OACLOOOEDEF.h"
#include "unitysdk/System/Object.h"

class MAMBLBDIION;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PHPHNEKAMNL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1D0049C0)
#define PHPHNEKAMNL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1D004740)
#define PHPHNEKAMNL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1D004750)
#define PHPHNEKAMNL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D004810)
#define PHPHNEKAMNL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1D004940)
#define PHPHNEKAMNL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1D004DA0)
#define PHPHNEKAMNL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1D004AF0)
#define PHPHNEKAMNL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1D004390)
#define PHPHNEKAMNL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1D004FD0)
#define PHPHNEKAMNL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1D004370)
#define PHPHNEKAMNL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D004650)
#define PHPHNEKAMNL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D004AA0)

inline static constexpr unsigned int PHPHNEKAMNL_TypeDefinitionIndex = 12470;

class PHPHNEKAMNL : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::OACLOOOEDEF DHDJDGFNBOA; // 0x18
	::Il2CppArray<::MAMBLBDIION*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPHNEKAMNL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPHNEKAMNL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPHNEKAMNL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPHNEKAMNL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPHNEKAMNL_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PHPHNEKAMNL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PHPHNEKAMNL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPHNEKAMNL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PHPHNEKAMNL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPHNEKAMNL_CHLEALKAOJO_OFFSET))(this);
	}

	::MAMBLBDIION* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MAMBLBDIION*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PHPHNEKAMNL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPHNEKAMNL_NAMKJOJBAOA_OFFSET))(this);
	}
};
