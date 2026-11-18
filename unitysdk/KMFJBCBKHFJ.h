#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJDLPDIOHPI.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IFLCILJMCAL;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KMFJBCBKHFJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A50E820)
#define KMFJBCBKHFJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A50E5E0)
#define KMFJBCBKHFJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A50E760)
#define KMFJBCBKHFJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A50E900)
#define KMFJBCBKHFJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A50E5F0)
#define KMFJBCBKHFJ_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x1A50EA40)
#define KMFJBCBKHFJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A50EC50)
#define KMFJBCBKHFJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A50E230)
#define KMFJBCBKHFJ_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x1A50EC30)
#define KMFJBCBKHFJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A50E210)
#define KMFJBCBKHFJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A50E4F0)
#define KMFJBCBKHFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A50EA30)

inline static constexpr unsigned int KMFJBCBKHFJ_TypeDefinitionIndex = 12049;

class KMFJBCBKHFJ : public ::System::Object
{
public:
	::AJDLPDIOHPI DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::Il2CppArray<::IFLCILJMCAL*>* OJMBOGGMIKO; // 0x38
	::System::Int32 IJDGGCANOFI; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFJBCBKHFJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFJBCBKHFJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFJBCBKHFJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KMFJBCBKHFJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KMFJBCBKHFJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFJBCBKHFJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFJBCBKHFJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFJBCBKHFJ_FINALIZE_OFFSET))(this);
	}

	::IFLCILJMCAL* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::IFLCILJMCAL*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KMFJBCBKHFJ_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KMFJBCBKHFJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFJBCBKHFJ_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFJBCBKHFJ_NAMKJOJBAOA_OFFSET))(this);
	}
};
