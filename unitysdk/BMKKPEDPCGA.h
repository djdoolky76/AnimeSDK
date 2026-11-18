#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigViewObjectMisc; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BMKKPEDPCGA_CCGLEFMABEA_OFFSET UNITYSDK_OFFSET(0x1151E1A0)
#define BMKKPEDPCGA_CHMHIHFBENG_OFFSET UNITYSDK_OFFSET(0x1151DC60)
#define BMKKPEDPCGA_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x1151E100)
#define BMKKPEDPCGA_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x1151DFD0)
#define BMKKPEDPCGA_PFNKIBFKFEK_OFFSET UNITYSDK_OFFSET(0x1151E150)
#define BMKKPEDPCGA__CTOR_OFFSET UNITYSDK_OFFSET(0x1151DC50)

inline static constexpr unsigned int BMKKPEDPCGA_TypeDefinitionIndex = 87820;

class BMKKPEDPCGA : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigViewObjectMisc** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigViewObjectMisc**)Il2CppClass::FromTypeDefinitionIndex(BMKKPEDPCGA_TypeDefinitionIndex)->GetStaticField(0x42E80);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMKKPEDPCGA__CTOR_OFFSET))(this);
	}

	static ::System::Void CHMHIHFBENG(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + BMKKPEDPCGA_CHMHIHFBENG_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + BMKKPEDPCGA_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Config::ConfigViewObjectMisc* PFNKIBFKFEK()
	{
		return ((::MoleMole::Config::ConfigViewObjectMisc*(*)())((::PBYTE)hIl2Cpp + BMKKPEDPCGA_PFNKIBFKFEK_OFFSET))();
	}

	static ::System::Void CCGLEFMABEA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMKKPEDPCGA_CCGLEFMABEA_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + BMKKPEDPCGA_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}
};
