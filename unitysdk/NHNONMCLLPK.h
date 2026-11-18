#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ItemDropEffectSetting; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NHNONMCLLPK_BADKHIJEHLE_OFFSET UNITYSDK_OFFSET(0xE19DF10)
#define NHNONMCLLPK_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0xE19E1E0)
#define NHNONMCLLPK_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0xE19E0F0)
#define NHNONMCLLPK_GLEOOFICHPD_OFFSET UNITYSDK_OFFSET(0xE19E5C0)
#define NHNONMCLLPK_MAKCHDGDFKJ_OFFSET UNITYSDK_OFFSET(0xE19E3E0)
#define NHNONMCLLPK_NJEIACNMJHL_OFFSET UNITYSDK_OFFSET(0xE19E840)

inline static constexpr unsigned int NHNONMCLLPK_TypeDefinitionIndex = 92580;

class NHNONMCLLPK : public ::System::Object
{
public:
	static ::MoleMole::Config::ItemDropEffectSetting** StaticGet_PDGCHHNPPGB()
	{
		return (::MoleMole::Config::ItemDropEffectSetting**)Il2CppClass::FromTypeDefinitionIndex(NHNONMCLLPK_TypeDefinitionIndex)->GetStaticField(0x45510);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ItemDropEffectSetting*>** StaticGet_BEMMONAKKPP()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ItemDropEffectSetting*>**)Il2CppClass::FromTypeDefinitionIndex(NHNONMCLLPK_TypeDefinitionIndex)->GetStaticField(0x45518);
	}
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_GNPNNFELKKD()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NHNONMCLLPK_TypeDefinitionIndex)->GetStaticField(0x45520);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ItemDropEffectSetting*>* BADKHIJEHLE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ItemDropEffectSetting*>*(*)())((::PBYTE)hIl2Cpp + NHNONMCLLPK_BADKHIJEHLE_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + NHNONMCLLPK_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Config::ItemDropEffectSetting* MAKCHDGDFKJ()
	{
		return ((::MoleMole::Config::ItemDropEffectSetting*(*)())((::PBYTE)hIl2Cpp + NHNONMCLLPK_MAKCHDGDFKJ_OFFSET))();
	}

	static ::MoleMole::Config::ItemDropEffectSetting* GLEOOFICHPD(::System::String* HIAIKHDFCLN)
	{
		return ((::MoleMole::Config::ItemDropEffectSetting*(*)(::System::String*))((::PBYTE)hIl2Cpp + NHNONMCLLPK_GLEOOFICHPD_OFFSET))(HIAIKHDFCLN);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* NJEIACNMJHL()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)())((::PBYTE)hIl2Cpp + NHNONMCLLPK_NJEIACNMJHL_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + NHNONMCLLPK_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}
};
