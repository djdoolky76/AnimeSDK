#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define LMEHKHJKMNC_CTOR_OFFSET UNITYSDK_OFFSET(0xC01C200)

inline static constexpr unsigned int LMEHKHJKMNC_TypeDefinitionIndex = 49984;

	class LMEHKHJKMNC : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* LocalRotEuler; // 0x10
		::System::String* Path; // 0x18
		::Il2CppArray<::System::Single>* LocalPos; // 0x20
		::Il2CppArray<::System::Int32>* SiblingIndices; // 0x28
		::Il2CppArray<::System::Single>* LocalScale; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEHKHJKMNC_CTOR_OFFSET))(this);
		}

	};
