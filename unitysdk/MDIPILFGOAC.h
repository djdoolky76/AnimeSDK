#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class OverlayOutlineCollectionConfig; }
namespace MoleMole::Config { class OverlayOutlineConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MDIPILFGOAC_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x159279D0)
#define MDIPILFGOAC_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x15928070)
#define MDIPILFGOAC_EIILEPBAKKD_OFFSET UNITYSDK_OFFSET(0x15927BF0)
#define MDIPILFGOAC_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x15927E90)

inline static constexpr unsigned int MDIPILFGOAC_TypeDefinitionIndex = 75725;

class MDIPILFGOAC : public ::System::Object
{
public:
	static ::MoleMole::Config::OverlayOutlineCollectionConfig** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::OverlayOutlineCollectionConfig**)Il2CppClass::FromTypeDefinitionIndex(MDIPILFGOAC_TypeDefinitionIndex)->GetStaticField(0x385E0);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MDIPILFGOAC_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Boolean EIILEPBAKKD(::System::String* MCOHLHMKLIP, ::MoleMole::Config::OverlayOutlineConfig*& DFMKILICPFB)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::Config::OverlayOutlineConfig*&))((::PBYTE)hIl2Cpp + MDIPILFGOAC_EIILEPBAKKD_OFFSET))(MCOHLHMKLIP, DFMKILICPFB);
	}

	static ::MoleMole::Config::OverlayOutlineCollectionConfig* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::OverlayOutlineCollectionConfig*(*)())((::PBYTE)hIl2Cpp + MDIPILFGOAC_KGNEJKNNODJ_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single OGKEBCPEPED, ::System::Action_1<::System::Single>* HAAJELGELCC, ::System::Action_1<::System::String*>* NPFIONPDFED, ::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MDIPILFGOAC_DGMLFELCAIO_OFFSET))(OGKEBCPEPED, HAAJELGELCC, NPFIONPDFED, HIAIKHDFCLN);
	}
};
