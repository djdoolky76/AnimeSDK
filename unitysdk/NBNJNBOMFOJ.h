#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/AttackType.h"

namespace MoleMole::Config { class LevelGlobalAIModule; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NBNJNBOMFOJ_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x16B5CB00)
#define NBNJNBOMFOJ_GDBGFNHAADJ_OFFSET UNITYSDK_OFFSET(0x16B5D120)
#define NBNJNBOMFOJ_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x16B5C8E0)
#define NBNJNBOMFOJ_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x16B5CA30)
#define NBNJNBOMFOJ_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x16B5D130)
#define NBNJNBOMFOJ_NPKFJFPHHIP_OFFSET UNITYSDK_OFFSET(0x16B5CA20)
#define NBNJNBOMFOJ_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x16B5C820)
#define NBNJNBOMFOJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B5C930)
#define NBNJNBOMFOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16B5C9B0)

inline static constexpr unsigned int NBNJNBOMFOJ_TypeDefinitionIndex = 89125;

class NBNJNBOMFOJ : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x43; // 0x0
	::System::Collections::Generic::List_1<::System::String*>* KGCNFINMNMK; // 0x48
	::MoleMole::Config::LevelGlobalAIModule* NGMAAAPHCFD; // 0x50
	::System::Collections::Generic::Dictionary_2<::MoleMole::AttackType, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*>* ECAGFCJGOKK; // 0x58
	::System::Collections::Generic::List_1<::System::UInt32>* OCMCPMKILKE; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* CIAMPJPLPJK; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::UInt32>*>* CMMEMOBKGML; // 0x70
	::System::Collections::Generic::List_1<::System::UInt32>* CJJDICLIDEO; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* IGONBFFHEJE; // 0x80
	::System::String* _PMDKCHKLDCH_k__BackingField; // 0x88
	::Il2CppArray<::System::Single>* GAODDNJAHEE; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* CDNPHGPGALH; // 0x98
	::System::Collections::Generic::HashSet_1<::System::UInt32>* PBKCAGMIANN; // 0xA0
	::System::Collections::Generic::Dictionary_2<::MoleMole::AttackType, ::System::Collections::Generic::List_1<::System::UInt32>*>* ALHLDJDFILG; // 0xA8
	::System::Collections::Generic::List_1<::System::UInt32>* CIOOACNCEOF; // 0xB0
	::System::Int32 ADPKNGCEAGL; // 0xB8
	::System::Single GJKNODJKIJH; // 0xBC

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBNJNBOMFOJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNJNBOMFOJ__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNJNBOMFOJ_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNJNBOMFOJ_GETCLASSID_OFFSET))(this);
	}

	::System::String* NPKFJFPHHIP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNJNBOMFOJ_NPKFJFPHHIP_OFFSET))(this);
	}

	static ::NBNJNBOMFOJ* JFDOOELFAOA()
	{
		return ((::NBNJNBOMFOJ*(*)())((::PBYTE)hIl2Cpp + NBNJNBOMFOJ_JFDOOELFAOA_OFFSET))();
	}

	::System::Void BBOMJDBNHIC(::System::String* ONMOHEILJJL)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NBNJNBOMFOJ_BBOMJDBNHIC_OFFSET))(this, ONMOHEILJJL);
	}

	::System::Void GDBGFNHAADJ(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NBNJNBOMFOJ_GDBGFNHAADJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNJNBOMFOJ_MEFBHFEOKGH_OFFSET))(this);
	}
};
