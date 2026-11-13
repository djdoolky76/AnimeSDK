#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetCharLightToEntityDir; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define PFAGPGKAHHN_CCTOR_OFFSET UNITYSDK_OFFSET(0x16D6FA20)
#define PFAGPGKAHHN_CTOR_OFFSET UNITYSDK_OFFSET(0x16D6ECE0)
#define PFAGPGKAHHN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16D6ED10)
#define PFAGPGKAHHN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16D6ED50)

inline static constexpr unsigned int PFAGPGKAHHN_TypeDefinitionIndex = 54383;

	class PFAGPGKAHHN
	{
	public:
		static ::System::String** StaticGet_FJFEBMKPGLO()
		{
			return (::System::String**)UnitySDK::FromName("", "PFAGPGKAHHN")->GetStaticField(0x67E70);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharLightToEntityDir* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharLightToEntityDir*))((::PBYTE)hIl2Cpp + PFAGPGKAHHN_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFAGPGKAHHN_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFAGPGKAHHN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFAGPGKAHHN_ONTASKBEGIN_OFFSET))(this);
		}

	};
