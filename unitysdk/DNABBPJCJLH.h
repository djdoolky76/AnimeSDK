#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JINHNALKFLK.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class ILLPEJBMPOK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DNABBPJCJLH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x15758E90)
#define DNABBPJCJLH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x15758C10)
#define DNABBPJCJLH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x15758C20)
#define DNABBPJCJLH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x15758CE0)
#define DNABBPJCJLH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x15758E10)
#define DNABBPJCJLH_KIPLFEENCNN_OFFSET UNITYSDK_OFFSET(0x15759270)
#define DNABBPJCJLH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x15758FC0)
#define DNABBPJCJLH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x15758860)
#define DNABBPJCJLH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x15758840)
#define DNABBPJCJLH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15758B20)
#define DNABBPJCJLH__CTOR_OFFSET UNITYSDK_OFFSET(0x15758F70)

inline static constexpr unsigned int DNABBPJCJLH_TypeDefinitionIndex = 15013;

class DNABBPJCJLH : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::JINHNALKFLK DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::ILLPEJBMPOK*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNABBPJCJLH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNABBPJCJLH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNABBPJCJLH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNABBPJCJLH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNABBPJCJLH_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DNABBPJCJLH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DNABBPJCJLH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNABBPJCJLH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DNABBPJCJLH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNABBPJCJLH_CHLEALKAOJO_OFFSET))(this);
	}

	::ILLPEJBMPOK* KIPLFEENCNN(::System::Int32 MGMDLMBEDJF)
	{
		return ((::ILLPEJBMPOK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DNABBPJCJLH_KIPLFEENCNN_OFFSET))(this, MGMDLMBEDJF);
	}
};
