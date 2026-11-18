#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/RunStateType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class CharacterCommonDatas; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EBNJMKJHEHB_ADMANJPPKGP_OFFSET UNITYSDK_OFFSET(0x1588C2F0)
#define EBNJMKJHEHB_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x1588BEF0)
#define EBNJMKJHEHB_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x1588C0D0)
#define EBNJMKJHEHB_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x1588C970)
#define EBNJMKJHEHB_NPEFJOCGNIO_OFFSET UNITYSDK_OFFSET(0x1588C4F0)
#define EBNJMKJHEHB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1588BEE0)

inline static constexpr unsigned int EBNJMKJHEHB_TypeDefinitionIndex = 81979;

class EBNJMKJHEHB : public ::System::Object
{
public:
	static ::MoleMole::CharacterCommonDatas** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::CharacterCommonDatas**)Il2CppClass::FromTypeDefinitionIndex(EBNJMKJHEHB_TypeDefinitionIndex)->GetStaticField(0x31670);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::RunStateType>** StaticGet_PBNBLPLIDFP()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::RunStateType>**)Il2CppClass::FromTypeDefinitionIndex(EBNJMKJHEHB_TypeDefinitionIndex)->GetStaticField(0x31678);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBNJMKJHEHB__CCTOR_OFFSET))();
	}

	static ::MoleMole::CharacterCommonDatas* COPIDBEMEIE()
	{
		return ((::MoleMole::CharacterCommonDatas*(*)())((::PBYTE)hIl2Cpp + EBNJMKJHEHB_COPIDBEMEIE_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + EBNJMKJHEHB_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void ADMANJPPKGP(::System::Collections::Generic::List_1<::System::String*>* DABJMKLJINF, ::MoleMole::Config::RunStateType FDLMCAHFLML)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*, ::MoleMole::Config::RunStateType))((::PBYTE)hIl2Cpp + EBNJMKJHEHB_ADMANJPPKGP_OFFSET))(DABJMKLJINF, FDLMCAHFLML);
	}

	static ::MoleMole::Config::RunStateType NPEFJOCGNIO(::System::Int32 INKFNMNAELK)
	{
		return ((::MoleMole::Config::RunStateType(*)(::System::Int32))((::PBYTE)hIl2Cpp + EBNJMKJHEHB_NPEFJOCGNIO_OFFSET))(INKFNMNAELK);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + EBNJMKJHEHB_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
