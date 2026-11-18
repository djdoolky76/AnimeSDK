#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGDIGIBOOEFFECT_EFFECTGROUP_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1B452020)
#define MOLEMOLE_CONFIGDIGIBOOEFFECT_EFFECTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B452100)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigDigibooEffect_EffectGroup_TypeDefinitionIndex = 81396;

	class ConfigDigibooEffect_EffectGroup : public ::System::Object
	{
	public:
		::System::Int32 DigibooID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* Description; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* ActionList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDIGIBOOEFFECT_EFFECTGROUP__CTOR_OFFSET))(this);
		}

		::System::Boolean IsMatch(::System::String* searchString)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDIGIBOOEFFECT_EFFECTGROUP_ISMATCH_OFFSET))(this, searchString);
		}
	};
}
