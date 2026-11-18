#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MHLDPDNJPCJ.h"
#include "unitysdk/System/Object.h"

class JMEBPDDGOKK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CPGEJLADBPI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x187949E0)
#define CPGEJLADBPI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x187947A0)
#define CPGEJLADBPI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x18794920)
#define CPGEJLADBPI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18794AC0)
#define CPGEJLADBPI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x187947B0)
#define CPGEJLADBPI_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x18794E10)
#define CPGEJLADBPI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18794C40)
#define CPGEJLADBPI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x187943F0)
#define CPGEJLADBPI_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x18795040)
#define CPGEJLADBPI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x187943D0)
#define CPGEJLADBPI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x187946B0)
#define CPGEJLADBPI__CTOR_OFFSET UNITYSDK_OFFSET(0x18794BF0)

inline static constexpr unsigned int CPGEJLADBPI_TypeDefinitionIndex = 15582;

class CPGEJLADBPI : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::MHLDPDNJPCJ DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x30
	::Il2CppArray<::JMEBPDDGOKK*>* OJMBOGGMIKO; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGEJLADBPI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGEJLADBPI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGEJLADBPI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CPGEJLADBPI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CPGEJLADBPI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGEJLADBPI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGEJLADBPI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGEJLADBPI_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGEJLADBPI_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CPGEJLADBPI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::JMEBPDDGOKK* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::JMEBPDDGOKK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CPGEJLADBPI_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGEJLADBPI_NAMKJOJBAOA_OFFSET))(this);
	}
};
