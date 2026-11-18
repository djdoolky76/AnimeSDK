#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class FixedCameraConfig; }
namespace MoleMole::Config { class ConfigFixedCameraEntry; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FPMOBGHMJCH_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x125BAD20)
#define FPMOBGHMJCH_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x125BAC30)
#define FPMOBGHMJCH_DMPFINIJPKD_OFFSET UNITYSDK_OFFSET(0x125BAF30)
#define FPMOBGHMJCH_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x125BAA50)
#define FPMOBGHMJCH__CTOR_OFFSET UNITYSDK_OFFSET(0x125BAA40)

inline static constexpr unsigned int FPMOBGHMJCH_TypeDefinitionIndex = 62127;

class FPMOBGHMJCH : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigFixedCameraEntry** StaticGet_CEJENBBHBBG()
	{
		return (::MoleMole::Config::ConfigFixedCameraEntry**)Il2CppClass::FromTypeDefinitionIndex(FPMOBGHMJCH_TypeDefinitionIndex)->GetStaticField(0x40950);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMOBGHMJCH__CTOR_OFFSET))(this);
	}

	static ::MoleMole::Config::ConfigFixedCameraEntry* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigFixedCameraEntry*(*)())((::PBYTE)hIl2Cpp + FPMOBGHMJCH_KGNEJKNNODJ_OFFSET))();
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + FPMOBGHMJCH_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Cameras::FixedCameraConfig* DMPFINIJPKD(::System::String* IINNHCHKKBP)
	{
		return ((::MoleMole::Cameras::FixedCameraConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + FPMOBGHMJCH_DMPFINIJPKD_OFFSET))(IINNHCHKKBP);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + FPMOBGHMJCH_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}
};
