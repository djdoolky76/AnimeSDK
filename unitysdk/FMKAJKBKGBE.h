#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSurfVehicle; }
namespace MoleMole::Config { class MonoSurfConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FMKAJKBKGBE_CCGLEFMABEA_OFFSET UNITYSDK_OFFSET(0x156CC8C0)
#define FMKAJKBKGBE_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x156CC640)
#define FMKAJKBKGBE_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x156CCB60)
#define FMKAJKBKGBE_HDLGEDBNEIP_OFFSET UNITYSDK_OFFSET(0x156CC870)
#define FMKAJKBKGBE_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x156CC910)
#define FMKAJKBKGBE__CTOR_OFFSET UNITYSDK_OFFSET(0x156CC630)

inline static constexpr unsigned int FMKAJKBKGBE_TypeDefinitionIndex = 90971;

class FMKAJKBKGBE : public ::System::Object
{
public:
	static ::MoleMole::Config::MonoSurfConfig** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::MonoSurfConfig**)Il2CppClass::FromTypeDefinitionIndex(FMKAJKBKGBE_TypeDefinitionIndex)->GetStaticField(0x3AD30);
	}
	static ::System::Boolean* StaticGet_IGEBMMPDKJI()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FMKAJKBKGBE_TypeDefinitionIndex)->GetStaticField(0xD870);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKAJKBKGBE__CTOR_OFFSET))(this);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + FMKAJKBKGBE_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void HDLGEDBNEIP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMKAJKBKGBE_HDLGEDBNEIP_OFFSET))();
	}

	static ::System::Void CCGLEFMABEA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMKAJKBKGBE_CCGLEFMABEA_OFFSET))();
	}

	static ::MoleMole::Config::ConfigSurfVehicle* KGNEJKNNODJ(::System::String* MGMDLMBEDJF)
	{
		return ((::MoleMole::Config::ConfigSurfVehicle*(*)(::System::String*))((::PBYTE)hIl2Cpp + FMKAJKBKGBE_KGNEJKNNODJ_OFFSET))(MGMDLMBEDJF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + FMKAJKBKGBE_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
