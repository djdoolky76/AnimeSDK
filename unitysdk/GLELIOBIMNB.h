#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFHMJGGAOLH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IGLEBBIDBFO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GLELIOBIMNB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BACD5D0)
#define GLELIOBIMNB_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BACD350)
#define GLELIOBIMNB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BACD360)
#define GLELIOBIMNB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BACD420)
#define GLELIOBIMNB_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BACD550)
#define GLELIOBIMNB_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1BACD720)
#define GLELIOBIMNB_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BACD950)
#define GLELIOBIMNB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BACCFA0)
#define GLELIOBIMNB_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1BACD700)
#define GLELIOBIMNB_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BACCF80)
#define GLELIOBIMNB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BACD260)
#define GLELIOBIMNB__CTOR_OFFSET UNITYSDK_OFFSET(0x1BACD6B0)

inline static constexpr unsigned int GLELIOBIMNB_TypeDefinitionIndex = 14715;

class GLELIOBIMNB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::Il2CppArray<::IGLEBBIDBFO*>* OJMBOGGMIKO; // 0x28
	::HFHMJGGAOLH DHDJDGFNBOA; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLELIOBIMNB__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLELIOBIMNB_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLELIOBIMNB_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLELIOBIMNB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLELIOBIMNB_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GLELIOBIMNB_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GLELIOBIMNB_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLELIOBIMNB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLELIOBIMNB_NAMKJOJBAOA_OFFSET))(this);
	}

	::IGLEBBIDBFO* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::IGLEBBIDBFO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GLELIOBIMNB_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLELIOBIMNB_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GLELIOBIMNB_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
