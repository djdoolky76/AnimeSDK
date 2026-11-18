#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OOAJDGDINEC_BGGLGFHDAAH_OFFSET UNITYSDK_OFFSET(0x15FF3370)
#define OOAJDGDINEC_BLDNEKMJCGK_OFFSET UNITYSDK_OFFSET(0x15FF3E00)
#define OOAJDGDINEC_CBJPEDMIFAE_OFFSET UNITYSDK_OFFSET(0x15FF3280)
#define OOAJDGDINEC__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FF3200)

inline static constexpr unsigned int OOAJDGDINEC_TypeDefinitionIndex = 51978;

class OOAJDGDINEC : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_KJMEMMNKMCM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OOAJDGDINEC_TypeDefinitionIndex)->GetStaticField(0x12B50);
	}
	static ::System::Int32* StaticGet_PJFFIBKLKNE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OOAJDGDINEC_TypeDefinitionIndex)->GetStaticField(0x12B54);
	}
	static ::System::Int32* StaticGet_PPJPGPFGNDF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OOAJDGDINEC_TypeDefinitionIndex)->GetStaticField(0x12B58);
	}
	static ::System::Int32* StaticGet_LMCKPCFOFLL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OOAJDGDINEC_TypeDefinitionIndex)->GetStaticField(0x12B5C);
	}
	static ::System::Int32* StaticGet_JFBINMDPBFM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OOAJDGDINEC_TypeDefinitionIndex)->GetStaticField(0x12B60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOAJDGDINEC__CCTOR_OFFSET))();
	}

	static ::MoleMole::Battle::Entity* CBJPEDMIFAE(::MoleMole::Battle::Entity* MJPPILKEMBG)
	{
		return ((::MoleMole::Battle::Entity*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOAJDGDINEC_CBJPEDMIFAE_OFFSET))(MJPPILKEMBG);
	}

	static ::System::Void BGGLGFHDAAH(::MoleMole::EntityHandle PEAEKOLKKPB, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* LOIBFEAFJHO, ::System::Single JBGLCAFPGHK)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*, ::System::Single))((::PBYTE)hIl2Cpp + OOAJDGDINEC_BGGLGFHDAAH_OFFSET))(PEAEKOLKKPB, LOIBFEAFJHO, JBGLCAFPGHK);
	}

	static ::System::Boolean BLDNEKMJCGK(::MoleMole::Battle::Entity* NGODDCIOJDP)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OOAJDGDINEC_BLDNEKMJCGK_OFFSET))(NGODDCIOJDP);
	}
};
