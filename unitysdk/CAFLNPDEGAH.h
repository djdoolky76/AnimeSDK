#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigWanderMove; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CAFLNPDEGAH_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x14592120)
#define CAFLNPDEGAH_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x14592030)
#define CAFLNPDEGAH_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x14592340)

inline static constexpr unsigned int CAFLNPDEGAH_TypeDefinitionIndex = 43757;

class CAFLNPDEGAH : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigWanderMove** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigWanderMove**)Il2CppClass::FromTypeDefinitionIndex(CAFLNPDEGAH_TypeDefinitionIndex)->GetStaticField(0x40240);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CAFLNPDEGAH_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CAFLNPDEGAH_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::MoleMole::Config::ConfigWanderMove* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigWanderMove*(*)())((::PBYTE)hIl2Cpp + CAFLNPDEGAH_KGNEJKNNODJ_OFFSET))();
	}
};
