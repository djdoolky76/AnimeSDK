#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define MOLEMOLE_AUDIO_LBEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x19218070)

namespace MoleMole::Audio
{
	inline static constexpr unsigned int LbeAsset_TypeDefinitionIndex = 45781;

	class LbeAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::Il2CppArray<::System::Byte>* data; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AUDIO_LBEASSET__CTOR_OFFSET))(this);
		}
	};
}
