#pragma once
#include "unitysdk/unitysdk.h"
class JNHAGNDEMNJ;
namespace RPG::GameCore { class TaskContext; }

#define HGOLCJHKLPN_CTOR_OFFSET UNITYSDK_OFFSET(0x15CB3060)
#define HGOLCJHKLPN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CB3090)

	class HGOLCJHKLPN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JNHAGNDEMNJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JNHAGNDEMNJ*))((::PBYTE)hIl2Cpp + HGOLCJHKLPN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGOLCJHKLPN_ONTASKBEGIN_OFFSET))(this);
		}

	};
