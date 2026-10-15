#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class AbilityPropertyValue; }
namespace System { class String; }

#define PEFKPJNGCMI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D3090)

inline static constexpr unsigned int PEFKPJNGCMI_TypeDefinitionIndex = 15461;

	class PEFKPJNGCMI : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* KPHIIIDGLEB; // 0x10
		::Il2CppArray<::RPG::GameCore::AbilityPropertyValue*>* EABDPMABDHO; // 0x18
		::System::String* KNNCCLDKFGO; // 0x20
		::System::UInt32 DPKHKFBMIKD; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFKPJNGCMI_CTOR_OFFSET))(this);
		}

	};
