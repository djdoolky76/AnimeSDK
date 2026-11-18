#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PLHPEKFHCHO.h"
#include "unitysdk/System/Object.h"

class CGLBJOKMIMF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DOMAKPLLAOL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1575E1C0)
#define DOMAKPLLAOL_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1575DF80)
#define DOMAKPLLAOL_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1575E100)
#define DOMAKPLLAOL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1575E2A0)
#define DOMAKPLLAOL_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1575DF90)
#define DOMAKPLLAOL_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1575E420)
#define DOMAKPLLAOL_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1575E670)
#define DOMAKPLLAOL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1575DBD0)
#define DOMAKPLLAOL_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1575E650)
#define DOMAKPLLAOL_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1575DBB0)
#define DOMAKPLLAOL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1575DE90)
#define DOMAKPLLAOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1575E3D0)

inline static constexpr unsigned int DOMAKPLLAOL_TypeDefinitionIndex = 11814;

class DOMAKPLLAOL : public ::System::Object
{
public:
	::Il2CppArray<::CGLBJOKMIMF*>* OJMBOGGMIKO; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::PLHPEKFHCHO DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMAKPLLAOL__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMAKPLLAOL_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMAKPLLAOL_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DOMAKPLLAOL_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DOMAKPLLAOL_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMAKPLLAOL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMAKPLLAOL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMAKPLLAOL_FINALIZE_OFFSET))(this);
	}

	::CGLBJOKMIMF* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CGLBJOKMIMF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DOMAKPLLAOL_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DOMAKPLLAOL_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMAKPLLAOL_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMAKPLLAOL_NAMKJOJBAOA_OFFSET))(this);
	}
};
