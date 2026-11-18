#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GFOHMLOCJCN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class PNIMIOICION;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NJNKKOFLMMC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19120610)
#define NJNKKOFLMMC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x191203E0)
#define NJNKKOFLMMC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19120550)
#define NJNKKOFLMMC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x191206F0)
#define NJNKKOFLMMC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x191203F0)
#define NJNKKOFLMMC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x19120A60)
#define NJNKKOFLMMC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19120890)
#define NJNKKOFLMMC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19120040)
#define NJNKKOFLMMC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19120870)
#define NJNKKOFLMMC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19120020)
#define NJNKKOFLMMC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19120300)
#define NJNKKOFLMMC__CTOR_OFFSET UNITYSDK_OFFSET(0x19120820)

inline static constexpr unsigned int NJNKKOFLMMC_TypeDefinitionIndex = 17096;

class NJNKKOFLMMC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::PNIMIOICION*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::System::Action* PLDOELOOFLL; // 0x28
	::GFOHMLOCJCN DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNKKOFLMMC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNKKOFLMMC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNKKOFLMMC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NJNKKOFLMMC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + NJNKKOFLMMC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNKKOFLMMC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNKKOFLMMC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNKKOFLMMC_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNKKOFLMMC_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + NJNKKOFLMMC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::PNIMIOICION* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::PNIMIOICION*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NJNKKOFLMMC_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJNKKOFLMMC_CHLEALKAOJO_OFFSET))(this);
	}
};
