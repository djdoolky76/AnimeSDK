#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/CharacterCameraDitheringData.h"

namespace MoleMole { class MonoEffectPluginDither; }

#define NKJEOLDHJKB_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1AE27650)
#define NKJEOLDHJKB_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1AE277B0)
#define NKJEOLDHJKB_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1AE27840)
#define NKJEOLDHJKB_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1AE27560)
#define NKJEOLDHJKB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE276A0)
#define NKJEOLDHJKB__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE27790)

inline static constexpr unsigned int NKJEOLDHJKB_TypeDefinitionIndex = 58371;

class NKJEOLDHJKB : public ::MJHDNMKGLBJ
{
public:
	static ::System::Int32* StaticGet_GHFMOFFCLAF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NKJEOLDHJKB_TypeDefinitionIndex)->GetStaticField(0xD020);
	}
	static ::System::Int32* StaticGet_ICMMMLOFFNN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NKJEOLDHJKB_TypeDefinitionIndex)->GetStaticField(0xD024);
	}
	static ::System::Int32* StaticGet_FGILHDAJAFI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NKJEOLDHJKB_TypeDefinitionIndex)->GetStaticField(0xD028);
	}
	static ::System::Int32* StaticGet_PEKODLIBKLH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NKJEOLDHJKB_TypeDefinitionIndex)->GetStaticField(0xD02C);
	}
	static ::System::Int32* StaticGet_GPEDAIJKNBO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NKJEOLDHJKB_TypeDefinitionIndex)->GetStaticField(0xD030);
	}
	// static const ::System::String* MEPAHLDILJH; // 0x0
	// static const ::System::String* NNHHKFNAOGL; // 0x0
	// static const ::System::String* MKHMHDCLAJL; // 0x0
	// static const ::System::String* DFBPACNCEEB; // 0x0
	// static const ::System::String* GABPJFBAHJM; // 0x0
	// static const ::System::String* BOENNPOCMLM; // 0x0
	// static const ::System::String* AICAOPAEKEA; // 0x0
	// static const ::System::String* GMIODOLHLHC; // 0x0
	// static const ::System::Int32 IPAPPCOIEIF = 0x6C; // 0x0
	::MoleMole::MonoEffectPluginDither* FAOALKKJKMO; // 0x48
	::MoleMole::CharacterCameraDitheringData JBCBFMCMMJL; // 0x50
	::System::Boolean AEDIAPAFLCG; // 0x98
	::System::Byte _padding0[0x3];
	::System::Single KAKKKLLOBHM; // 0x9C
	::System::Single MAMCNNANBIP; // 0xA0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKJEOLDHJKB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKJEOLDHJKB__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKJEOLDHJKB_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKJEOLDHJKB_GETCLASSID_OFFSET))(this);
	}

	static ::NKJEOLDHJKB* JFDOOELFAOA()
	{
		return ((::NKJEOLDHJKB*(*)())((::PBYTE)hIl2Cpp + NKJEOLDHJKB_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKJEOLDHJKB_MEFBHFEOKGH_OFFSET))(this);
	}
};
