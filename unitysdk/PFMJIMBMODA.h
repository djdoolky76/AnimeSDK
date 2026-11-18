#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHLCEPFGHEF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class LKOHJEJDJPF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PFMJIMBMODA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1D0DAE20)
#define PFMJIMBMODA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1D0DABE0)
#define PFMJIMBMODA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1D0DAD60)
#define PFMJIMBMODA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D0DAF00)
#define PFMJIMBMODA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1D0DABF0)
#define PFMJIMBMODA_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1D0DB080)
#define PFMJIMBMODA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1D0DA830)
#define PFMJIMBMODA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1D0DA810)
#define PFMJIMBMODA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D0DAAF0)
#define PFMJIMBMODA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0DB030)

inline static constexpr unsigned int PFMJIMBMODA_TypeDefinitionIndex = 11280;

class PFMJIMBMODA : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::AHLCEPFGHEF DHDJDGFNBOA; // 0x28
	::Il2CppArray<::LKOHJEJDJPF*>* OJMBOGGMIKO; // 0x40
	::System::Int32 IJDGGCANOFI; // 0x48
	::System::Boolean DLGKLGKOMHK; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMJIMBMODA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMJIMBMODA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMJIMBMODA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PFMJIMBMODA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + PFMJIMBMODA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMJIMBMODA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMJIMBMODA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMJIMBMODA_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PFMJIMBMODA_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMJIMBMODA_CHLEALKAOJO_OFFSET))(this);
	}
};
