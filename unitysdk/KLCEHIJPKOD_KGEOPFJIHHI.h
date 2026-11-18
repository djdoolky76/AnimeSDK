#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class KLCEHIJPKOD;
namespace Code::Logic::Data::ScriptObject::SlideRopePattern { class ConfigSlideRopePattern; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define KLCEHIJPKOD_KGEOPFJIHHI_FGDJOAANEHC_OFFSET UNITYSDK_OFFSET(0x176634F0)
#define KLCEHIJPKOD_KGEOPFJIHHI__CTOR_OFFSET UNITYSDK_OFFSET(0x176634E0)

inline static constexpr unsigned int KLCEHIJPKOD_KGEOPFJIHHI_TypeDefinitionIndex = 75291;

class KLCEHIJPKOD_KGEOPFJIHHI : public ::System::Object
{
public:
	::KLCEHIJPKOD* KLHPEBKNIFB; // 0x10
	::Il2CppArray<::Foundation::AssetPath>* JPOGGACGEPO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLCEHIJPKOD_KGEOPFJIHHI__CTOR_OFFSET))(this);
	}

	::System::Void FGDJOAANEHC(::System::Collections::Generic::IEnumerable_1<::Code::Logic::Data::ScriptObject::SlideRopePattern::ConfigSlideRopePattern*>* INBACCBOBDN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Code::Logic::Data::ScriptObject::SlideRopePattern::ConfigSlideRopePattern*>*))((::PBYTE)hIl2Cpp + KLCEHIJPKOD_KGEOPFJIHHI_FGDJOAANEHC_OFFSET))(this, INBACCBOBDN);
	}
};
