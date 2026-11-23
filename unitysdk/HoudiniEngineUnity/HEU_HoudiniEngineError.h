#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_HOUDINIENGINEERROR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17919E0)
#define HOUDINIENGINEUNITY_HEU_HOUDINIENGINEERROR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x38989F0)
#define HOUDINIENGINEUNITY_HEU_HOUDINIENGINEERROR__CTOR_OFFSET UNITYSDK_OFFSET(0x3898A90)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_HoudiniEngineError_TypeDefinitionIndex = 18161;

	class HEU_HoudiniEngineError : public ::System::Exception
	{
	public:
		::System::String* _errorMsg; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIENGINEERROR__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* E64052930079A4EB)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIENGINEERROR__CTOR_1_OFFSET))(this, E64052930079A4EB);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_HOUDINIENGINEERROR_TOSTRING_OFFSET))(this);
		}
	};
}
