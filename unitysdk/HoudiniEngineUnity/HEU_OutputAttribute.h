#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FA78B0257AA80CDE/A677563F5AE8D3D9.h"
#include "unitysdk/FA78B0257AA80CDE/B7D00FE91A088D08.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_OUTPUTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_OutputAttribute_TypeDefinitionIndex = 18049;

	class HEU_OutputAttribute : public ::System::Object
	{
	public:
		::System::String* _name; // 0x10
		::FA78B0257AA80CDE::B7D00FE91A088D08 _class; // 0x18
		::FA78B0257AA80CDE::A677563F5AE8D3D9 _type; // 0x1C
		::System::Int32 _count; // 0x20
		::System::Int32 _tupleSize; // 0x24
		::Il2CppArray<::System::Int32>* _intValues; // 0x28
		::Il2CppArray<::System::Single>* _floatValues; // 0x30
		::Il2CppArray<::System::String*>* _stringValues; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OUTPUTATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
