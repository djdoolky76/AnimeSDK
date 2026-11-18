#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigOnGoingTypeDurationData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FJPNJGFGABL_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x156C1C20)
#define FJPNJGFGABL_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x156C1B30)
#define FJPNJGFGABL_OOCNMINHDCA_OFFSET UNITYSDK_OFFSET(0x156C2110)
#define FJPNJGFGABL__CTOR_OFFSET UNITYSDK_OFFSET(0x156C1B20)

inline static constexpr unsigned int FJPNJGFGABL_TypeDefinitionIndex = 49427;

class FJPNJGFGABL : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigOnGoingTypeDurationData** StaticGet_DFMKILICPFB()
	{
		return (::MoleMole::Config::ConfigOnGoingTypeDurationData**)Il2CppClass::FromTypeDefinitionIndex(FJPNJGFGABL_TypeDefinitionIndex)->GetStaticField(0x434F0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJPNJGFGABL__CTOR_OFFSET))(this);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + FJPNJGFGABL_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + FJPNJGFGABL_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void OOCNMINHDCA(::System::Int32& KIADGHJNLAC, ::System::Int32& KHMMANBNPII)
	{
		return ((::System::Void(*)(::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + FJPNJGFGABL_OOCNMINHDCA_OFFSET))(KIADGHJNLAC, KHMMANBNPII);
	}
};
