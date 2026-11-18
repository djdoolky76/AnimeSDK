#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKDIALGHHPF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class PDKBJLIIIEJ;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MAMGMBDPIFC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1733E9E0)
#define MAMGMBDPIFC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1733E760)
#define MAMGMBDPIFC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1733E770)
#define MAMGMBDPIFC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1733E830)
#define MAMGMBDPIFC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1733E960)
#define MAMGMBDPIFC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1733EBB0)
#define MAMGMBDPIFC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1733EE30)
#define MAMGMBDPIFC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1733E420)
#define MAMGMBDPIFC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1733EB90)
#define MAMGMBDPIFC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1733E400)
#define MAMGMBDPIFC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1733E680)
#define MAMGMBDPIFC__CTOR_OFFSET UNITYSDK_OFFSET(0x1733EAC0)

inline static constexpr unsigned int MAMGMBDPIFC_TypeDefinitionIndex = 9552;

class MAMGMBDPIFC : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::String*>* LHINHLCKHNE; // 0x10
	::BKDIALGHHPF DHDJDGFNBOA; // 0x18
	::Il2CppArray<::PDKBJLIIIEJ*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMGMBDPIFC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMGMBDPIFC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMGMBDPIFC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMGMBDPIFC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMGMBDPIFC_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MAMGMBDPIFC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MAMGMBDPIFC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMGMBDPIFC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMGMBDPIFC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAMGMBDPIFC_NAMKJOJBAOA_OFFSET))(this);
	}

	::PDKBJLIIIEJ* IFDPKDOFOJD(::System::String* MCOHLHMKLIP)
	{
		return ((::PDKBJLIIIEJ*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MAMGMBDPIFC_IFDPKDOFOJD_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MAMGMBDPIFC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
