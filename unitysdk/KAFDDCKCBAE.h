#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGHIOHHDDCG.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class NDJAPPKDNED;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define KAFDDCKCBAE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17490CD0)
#define KAFDDCKCBAE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17490A90)
#define KAFDDCKCBAE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17490C10)
#define KAFDDCKCBAE_DLBODDIEIJL_OFFSET UNITYSDK_OFFSET(0x17491360)
#define KAFDDCKCBAE_EJABHIAHIAN_OFFSET UNITYSDK_OFFSET(0x174912C0)
#define KAFDDCKCBAE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17490DB0)
#define KAFDDCKCBAE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17490AA0)
#define KAFDDCKCBAE_HFPLKMOOLLL_OFFSET UNITYSDK_OFFSET(0x17491100)
#define KAFDDCKCBAE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17490F30)
#define KAFDDCKCBAE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x174906E0)
#define KAFDDCKCBAE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x174906C0)
#define KAFDDCKCBAE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x174909A0)
#define KAFDDCKCBAE__CTOR_OFFSET UNITYSDK_OFFSET(0x17490EE0)

inline static constexpr unsigned int KAFDDCKCBAE_TypeDefinitionIndex = 15657;

class KAFDDCKCBAE : public ::System::Object
{
public:
	::GGHIOHHDDCG DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x38
	::Il2CppArray<::NDJAPPKDNED*>* OJMBOGGMIKO; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAFDDCKCBAE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAFDDCKCBAE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAFDDCKCBAE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KAFDDCKCBAE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KAFDDCKCBAE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAFDDCKCBAE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAFDDCKCBAE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAFDDCKCBAE_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KAFDDCKCBAE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::NDJAPPKDNED* HFPLKMOOLLL(::System::Int32 ABHBKFJKINO)
	{
		return ((::NDJAPPKDNED*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KAFDDCKCBAE_HFPLKMOOLLL_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Collections::Generic::IReadOnlyList_1<::NDJAPPKDNED*>* EJABHIAHIAN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::NDJAPPKDNED*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAFDDCKCBAE_EJABHIAHIAN_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAFDDCKCBAE_CHLEALKAOJO_OFFSET))(this);
	}

	::NDJAPPKDNED* DLBODDIEIJL(::System::Int32 AOCOIDIMLIH, ::System::Int32 OAHBIEPIIOO)
	{
		return ((::NDJAPPKDNED*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KAFDDCKCBAE_DLBODDIEIJL_OFFSET))(this, AOCOIDIMLIH, OAHBIEPIIOO);
	}
};
