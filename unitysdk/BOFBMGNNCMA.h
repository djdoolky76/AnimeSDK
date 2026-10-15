#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeSpeakerPolicy.h"
#include "unitysdk/RPG/GameCore/CakeValidAreaType.h"
#include "unitysdk/System/Object.h"
class FDPOCBGDLGA;

#define BOFBMGNNCMA_CTOR_OFFSET UNITYSDK_OFFSET(0xC18F9C0)
#define BOFBMGNNCMA_GET_DIALOGUEIDS_OFFSET UNITYSDK_OFFSET(0xC18F9A0)
#define BOFBMGNNCMA_GET_ID_OFFSET UNITYSDK_OFFSET(0xC18F920)
#define BOFBMGNNCMA_GET_REQUIREMENTS_OFFSET UNITYSDK_OFFSET(0xC18F940)
#define BOFBMGNNCMA_GET_SPEAKERPOLICY_OFFSET UNITYSDK_OFFSET(0xC18F980)
#define BOFBMGNNCMA_GET_VALIDAREAS_OFFSET UNITYSDK_OFFSET(0xC18F960)
#define BOFBMGNNCMA_SET_DIALOGUEIDS_OFFSET UNITYSDK_OFFSET(0xC18F9B0)
#define BOFBMGNNCMA_SET_ID_OFFSET UNITYSDK_OFFSET(0xC18F930)
#define BOFBMGNNCMA_SET_REQUIREMENTS_OFFSET UNITYSDK_OFFSET(0xC18F950)
#define BOFBMGNNCMA_SET_SPEAKERPOLICY_OFFSET UNITYSDK_OFFSET(0xC18F990)
#define BOFBMGNNCMA_SET_VALIDAREAS_OFFSET UNITYSDK_OFFSET(0xC18F970)

inline static constexpr unsigned int BOFBMGNNCMA_TypeDefinitionIndex = 62994;

	class BOFBMGNNCMA : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::CakeValidAreaType>* _ValidAreas_k__BackingField; // 0x10
		::Il2CppArray<::System::UInt32>* _DialogueIDs_k__BackingField; // 0x18
		::Il2CppArray<::FDPOCBGDLGA*>* _Requirements_k__BackingField; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x28
		::RPG::GameCore::CakeSpeakerPolicy _SpeakerPolicy_k__BackingField; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFBMGNNCMA_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFBMGNNCMA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BOFBMGNNCMA_SET_ID_OFFSET))(this, a1);
		}

		::Il2CppArray<::FDPOCBGDLGA*>* get_Requirements()
		{
			return ((::Il2CppArray<::FDPOCBGDLGA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFBMGNNCMA_GET_REQUIREMENTS_OFFSET))(this);
		}

		::System::Void set_Requirements(::Il2CppArray<::FDPOCBGDLGA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::FDPOCBGDLGA*>*))((::PBYTE)hIl2Cpp + BOFBMGNNCMA_SET_REQUIREMENTS_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::CakeValidAreaType>* get_ValidAreas()
		{
			return ((::Il2CppArray<::RPG::GameCore::CakeValidAreaType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFBMGNNCMA_GET_VALIDAREAS_OFFSET))(this);
		}

		::System::Void set_ValidAreas(::Il2CppArray<::RPG::GameCore::CakeValidAreaType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::CakeValidAreaType>*))((::PBYTE)hIl2Cpp + BOFBMGNNCMA_SET_VALIDAREAS_OFFSET))(this, a1);
		}

		::RPG::GameCore::CakeSpeakerPolicy get_SpeakerPolicy()
		{
			return ((::RPG::GameCore::CakeSpeakerPolicy(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFBMGNNCMA_GET_SPEAKERPOLICY_OFFSET))(this);
		}

		::System::Void set_SpeakerPolicy(::RPG::GameCore::CakeSpeakerPolicy a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeSpeakerPolicy))((::PBYTE)hIl2Cpp + BOFBMGNNCMA_SET_SPEAKERPOLICY_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_DialogueIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFBMGNNCMA_GET_DIALOGUEIDS_OFFSET))(this);
		}

		::System::Void set_DialogueIDs(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + BOFBMGNNCMA_SET_DIALOGUEIDS_OFFSET))(this, a1);
		}

	};
