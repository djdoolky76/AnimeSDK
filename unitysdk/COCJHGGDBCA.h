#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class BKDJDMMCIAH;
class KFGGFDDILAG;
class NPCAvatarRuntimeData;
namespace NPCCrowd::Ability { class NPCAbility; }
namespace NPCCrowd::Accessories { class NPCAccessory; }
namespace NPCCrowd::Animation { class NPCUnionAnimator; }
namespace NPCCrowd::CrowdPhysics { class NPCPhysicsRuntimeData; }
namespace NPCCrowd::GameplayTask { class NPCGameplayTaskContainer; }
namespace NPCCrowd::Lod { class NPCCrowdLodRuntimeData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define COCJHGGDBCA_AMMEICCECKE_OFFSET UNITYSDK_OFFSET(0x193EA760)
#define COCJHGGDBCA_DKNEFMDCANB_OFFSET UNITYSDK_OFFSET(0x193EA9E0)
#define COCJHGGDBCA_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x193EA2A0)
#define COCJHGGDBCA_GNDKKOBKCLA_OFFSET UNITYSDK_OFFSET(0x193EA9F0)
#define COCJHGGDBCA_JFADDCAGBKL_OFFSET UNITYSDK_OFFSET(0x193EAA70)
#define COCJHGGDBCA_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x193EA680)
#define COCJHGGDBCA_LGOPIPLKBJK_OFFSET UNITYSDK_OFFSET(0x193EA700)
#define COCJHGGDBCA_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x193EAA80)
#define COCJHGGDBCA_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x193EA370)
#define COCJHGGDBCA_PCDIFGAOPJA_OFFSET UNITYSDK_OFFSET(0x193EA980)
#define COCJHGGDBCA__CCTOR_OFFSET UNITYSDK_OFFSET(0x193EA2F0)
#define COCJHGGDBCA__CTOR_OFFSET UNITYSDK_OFFSET(0x193EA530)

inline static constexpr unsigned int COCJHGGDBCA_TypeDefinitionIndex = 76089;

class COCJHGGDBCA : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xE9; // 0x0
	::KFGGFDDILAG* NBENLHJGNFN; // 0x48
	::NPCAvatarRuntimeData* LKNEOBCLOMD; // 0x50
	::BKDJDMMCIAH* KHAHIAAHCLB; // 0x58
	::NPCCrowd::CrowdPhysics::NPCPhysicsRuntimeData* LFNGEKFJCBN; // 0x60
	::NPCCrowd::Animation::NPCUnionAnimator* ICAAMDMMDDJ; // 0x68
	::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>* HCNPONHGLBK; // 0x70
	::System::Collections::Generic::List_1<::System::Object*>* EAGCGNEJCDD; // 0x78
	::NPCCrowd::GameplayTask::NPCGameplayTaskContainer* GBBLCABDPDB; // 0x80
	::NPCCrowd::Ability::NPCAbility* PEDHJPALABK; // 0x88
	::NPCCrowd::Lod::NPCCrowdLodRuntimeData* NKDFOBEHCKN; // 0x90
	::System::Int32 ECJFPALEAAK; // 0x98
	::System::Boolean HAOPBFLMDAG; // 0x9C
	::System::Boolean BDAACDMCMMH; // 0x9D
	::System::Boolean IFBHBNLCGJH; // 0x9E
	::System::Byte _padding0[0x1];
	::System::UInt64 MGMDJCCEAIB; // 0xA0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COCJHGGDBCA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COCJHGGDBCA__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COCJHGGDBCA_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COCJHGGDBCA_ONCLEAN_OFFSET))(this);
	}

	static ::COCJHGGDBCA* JFDOOELFAOA()
	{
		return ((::COCJHGGDBCA*(*)())((::PBYTE)hIl2Cpp + COCJHGGDBCA_JFDOOELFAOA_OFFSET))();
	}

	::System::Void LGOPIPLKBJK(::System::Boolean NNJLDLIHINN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COCJHGGDBCA_LGOPIPLKBJK_OFFSET))(this, NNJLDLIHINN);
	}

	::System::Void PCDIFGAOPJA(::System::Boolean NNJLDLIHINN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COCJHGGDBCA_PCDIFGAOPJA_OFFSET))(this, NNJLDLIHINN);
	}

	::System::Void AMMEICCECKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COCJHGGDBCA_AMMEICCECKE_OFFSET))(this);
	}

	::System::Int32 DKNEFMDCANB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COCJHGGDBCA_DKNEFMDCANB_OFFSET))(this);
	}

	::System::Void GNDKKOBKCLA(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COCJHGGDBCA_GNDKKOBKCLA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean JFADDCAGBKL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COCJHGGDBCA_JFADDCAGBKL_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COCJHGGDBCA_MEFBHFEOKGH_OFFSET))(this);
	}
};
