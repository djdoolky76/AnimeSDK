#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JIPJGJCCCDF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class OGBLGLBELMH;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DDGCLCFLEFG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A189C50)
#define DDGCLCFLEFG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A189A10)
#define DDGCLCFLEFG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A189B90)
#define DDGCLCFLEFG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A189D30)
#define DDGCLCFLEFG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A189A20)
#define DDGCLCFLEFG_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A189ED0)
#define DDGCLCFLEFG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A18A100)
#define DDGCLCFLEFG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A189660)
#define DDGCLCFLEFG_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A189EB0)
#define DDGCLCFLEFG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A189640)
#define DDGCLCFLEFG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A189920)
#define DDGCLCFLEFG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A189E60)

inline static constexpr unsigned int DDGCLCFLEFG_TypeDefinitionIndex = 10058;

class DDGCLCFLEFG : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::JIPJGJCCCDF DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x30
	::Il2CppArray<::OGBLGLBELMH*>* OJMBOGGMIKO; // 0x38
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGCLCFLEFG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGCLCFLEFG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGCLCFLEFG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DDGCLCFLEFG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DDGCLCFLEFG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGCLCFLEFG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGCLCFLEFG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGCLCFLEFG_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGCLCFLEFG_NAMKJOJBAOA_OFFSET))(this);
	}

	::OGBLGLBELMH* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::OGBLGLBELMH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DDGCLCFLEFG_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGCLCFLEFG_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DDGCLCFLEFG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
