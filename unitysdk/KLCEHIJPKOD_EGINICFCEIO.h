#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class KLCEHIJPKOD;
namespace Code::Logic::Data::ScriptObject::SlideRopePattern { class ConfigSlideRopePattern; }

#define KLCEHIJPKOD_EGINICFCEIO_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x15B99D90)
#define KLCEHIJPKOD_EGINICFCEIO__CTOR_OFFSET UNITYSDK_OFFSET(0x15B99D80)

inline static constexpr unsigned int KLCEHIJPKOD_EGINICFCEIO_TypeDefinitionIndex = 75292;

class KLCEHIJPKOD_EGINICFCEIO : public ::System::Object
{
public:
	::KLCEHIJPKOD* KLHPEBKNIFB; // 0x10
	::Foundation::AssetPath CJBJONJDOLI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLCEHIJPKOD_EGINICFCEIO__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::Code::Logic::Data::ScriptObject::SlideRopePattern::ConfigSlideRopePattern* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::Code::Logic::Data::ScriptObject::SlideRopePattern::ConfigSlideRopePattern*))((::PBYTE)hIl2Cpp + KLCEHIJPKOD_EGINICFCEIO_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
