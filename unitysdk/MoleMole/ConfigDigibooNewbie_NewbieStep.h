#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IENPMGMDGLK.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigDigibooNewbie_HighLightData; }
namespace System { class String; }

#define MOLEMOLE_CONFIGDIGIBOONEWBIE_NEWBIESTEP__CTOR_OFFSET UNITYSDK_OFFSET(0x1279FFF0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigDigibooNewbie_NewbieStep_TypeDefinitionIndex = 64908;

	class ConfigDigibooNewbie_NewbieStep : public ::System::Object
	{
	public:
		::System::String* DescKey; // 0x10
		::IENPMGMDGLK DescAnchor; // 0x18
		::System::Single DescOffset; // 0x1C
		::MoleMole::ConfigDigibooNewbie_HighLightData* HighLightData; // 0x20
		::System::Boolean ShowMask; // 0x28
		::System::Boolean FullSceneClick; // 0x29
		::System::Boolean HighLightClick; // 0x2A
		::System::Byte _padding0[0x1];
		::System::Int32 DelayShowTime; // 0x2C
		::System::Int32 ConditionMatch; // 0x30
		::System::Boolean IsEnd; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDIGIBOONEWBIE_NEWBIESTEP__CTOR_OFFSET))(this);
		}
	};
}
