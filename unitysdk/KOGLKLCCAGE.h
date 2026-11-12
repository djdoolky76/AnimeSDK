#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class FateGameData; }
namespace System { class String; }

#define KOGLKLCCAGE_CTOR_OFFSET UNITYSDK_OFFSET(0xBDE93F0)
#define KOGLKLCCAGE_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xBDE93A0)

inline static constexpr unsigned int KOGLKLCCAGE_TypeDefinitionIndex = 65440;

	class KOGLKLCCAGE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOGLKLCCAGE_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF(::Il2CppArray<::System::String*>* a1, ::RPG::Client::FateGameData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::RPG::Client::FateGameData*))((::PBYTE)hIl2Cpp + KOGLKLCCAGE_JJNFOPNOPBF_OFFSET))(this, a1, a2);
		}

	};
