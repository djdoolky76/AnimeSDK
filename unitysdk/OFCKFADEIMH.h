#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigInteractEntry; }
namespace MoleMole::Config { class InteractEntry; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OFCKFADEIMH_CAAAICBKKPJ_OFFSET UNITYSDK_OFFSET(0x1843ECD0)
#define OFCKFADEIMH_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x1843E7C0)
#define OFCKFADEIMH_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x1843EF90)
#define OFCKFADEIMH_FLJLDDIFLBG_OFFSET UNITYSDK_OFFSET(0x1843E070)
#define OFCKFADEIMH_HABAMCICFKJ_OFFSET UNITYSDK_OFFSET(0x1843DFE0)
#define OFCKFADEIMH_NPHFOIFHIEC_OFFSET UNITYSDK_OFFSET(0x1843E380)
#define OFCKFADEIMH_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1843E020)
#define OFCKFADEIMH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1843DFD0)

inline static constexpr unsigned int OFCKFADEIMH_TypeDefinitionIndex = 59237;

class OFCKFADEIMH : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::InteractEntry*>** StaticGet_KEPLGECMOLI()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::InteractEntry*>**)Il2CppClass::FromTypeDefinitionIndex(OFCKFADEIMH_TypeDefinitionIndex)->GetStaticField(0x45830);
	}
	static ::Il2CppArray<::Foundation::AssetPath>** StaticGet_NIPFINKIJEN()
	{
		return (::Il2CppArray<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(OFCKFADEIMH_TypeDefinitionIndex)->GetStaticField(0x45838);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFCKFADEIMH__CCTOR_OFFSET))();
	}

	static ::System::Void HABAMCICFKJ()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFCKFADEIMH_HABAMCICFKJ_OFFSET))();
	}

	static ::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFCKFADEIMH_NPOLNFDBOOD_OFFSET))();
	}

	static ::MoleMole::Config::InteractEntry* FLJLDDIFLBG(::System::String* MAHKLGDLHJI)
	{
		return ((::MoleMole::Config::InteractEntry*(*)(::System::String*))((::PBYTE)hIl2Cpp + OFCKFADEIMH_FLJLDDIFLBG_OFFSET))(MAHKLGDLHJI);
	}

	static ::System::Void NPHFOIFHIEC(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigInteractEntry*>* KBIMBOLCFCG)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigInteractEntry*>*))((::PBYTE)hIl2Cpp + OFCKFADEIMH_NPHFOIFHIEC_OFFSET))(KBIMBOLCFCG);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + OFCKFADEIMH_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Boolean CAAAICBKKPJ(::System::String* MAHKLGDLHJI)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + OFCKFADEIMH_CAAAICBKKPJ_OFFSET))(MAHKLGDLHJI);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + OFCKFADEIMH_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
