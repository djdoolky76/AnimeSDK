#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EODLPLKADJN.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class MGHPNDBAFMF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JJONFCLAJIC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B4FA020)
#define JJONFCLAJIC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B4F9DF0)
#define JJONFCLAJIC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B4F9F60)
#define JJONFCLAJIC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B4FA100)
#define JJONFCLAJIC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B4F9E00)
#define JJONFCLAJIC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B4FA280)
#define JJONFCLAJIC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B4F9A50)
#define JJONFCLAJIC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B4F9A30)
#define JJONFCLAJIC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B4F9D10)
#define JJONFCLAJIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4FA230)

inline static constexpr unsigned int JJONFCLAJIC_TypeDefinitionIndex = 9173;

class JJONFCLAJIC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::Il2CppArray<::MGHPNDBAFMF*>* OJMBOGGMIKO; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x20
	::EODLPLKADJN DHDJDGFNBOA; // 0x28
	::System::Action* PLDOELOOFLL; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJONFCLAJIC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JJONFCLAJIC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJONFCLAJIC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JJONFCLAJIC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + JJONFCLAJIC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJONFCLAJIC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJONFCLAJIC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJONFCLAJIC_FINALIZE_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJONFCLAJIC_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + JJONFCLAJIC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
