#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJIEMKHJEEM.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIVirtualJoystick; }
namespace MoleMole::Config { class ConfigVirtualJoystickParam; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define GBGFFIKLNPH_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x125C1BB0)
#define GBGFFIKLNPH_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x125C1DD0)
#define GBGFFIKLNPH_IMAHGIHDJLP_OFFSET UNITYSDK_OFFSET(0x125C1820)
#define GBGFFIKLNPH_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x125C1640)
#define GBGFFIKLNPH_PIPELALHKOA_OFFSET UNITYSDK_OFFSET(0x125C1EC0)

inline static constexpr unsigned int GBGFFIKLNPH_TypeDefinitionIndex = 41445;

class GBGFFIKLNPH : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigUIVirtualJoystick** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigUIVirtualJoystick**)Il2CppClass::FromTypeDefinitionIndex(GBGFFIKLNPH_TypeDefinitionIndex)->GetStaticField(0x4B960);
	}

	static ::MoleMole::Config::ConfigUIVirtualJoystick* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigUIVirtualJoystick*(*)())((::PBYTE)hIl2Cpp + GBGFFIKLNPH_KGNEJKNNODJ_OFFSET))();
	}

	static ::MoleMole::Config::ConfigVirtualJoystickParam* IMAHGIHDJLP(::AJIEMKHJEEM NNCAOMDCKEP)
	{
		return ((::MoleMole::Config::ConfigVirtualJoystickParam*(*)(::AJIEMKHJEEM))((::PBYTE)hIl2Cpp + GBGFFIKLNPH_IMAHGIHDJLP_OFFSET))(NNCAOMDCKEP);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + GBGFFIKLNPH_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + GBGFFIKLNPH_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Config::ConfigVirtualJoystickParam* PIPELALHKOA(::System::Int32 LNLEMGHIHIG)
	{
		return ((::MoleMole::Config::ConfigVirtualJoystickParam*(*)(::System::Int32))((::PBYTE)hIl2Cpp + GBGFFIKLNPH_PIPELALHKOA_OFFSET))(LNLEMGHIHIG);
	}
};
