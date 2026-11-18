#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class FootPrintConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IDMIMLFPPMN_BKFCGCBAIMO_OFFSET UNITYSDK_OFFSET(0x16567880)
#define IDMIMLFPPMN_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x16567670)
#define IDMIMLFPPMN_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x16567580)
#define IDMIMLFPPMN_KDMGJKHAENF_OFFSET UNITYSDK_OFFSET(0x16567A60)
#define IDMIMLFPPMN_KPCKPLAMGCM_OFFSET UNITYSDK_OFFSET(0x16566AB0)
#define IDMIMLFPPMN_MOBCJOFFMFF_OFFSET UNITYSDK_OFFSET(0x16566C90)
#define IDMIMLFPPMN_POGEHAPKHAJ_OFFSET UNITYSDK_OFFSET(0x16566EC0)

inline static constexpr unsigned int IDMIMLFPPMN_TypeDefinitionIndex = 42816;

class IDMIMLFPPMN : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::MoleMole::Config::FootPrintConfig*>** StaticGet_JIGCHBCHHEG()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Config::FootPrintConfig*>**)Il2CppClass::FromTypeDefinitionIndex(IDMIMLFPPMN_TypeDefinitionIndex)->GetStaticField(0x40DA0);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Config::FootPrintConfig*>** StaticGet_CEMFNIHGKJN()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Config::FootPrintConfig*>**)Il2CppClass::FromTypeDefinitionIndex(IDMIMLFPPMN_TypeDefinitionIndex)->GetStaticField(0x40DA8);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::Config::FootPrintConfig*>* KPCKPLAMGCM()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::FootPrintConfig*>*(*)())((::PBYTE)hIl2Cpp + IDMIMLFPPMN_KPCKPLAMGCM_OFFSET))();
	}

	static ::MoleMole::Config::FootPrintConfig* MOBCJOFFMFF(::System::String* OINOPLGMNDE, ::System::String* EEMOPKCLEGM, ::System::String* AEDIILOHKHD, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::MoleMole::Config::FootPrintConfig*(*)(::System::String*, ::System::String*, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + IDMIMLFPPMN_MOBCJOFFMFF_OFFSET))(OINOPLGMNDE, EEMOPKCLEGM, AEDIILOHKHD, KECKGDFIALJ);
	}

	static ::MoleMole::Config::FootPrintConfig* POGEHAPKHAJ(::System::Collections::Generic::List_1<::MoleMole::Config::FootPrintConfig*>* INBACCBOBDN, ::System::String* OINOPLGMNDE, ::System::String* EEMOPKCLEGM, ::System::String* AEDIILOHKHD, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::MoleMole::Config::FootPrintConfig*(*)(::System::Collections::Generic::List_1<::MoleMole::Config::FootPrintConfig*>*, ::System::String*, ::System::String*, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + IDMIMLFPPMN_POGEHAPKHAJ_OFFSET))(INBACCBOBDN, OINOPLGMNDE, EEMOPKCLEGM, AEDIILOHKHD, KECKGDFIALJ);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + IDMIMLFPPMN_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::Config::FootPrintConfig*>* BKFCGCBAIMO()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::FootPrintConfig*>*(*)())((::PBYTE)hIl2Cpp + IDMIMLFPPMN_BKFCGCBAIMO_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + IDMIMLFPPMN_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::Config::FootPrintConfig* KDMGJKHAENF(::System::String* OINOPLGMNDE, ::System::String* EEMOPKCLEGM, ::System::String* AEDIILOHKHD, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::MoleMole::Config::FootPrintConfig*(*)(::System::String*, ::System::String*, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + IDMIMLFPPMN_KDMGJKHAENF_OFFSET))(OINOPLGMNDE, EEMOPKCLEGM, AEDIILOHKHD, KECKGDFIALJ);
	}
};
