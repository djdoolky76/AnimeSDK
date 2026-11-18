#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigBattlePhotoActivity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define DKAODALKHDG_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x183466F0)
#define DKAODALKHDG_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x18346600)
#define DKAODALKHDG_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x18346420)

inline static constexpr unsigned int DKAODALKHDG_TypeDefinitionIndex = 80843;

class DKAODALKHDG : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigBattlePhotoActivity** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigBattlePhotoActivity**)Il2CppClass::FromTypeDefinitionIndex(DKAODALKHDG_TypeDefinitionIndex)->GetStaticField(0x51D80);
	}

	static ::MoleMole::Config::ConfigBattlePhotoActivity* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigBattlePhotoActivity*(*)())((::PBYTE)hIl2Cpp + DKAODALKHDG_KGNEJKNNODJ_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + DKAODALKHDG_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + DKAODALKHDG_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}
};
