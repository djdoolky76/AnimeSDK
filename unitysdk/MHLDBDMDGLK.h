#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NBFGEEIBCOE.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Project::Config { class BangbooDefenseDataTemplateExt; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MHLDBDMDGLK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1AB0B890)
#define MHLDBDMDGLK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1AB0B660)
#define MHLDBDMDGLK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1AB0B7D0)
#define MHLDBDMDGLK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AB0B970)
#define MHLDBDMDGLK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1AB0B670)
#define MHLDBDMDGLK_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1AB0BCE0)
#define MHLDBDMDGLK_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1AB0BAF0)
#define MHLDBDMDGLK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1AB0B2C0)
#define MHLDBDMDGLK_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1AB0BCC0)
#define MHLDBDMDGLK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1AB0B2A0)
#define MHLDBDMDGLK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1AB0B580)
#define MHLDBDMDGLK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB0BAA0)

inline static constexpr unsigned int MHLDBDMDGLK_TypeDefinitionIndex = 15973;

class MHLDBDMDGLK : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::NBFGEEIBCOE DHDJDGFNBOA; // 0x18
	::Il2CppArray<::MoleMole::Project::Config::BangbooDefenseDataTemplateExt*>* OJMBOGGMIKO; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLDBDMDGLK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLDBDMDGLK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLDBDMDGLK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MHLDBDMDGLK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MHLDBDMDGLK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLDBDMDGLK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLDBDMDGLK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLDBDMDGLK_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MHLDBDMDGLK_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLDBDMDGLK_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLDBDMDGLK_CHLEALKAOJO_OFFSET))(this);
	}

	::MoleMole::Project::Config::BangbooDefenseDataTemplateExt* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MoleMole::Project::Config::BangbooDefenseDataTemplateExt*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MHLDBDMDGLK_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}
};
