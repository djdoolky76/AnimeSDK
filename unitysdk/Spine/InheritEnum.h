#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Inherit.h"
#include "unitysdk/System/Object.h"

#define SPINE_INHERITENUM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE0DCC0)
#define SPINE_INHERITENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE0DCB0)

namespace Spine
{
	inline static constexpr unsigned int InheritEnum_TypeDefinitionIndex = 32983;

	class InheritEnum : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Spine::Inherit>** StaticGet_Values()
		{
			return (::Il2CppArray<::Spine::Inherit>**)Il2CppClass::FromTypeDefinitionIndex(InheritEnum_TypeDefinitionIndex)->GetStaticField(0x29BB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_INHERITENUM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_INHERITENUM__CCTOR_OFFSET))();
		}
	};
}
