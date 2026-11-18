#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class MLLODDNIAKE;
class PKLNJNKDOPH;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PDDKHKKCENB_AFLLHFGAIOF_OFFSET UNITYSDK_OFFSET(0x150B5100)
#define PDDKHKKCENB_BLCPBEEMOEP_OFFSET UNITYSDK_OFFSET(0x150B54E0)
#define PDDKHKKCENB_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x150B4EB0)
#define PDDKHKKCENB_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x150B5190)
#define PDDKHKKCENB_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x150B5070)
#define PDDKHKKCENB_MLMJPMCCHAL_OFFSET UNITYSDK_OFFSET(0x150B5420)
#define PDDKHKKCENB_NLDFLAJINNE_OFFSET UNITYSDK_OFFSET(0x150B5300)
#define PDDKHKKCENB_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x150B4DA0)
#define PDDKHKKCENB__CCTOR_OFFSET UNITYSDK_OFFSET(0x150B4F00)
#define PDDKHKKCENB__CTOR_OFFSET UNITYSDK_OFFSET(0x150B4F80)

inline static constexpr unsigned int PDDKHKKCENB_TypeDefinitionIndex = 49627;

class PDDKHKKCENB : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xE7; // 0x0
	::System::Collections::Generic::List_1<::MLLODDNIAKE*>* FEIJIMBCLDO; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::PKLNJNKDOPH*>* KDGEJDPCMFH; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDDKHKKCENB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDDKHKKCENB__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDDKHKKCENB_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDDKHKKCENB_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDDKHKKCENB_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void AFLLHFGAIOF(::System::String* JDFCJJBENBM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PDDKHKKCENB_AFLLHFGAIOF_OFFSET))(this, JDFCJJBENBM);
	}

	static ::PDDKHKKCENB* JFDOOELFAOA()
	{
		return ((::PDDKHKKCENB*(*)())((::PBYTE)hIl2Cpp + PDDKHKKCENB_JFDOOELFAOA_OFFSET))();
	}

	::System::Boolean NLDFLAJINNE(::System::String* JDFCJJBENBM, ::PKLNJNKDOPH*& ECKMPOAABAL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::PKLNJNKDOPH*&))((::PBYTE)hIl2Cpp + PDDKHKKCENB_NLDFLAJINNE_OFFSET))(this, JDFCJJBENBM, ECKMPOAABAL);
	}

	::System::Void MLMJPMCCHAL(::System::String* JDFCJJBENBM, ::PKLNJNKDOPH* ECKMPOAABAL)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::PKLNJNKDOPH*))((::PBYTE)hIl2Cpp + PDDKHKKCENB_MLMJPMCCHAL_OFFSET))(this, JDFCJJBENBM, ECKMPOAABAL);
	}

	::System::Object* BLCPBEEMOEP()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDDKHKKCENB_BLCPBEEMOEP_OFFSET))(this);
	}
};
