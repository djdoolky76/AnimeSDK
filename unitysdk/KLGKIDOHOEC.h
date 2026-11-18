#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAOKGAMANBN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class BLALHFBACLI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KLGKIDOHOEC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x195808A0)
#define KLGKIDOHOEC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19580540)
#define KLGKIDOHOEC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x195806B0)
#define KLGKIDOHOEC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19580770)
#define KLGKIDOHOEC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19580550)
#define KLGKIDOHOEC_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x195809D0)
#define KLGKIDOHOEC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19580C20)
#define KLGKIDOHOEC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x195801A0)
#define KLGKIDOHOEC_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x19580C00)
#define KLGKIDOHOEC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19580180)
#define KLGKIDOHOEC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19580460)
#define KLGKIDOHOEC__CTOR_OFFSET UNITYSDK_OFFSET(0x19580980)

inline static constexpr unsigned int KLGKIDOHOEC_TypeDefinitionIndex = 15269;

class KLGKIDOHOEC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::BLALHFBACLI*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::System::Action* PLDOELOOFLL; // 0x28
	::EAOKGAMANBN DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGKIDOHOEC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGKIDOHOEC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGKIDOHOEC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KLGKIDOHOEC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KLGKIDOHOEC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGKIDOHOEC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGKIDOHOEC_FINALIZE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGKIDOHOEC_BHLAEBMEOLO_OFFSET))(this);
	}

	::BLALHFBACLI* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::BLALHFBACLI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KLGKIDOHOEC_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGKIDOHOEC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGKIDOHOEC_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KLGKIDOHOEC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
