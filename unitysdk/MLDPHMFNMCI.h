#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PCODMIJEJEP.h"

class CIJKMEDBHMM;
class DIFNAMIJCHM;
class NFEPECADMEG;
namespace MoleMole { class ClientSceneObjectStateLooperConfigBase; }
namespace MoleMole { class SceneObjectStateWidget; }
namespace System { template <typename T> class Action_1; }

#define MLDPHMFNMCI_DHFHFJPLPAH_OFFSET UNITYSDK_OFFSET(0x14D8C4B0)
#define MLDPHMFNMCI_EICBMDMNABJ_OFFSET UNITYSDK_OFFSET(0x14D8C4C0)
#define MLDPHMFNMCI_MCCKNFCDAOL_OFFSET UNITYSDK_OFFSET(0x14D8C020)
#define MLDPHMFNMCI_NHPFKAGMOGC_OFFSET UNITYSDK_OFFSET(0x14D8C3A0)

inline static constexpr unsigned int MLDPHMFNMCI_TypeDefinitionIndex = 75993;

class MLDPHMFNMCI : public ::System::Object
{
public:
	static ::System::Int32* StaticGet__PJDKKCLHAMG_k__BackingField()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MLDPHMFNMCI_TypeDefinitionIndex)->GetStaticField(0x127C0);
	}

	static ::DIFNAMIJCHM* MCCKNFCDAOL(::CIJKMEDBHMM* LJBPECKCCEA, ::MoleMole::SceneObjectStateWidget* GADOMGLJNNJ, ::System::Action_1<::PCODMIJEJEP>* IGAAKDOIPNN)
	{
		return ((::DIFNAMIJCHM*(*)(::CIJKMEDBHMM*, ::MoleMole::SceneObjectStateWidget*, ::System::Action_1<::PCODMIJEJEP>*))((::PBYTE)hIl2Cpp + MLDPHMFNMCI_MCCKNFCDAOL_OFFSET))(LJBPECKCCEA, GADOMGLJNNJ, IGAAKDOIPNN);
	}

	static ::NFEPECADMEG* NHPFKAGMOGC(::MoleMole::ClientSceneObjectStateLooperConfigBase* DFMKILICPFB)
	{
		return ((::NFEPECADMEG*(*)(::MoleMole::ClientSceneObjectStateLooperConfigBase*))((::PBYTE)hIl2Cpp + MLDPHMFNMCI_NHPFKAGMOGC_OFFSET))(DFMKILICPFB);
	}

	static ::System::Int32 DHFHFJPLPAH()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MLDPHMFNMCI_DHFHFJPLPAH_OFFSET))();
	}

	static ::System::Void EICBMDMNABJ(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MLDPHMFNMCI_EICBMDMNABJ_OFFSET))(EGEGIMGMJHN);
	}
};
