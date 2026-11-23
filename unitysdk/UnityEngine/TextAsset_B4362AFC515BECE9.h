#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class F8311488A80A8AFC;

#define UNITYENGINE_TEXTASSET_B4362AFC515BECE9__CCTOR_OFFSET UNITYSDK_OFFSET(0x416B4A0)

namespace UnityEngine
{
	inline static constexpr unsigned int TextAsset_B4362AFC515BECE9_TypeDefinitionIndex = 17570;

	class TextAsset_B4362AFC515BECE9 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::Il2CppArray<::System::Byte>*, ::F8311488A80A8AFC*>>** StaticGet_BEE5280596936032()
		{
			return (::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::Il2CppArray<::System::Byte>*, ::F8311488A80A8AFC*>>**)Il2CppClass::FromTypeDefinitionIndex(TextAsset_B4362AFC515BECE9_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::F8311488A80A8AFC** StaticGet_B437A8987AC9636D()
		{
			return (::F8311488A80A8AFC**)Il2CppClass::FromTypeDefinitionIndex(TextAsset_B4362AFC515BECE9_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTASSET_B4362AFC515BECE9__CCTOR_OFFSET))();
		}
	};
}
