#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class TagLibraryConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GGNFHGBFDNE_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x179EE1A0)
#define GGNFHGBFDNE_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x179EE0B0)
#define GGNFHGBFDNE_JIHFNMECBPB_OFFSET UNITYSDK_OFFSET(0x179ED7C0)
#define GGNFHGBFDNE_JLNDNIELIIE_OFFSET UNITYSDK_OFFSET(0x179EDD30)
#define GGNFHGBFDNE_LGDABIFNOIM_OFFSET UNITYSDK_OFFSET(0x179ED7D0)
#define GGNFHGBFDNE_LNEDNIMPCKG_OFFSET UNITYSDK_OFFSET(0x179ED9B0)

inline static constexpr unsigned int GGNFHGBFDNE_TypeDefinitionIndex = 48435;

class GGNFHGBFDNE : public ::System::Object
{
public:
	static ::MoleMole::Config::TagLibraryConfig** StaticGet_GABPEHHMNCI()
	{
		return (::MoleMole::Config::TagLibraryConfig**)Il2CppClass::FromTypeDefinitionIndex(GGNFHGBFDNE_TypeDefinitionIndex)->GetStaticField(0x3DD40);
	}

	static ::System::Void JIHFNMECBPB(::MoleMole::Config::TagLibraryConfig* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::MoleMole::Config::TagLibraryConfig*))((::PBYTE)hIl2Cpp + GGNFHGBFDNE_JIHFNMECBPB_OFFSET))(EGEGIMGMJHN);
	}

	static ::MoleMole::Config::TagLibraryConfig* LGDABIFNOIM()
	{
		return ((::MoleMole::Config::TagLibraryConfig*(*)())((::PBYTE)hIl2Cpp + GGNFHGBFDNE_LGDABIFNOIM_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::System::String*>* LNEDNIMPCKG(::System::String* IHDCGPLNEBJ)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + GGNFHGBFDNE_LNEDNIMPCKG_OFFSET))(IHDCGPLNEBJ);
	}

	static ::System::Collections::Generic::List_1<::System::String*>* JLNDNIELIIE(::System::String* IHDCGPLNEBJ)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + GGNFHGBFDNE_JLNDNIELIIE_OFFSET))(IHDCGPLNEBJ);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + GGNFHGBFDNE_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + GGNFHGBFDNE_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}
};
