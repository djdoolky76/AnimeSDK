#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DADJPONJEEI.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class ALOHBNNBCAP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FBGHNGKFBNN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B102C80)
#define FBGHNGKFBNN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B102A40)
#define FBGHNGKFBNN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B102BC0)
#define FBGHNGKFBNN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B102D60)
#define FBGHNGKFBNN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B102A50)
#define FBGHNGKFBNN_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1B1030D0)
#define FBGHNGKFBNN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B102F00)
#define FBGHNGKFBNN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B102690)
#define FBGHNGKFBNN_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1B102EE0)
#define FBGHNGKFBNN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B102670)
#define FBGHNGKFBNN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B102950)
#define FBGHNGKFBNN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B102E90)

inline static constexpr unsigned int FBGHNGKFBNN_TypeDefinitionIndex = 14396;

class FBGHNGKFBNN : public ::System::Object
{
public:
	::DADJPONJEEI DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::ALOHBNNBCAP*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGHNGKFBNN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGHNGKFBNN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGHNGKFBNN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FBGHNGKFBNN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FBGHNGKFBNN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGHNGKFBNN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGHNGKFBNN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGHNGKFBNN_FINALIZE_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGHNGKFBNN_NAMKJOJBAOA_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FBGHNGKFBNN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::ALOHBNNBCAP* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::ALOHBNNBCAP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBGHNGKFBNN_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGHNGKFBNN_CHLEALKAOJO_OFFSET))(this);
	}
};
