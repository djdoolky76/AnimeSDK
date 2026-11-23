#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_HandleParamBinding_FC5ABBFD6081AD66.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_HANDLEPARAMBINDING_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x387EF90)
#define HOUDINIENGINEUNITY_HEU_HANDLEPARAMBINDING__CTOR_OFFSET UNITYSDK_OFFSET(0x387F1A0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_HandleParamBinding_TypeDefinitionIndex = 18101;

	class HEU_HandleParamBinding : public ::System::Object
	{
	public:
		::HoudiniEngineUnity::HEU_HandleParamBinding_FC5ABBFD6081AD66 _paramType; // 0x10
		::System::Int32 _parmID; // 0x14
		::System::String* _paramName; // 0x18
		::System::Boolean _bDisabled; // 0x20
		::System::Byte _padding0[0x7];
		::Il2CppArray<::System::Boolean>* _boundChannels; // 0x28

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::HEU_HandleParamBinding* BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_HandleParamBinding*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLEPARAMBINDING_ISEQUIVALENTTO_OFFSET))(this, BEEE7A5A60941632);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HANDLEPARAMBINDING__CTOR_OFFSET))(this);
		}
	};
}
