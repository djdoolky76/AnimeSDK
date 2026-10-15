#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class FateGameData; }
namespace System { class String; }

#define BOKOBKPEBAP_CTOR_OFFSET UNITYSDK_OFFSET(0xC195060)
#define BOKOBKPEBAP_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xC194E40)

	class BOKOBKPEBAP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOKOBKPEBAP_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF(::Il2CppArray<::System::String*>* a1, ::RPG::Client::FateGameData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::RPG::Client::FateGameData*))((::PBYTE)hIl2Cpp + BOKOBKPEBAP_JJNFOPNOPBF_OFFSET))(this, a1, a2);
		}

	};
