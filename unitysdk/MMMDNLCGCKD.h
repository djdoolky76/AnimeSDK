#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMAJDGFNBGK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NPNELBNEJMM;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MMMDNLCGCKD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B31C2A0)
#define MMMDNLCGCKD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B31C020)
#define MMMDNLCGCKD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B31C030)
#define MMMDNLCGCKD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B31C0F0)
#define MMMDNLCGCKD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B31C220)
#define MMMDNLCGCKD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B31C3D0)
#define MMMDNLCGCKD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B31BC80)
#define MMMDNLCGCKD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B31BC60)
#define MMMDNLCGCKD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B31BF40)
#define MMMDNLCGCKD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B31C380)

inline static constexpr unsigned int MMMDNLCGCKD_TypeDefinitionIndex = 10379;

class MMMDNLCGCKD : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::HMAJDGFNBGK DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x38
	::Il2CppArray<::NPNELBNEJMM*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMMDNLCGCKD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMMDNLCGCKD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMMDNLCGCKD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMMDNLCGCKD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMMDNLCGCKD_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MMMDNLCGCKD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MMMDNLCGCKD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMMDNLCGCKD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MMMDNLCGCKD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMMDNLCGCKD_CHLEALKAOJO_OFFSET))(this);
	}
};
