#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigZipLineMap; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIMKJIEDLIM_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x15E30A70)
#define MIMKJIEDLIM_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x15E30980)
#define MIMKJIEDLIM_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x15E307A0)

inline static constexpr unsigned int MIMKJIEDLIM_TypeDefinitionIndex = 86046;

class MIMKJIEDLIM : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigZipLineMap** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigZipLineMap**)Il2CppClass::FromTypeDefinitionIndex(MIMKJIEDLIM_TypeDefinitionIndex)->GetStaticField(0x50A20);
	}

	static ::MoleMole::Config::ConfigZipLineMap* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigZipLineMap*(*)())((::PBYTE)hIl2Cpp + MIMKJIEDLIM_KGNEJKNNODJ_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIMKJIEDLIM_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MIMKJIEDLIM_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}
};
