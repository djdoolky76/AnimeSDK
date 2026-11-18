#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GKKBHODMNIC.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class FGHJJBCMFJF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GEJNKNOOKEP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A5B0BD0)
#define GEJNKNOOKEP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5B0950)
#define GEJNKNOOKEP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A5B0960)
#define GEJNKNOOKEP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5B0A20)
#define GEJNKNOOKEP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A5B0B50)
#define GEJNKNOOKEP_KIPLFEENCNN_OFFSET UNITYSDK_OFFSET(0x1A5B0FB0)
#define GEJNKNOOKEP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A5B0D00)
#define GEJNKNOOKEP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A5B05B0)
#define GEJNKNOOKEP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A5B0590)
#define GEJNKNOOKEP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A5B0870)
#define GEJNKNOOKEP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5B0CB0)

inline static constexpr unsigned int GEJNKNOOKEP_TypeDefinitionIndex = 16518;

class GEJNKNOOKEP : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::Il2CppArray<::FGHJJBCMFJF*>* OJMBOGGMIKO; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::GKKBHODMNIC DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJNKNOOKEP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJNKNOOKEP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJNKNOOKEP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJNKNOOKEP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJNKNOOKEP_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GEJNKNOOKEP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GEJNKNOOKEP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJNKNOOKEP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GEJNKNOOKEP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::FGHJJBCMFJF* KIPLFEENCNN(::System::Int32 MGMDLMBEDJF)
	{
		return ((::FGHJJBCMFJF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GEJNKNOOKEP_KIPLFEENCNN_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJNKNOOKEP_CHLEALKAOJO_OFFSET))(this);
	}
};
