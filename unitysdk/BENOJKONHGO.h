#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHOCBENKFJA.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class KFOBLHHLNMJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BENOJKONHGO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x19F192E0)
#define BENOJKONHGO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x19F190A0)
#define BENOJKONHGO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x19F19220)
#define BENOJKONHGO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19F193C0)
#define BENOJKONHGO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x19F190B0)
#define BENOJKONHGO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x19F19540)
#define BENOJKONHGO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x19F18CF0)
#define BENOJKONHGO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x19F18CD0)
#define BENOJKONHGO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19F18FB0)
#define BENOJKONHGO__CTOR_OFFSET UNITYSDK_OFFSET(0x19F194F0)

inline static constexpr unsigned int BENOJKONHGO_TypeDefinitionIndex = 16458;

class BENOJKONHGO : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FLBOKGKPECD; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::Il2CppArray<::KFOBLHHLNMJ*>* OJMBOGGMIKO; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* LHINHLCKHNE; // 0x28
	::JHOCBENKFJA DHDJDGFNBOA; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BENOJKONHGO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BENOJKONHGO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BENOJKONHGO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BENOJKONHGO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BENOJKONHGO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BENOJKONHGO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BENOJKONHGO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BENOJKONHGO_FINALIZE_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BENOJKONHGO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BENOJKONHGO_CHLEALKAOJO_OFFSET))(this);
	}
};
