#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigPinball; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BBMPNNCEKEP_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x113D2C60)
#define BBMPNNCEKEP_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x113D32E0)
#define BBMPNNCEKEP_ENIAFKKBBPI_OFFSET UNITYSDK_OFFSET(0x113D3020)
#define BBMPNNCEKEP_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x113D2A80)

inline static constexpr unsigned int BBMPNNCEKEP_TypeDefinitionIndex = 79584;

class BBMPNNCEKEP : public ::System::Object
{
public:
	static ::MoleMole::ConfigPinball** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::ConfigPinball**)Il2CppClass::FromTypeDefinitionIndex(BBMPNNCEKEP_TypeDefinitionIndex)->GetStaticField(0x3A3E0);
	}

	static ::MoleMole::ConfigPinball* KGNEJKNNODJ()
	{
		return ((::MoleMole::ConfigPinball*(*)())((::PBYTE)hIl2Cpp + BBMPNNCEKEP_KGNEJKNNODJ_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + BBMPNNCEKEP_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::MoleMole::ConfigPinball* ENIAFKKBBPI()
	{
		return ((::MoleMole::ConfigPinball*(*)())((::PBYTE)hIl2Cpp + BBMPNNCEKEP_ENIAFKKBBPI_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + BBMPNNCEKEP_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
