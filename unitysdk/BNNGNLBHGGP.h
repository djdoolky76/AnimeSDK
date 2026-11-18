#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIDMGNDPHGL.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class EJOODIHKCLG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BNNGNLBHGGP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17A7EB20)
#define BNNGNLBHGGP_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17A7E8E0)
#define BNNGNLBHGGP_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17A7EA60)
#define BNNGNLBHGGP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17A7EC00)
#define BNNGNLBHGGP_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17A7E8F0)
#define BNNGNLBHGGP_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17A7ED80)
#define BNNGNLBHGGP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17A7E530)
#define BNNGNLBHGGP_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17A7E510)
#define BNNGNLBHGGP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17A7E7F0)
#define BNNGNLBHGGP__CTOR_OFFSET UNITYSDK_OFFSET(0x17A7ED30)

inline static constexpr unsigned int BNNGNLBHGGP_TypeDefinitionIndex = 14832;

class BNNGNLBHGGP : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x18
	::Il2CppArray<::EJOODIHKCLG*>* OJMBOGGMIKO; // 0x20
	::BIDMGNDPHGL DHDJDGFNBOA; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x40
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNNGNLBHGGP__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNNGNLBHGGP_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNNGNLBHGGP_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BNNGNLBHGGP_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BNNGNLBHGGP_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNNGNLBHGGP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNNGNLBHGGP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNNGNLBHGGP_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BNNGNLBHGGP_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNNGNLBHGGP_CHLEALKAOJO_OFFSET))(this);
	}
};
