#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Shader; }

#define B56507F27ED89CB8_BD64AAC2D6C1CDB1_OFFSET UNITYSDK_OFFSET(0x413EB70)
#define B56507F27ED89CB8_E6FFCC95791B7633_OFFSET UNITYSDK_OFFSET(0x413EBB0)
#define B56507F27ED89CB8_EBE76574C0747714_OFFSET UNITYSDK_OFFSET(0x413EB30)

inline static constexpr unsigned int B56507F27ED89CB8_TypeDefinitionIndex = 17218;

class B56507F27ED89CB8 : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Object*>* EBE76574C0747714(::System::Type* A288CB28FC2A6DA3)
	{
		return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + B56507F27ED89CB8_EBE76574C0747714_OFFSET))(A288CB28FC2A6DA3);
	}

	static ::UnityEngine::Object* E6FFCC95791B7633(::System::String* EFF983A80A48BB2A, ::System::Type* A8C3D92FA7B1AF39)
	{
		return ((::UnityEngine::Object*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + B56507F27ED89CB8_E6FFCC95791B7633_OFFSET))(EFF983A80A48BB2A, A8C3D92FA7B1AF39);
	}

	static ::UnityEngine::Shader* BD64AAC2D6C1CDB1(::System::String* F79B4D487F303AB2)
	{
		return ((::UnityEngine::Shader*(*)(::System::String*))((::PBYTE)hIl2Cpp + B56507F27ED89CB8_BD64AAC2D6C1CDB1_OFFSET))(F79B4D487F303AB2);
	}
};
