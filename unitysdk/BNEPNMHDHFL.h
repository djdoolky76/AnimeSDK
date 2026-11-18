#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace Foundation::ViewObject::Donjon { class DonjonFloorObjectBuildContext; }
namespace MoleMole::Config { class ConfigDecorBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BNEPNMHDHFL_APMCKICIGDA_OFFSET UNITYSDK_OFFSET(0x18DACAB0)
#define BNEPNMHDHFL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18DAC700)
#define BNEPNMHDHFL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18DAC1C0)
#define BNEPNMHDHFL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x18DAC760)
#define BNEPNMHDHFL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x18DAC240)
#define BNEPNMHDHFL__CTOR_OFFSET UNITYSDK_OFFSET(0x18DACAA0)

inline static constexpr unsigned int BNEPNMHDHFL_TypeDefinitionIndex = 63556;

class BNEPNMHDHFL : public ::System::Object
{
public:
	::System::String* MFICCJKHMHJ; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDecorBase*>* EHPJKJCJIDE; // 0x18
	::System::Int32 BGMOLEPOCBC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNEPNMHDHFL__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BNEPNMHDHFL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BNEPNMHDHFL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean APMCKICIGDA(::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext* AAOCANGHBDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::Donjon::DonjonFloorObjectBuildContext*))((::PBYTE)hIl2Cpp + BNEPNMHDHFL_APMCKICIGDA_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BNEPNMHDHFL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BNEPNMHDHFL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
