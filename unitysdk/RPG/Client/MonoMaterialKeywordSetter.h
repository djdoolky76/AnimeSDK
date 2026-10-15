#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOMATERIALKEYWORDSETTER_CTOR_OFFSET UNITYSDK_OFFSET(0xD8435C0)
#define RPG_CLIENT_MONOMATERIALKEYWORDSETTER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD8433E0)
#define RPG_CLIENT_MONOMATERIALKEYWORDSETTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD843340)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoMaterialKeywordSetter_TypeDefinitionIndex = 71050;

	class MonoMaterialKeywordSetter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Material* material; // 0x18
		::System::String* keywordName0; // 0x20
		::System::Boolean keywordState0; // 0x28
		::System::Byte _padding0[0x7];
		::System::String* keywordName1; // 0x30
		::System::Boolean keywordState1; // 0x38
		::System::Byte _padding1[0x7];
		::System::String* intName0; // 0x40
		::System::Int32 intValue0; // 0x48
		::System::Byte _padding2[0x4];
		::UnityEngine::Renderer* OMPBEGMFNGM; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMATERIALKEYWORDSETTER_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMATERIALKEYWORDSETTER_ONENABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMATERIALKEYWORDSETTER_LATEUPDATE_OFFSET))(this);
		}

	};
}
