#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPEDDMDDNLA.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class PCCAJMKGGGA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PIOBMHLPFCO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19144080)
#define PIOBMHLPFCO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19143E40)
#define PIOBMHLPFCO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19143FC0)
#define PIOBMHLPFCO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19144160)
#define PIOBMHLPFCO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19143E50)
#define PIOBMHLPFCO_IFDPKDOFOJD_OFFSET UNITYSDK_OFFSET(0x191444B0)
#define PIOBMHLPFCO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x191442E0)
#define PIOBMHLPFCO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19143A90)
#define PIOBMHLPFCO_NAMKJOJBAOA_OFFSET UNITYSDK_OFFSET(0x191446E0)
#define PIOBMHLPFCO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19143A70)
#define PIOBMHLPFCO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19143D50)
#define PIOBMHLPFCO__CTOR_OFFSET UNITYSDK_OFFSET(0x19144290)

inline static constexpr unsigned int PIOBMHLPFCO_TypeDefinitionIndex = 10192;

class PIOBMHLPFCO : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::IPEDDMDDNLA DHDJDGFNBOA; // 0x18
	::Il2CppArray<::PCCAJMKGGGA*>* OJMBOGGMIKO; // 0x30
	::System::Action* PLDOELOOFLL; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOBMHLPFCO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOBMHLPFCO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOBMHLPFCO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PIOBMHLPFCO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PIOBMHLPFCO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOBMHLPFCO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOBMHLPFCO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOBMHLPFCO_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PIOBMHLPFCO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOBMHLPFCO_CHLEALKAOJO_OFFSET))(this);
	}

	::PCCAJMKGGGA* IFDPKDOFOJD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::PCCAJMKGGGA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIOBMHLPFCO_IFDPKDOFOJD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void NAMKJOJBAOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOBMHLPFCO_NAMKJOJBAOA_OFFSET))(this);
	}
};
