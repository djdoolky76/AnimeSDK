#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IEJMFJKDEHJ.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
class KLEFGGIHGMI;
namespace RPG::GameCore { class BlockNodeConfig; }
namespace System { class String; }

#define IKCDBJIKMBH_CTOR_OFFSET UNITYSDK_OFFSET(0x16475360)
#define IKCDBJIKMBH_ONENVOBJENABLE_OFFSET UNITYSDK_OFFSET(0x16475400)
#define IKCDBJIKMBH_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0x164754B0)
#define IKCDBJIKMBH_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x16475580)
#define IKCDBJIKMBH_ONFADING_OFFSET UNITYSDK_OFFSET(0x16475450)
#define IKCDBJIKMBH_RELEASE_OFFSET UNITYSDK_OFFSET(0x164755D0)

inline static constexpr unsigned int IKCDBJIKMBH_TypeDefinitionIndex = 49309;

	class IKCDBJIKMBH : public ::IEJMFJKDEHJ
	{
	public:
		::System::Void _ctor(::System::String* a1, ::System::Boolean a2, ::RPG::GameCore::BlockNodeConfig* a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Int32 a6, ::KLEFGGIHGMI* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::GameCore::BlockNodeConfig*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::KLEFGGIHGMI*))((::PBYTE)hIl2Cpp + IKCDBJIKMBH_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void OnEnvObjEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IKCDBJIKMBH_ONENVOBJENABLE_OFFSET))(this, a1);
		}

		::System::Void OnFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + IKCDBJIKMBH_ONFADING_OFFSET))(this, a1, a2);
		}

		::System::Void OnFadingBegin(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + IKCDBJIKMBH_ONFADINGBEGIN_OFFSET))(this, a1);
		}

		::System::Void OnFadingEnd(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + IKCDBJIKMBH_ONFADINGEND_OFFSET))(this, a1);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCDBJIKMBH_RELEASE_OFFSET))(this);
		}

	};
