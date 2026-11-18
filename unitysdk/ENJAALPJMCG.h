#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/COEMFMDLABM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class HOAKNLDHCMK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ENJAALPJMCG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x187B07C0)
#define ENJAALPJMCG_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x187B0540)
#define ENJAALPJMCG_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x187B0550)
#define ENJAALPJMCG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x187B0610)
#define ENJAALPJMCG_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x187B0740)
#define ENJAALPJMCG_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x187B0910)
#define ENJAALPJMCG_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x187B0B40)
#define ENJAALPJMCG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x187B01A0)
#define ENJAALPJMCG_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x187B08F0)
#define ENJAALPJMCG_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x187B0180)
#define ENJAALPJMCG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x187B0460)
#define ENJAALPJMCG__CTOR_OFFSET UNITYSDK_OFFSET(0x187B08A0)

inline static constexpr unsigned int ENJAALPJMCG_TypeDefinitionIndex = 15308;

class ENJAALPJMCG : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::Il2CppArray<::HOAKNLDHCMK*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x20
	::COEMFMDLABM DHDJDGFNBOA; // 0x28
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENJAALPJMCG__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENJAALPJMCG_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENJAALPJMCG_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENJAALPJMCG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENJAALPJMCG_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ENJAALPJMCG_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + ENJAALPJMCG_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENJAALPJMCG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENJAALPJMCG_NAMKJOJBAOA_OFFSET))(this);
	}

	::HOAKNLDHCMK* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HOAKNLDHCMK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENJAALPJMCG_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENJAALPJMCG_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ENJAALPJMCG_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
