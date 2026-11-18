#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOLKBAIGBFN.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGoalPath; }
namespace MoleMole::Config { class GoalPathTypeConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CCNCBBEBODC_ACFPCMAPGFE_OFFSET UNITYSDK_OFFSET(0x159B3EB0)
#define CCNCBBEBODC_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x159B3BA0)
#define CCNCBBEBODC_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x159B3DC0)
#define CCNCBBEBODC_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x159B4140)

inline static constexpr unsigned int CCNCBBEBODC_TypeDefinitionIndex = 87606;

class CCNCBBEBODC : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigGoalPath** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigGoalPath**)Il2CppClass::FromTypeDefinitionIndex(CCNCBBEBODC_TypeDefinitionIndex)->GetStaticField(0x49800);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CCNCBBEBODC_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single OGKEBCPEPED, ::System::Action_1<::System::Single>* HAAJELGELCC, ::System::Action_1<::System::String*>* NPFIONPDFED, ::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CCNCBBEBODC_DGMLFELCAIO_OFFSET))(OGKEBCPEPED, HAAJELGELCC, NPFIONPDFED, HIAIKHDFCLN);
	}

	static ::System::Boolean ACFPCMAPGFE(::AOLKBAIGBFN MCOHLHMKLIP, ::MoleMole::Config::GoalPathTypeConfig*& DFMKILICPFB)
	{
		return ((::System::Boolean(*)(::AOLKBAIGBFN, ::MoleMole::Config::GoalPathTypeConfig*&))((::PBYTE)hIl2Cpp + CCNCBBEBODC_ACFPCMAPGFE_OFFSET))(MCOHLHMKLIP, DFMKILICPFB);
	}

	static ::MoleMole::Config::ConfigGoalPath* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigGoalPath*(*)())((::PBYTE)hIl2Cpp + CCNCBBEBODC_KGNEJKNNODJ_OFFSET))();
	}
};
