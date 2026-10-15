#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIPPLENBUILDERTESTASSET_CTOR_OFFSET UNITYSDK_OFFSET(0x15DF1C60)

inline static constexpr unsigned int HipplenBuilderTestAsset_TypeDefinitionIndex = 47232;

	class HipplenBuilderTestAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* TestLineConfigs; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERTESTASSET_CTOR_OFFSET))(this);
		}

	};
