#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFAOGKGJGPO.h"
namespace RPG::Client { class PlayerModule; }
namespace System { class Object; }

#define FMAPHFIJDBK_CTOR_OFFSET UNITYSDK_OFFSET(0x15844B10)
#define FMAPHFIJDBK_KKKKNGADDHP_OFFSET UNITYSDK_OFFSET(0x15844B20)

inline static constexpr unsigned int FMAPHFIJDBK_TypeDefinitionIndex = 66684;

	class FMAPHFIJDBK : public ::FFAOGKGJGPO
	{
	public:
		::System::Void _ctor(::RPG::Client::PlayerModule* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerModule*))((::PBYTE)hIl2Cpp + FMAPHFIJDBK_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean KKKKNGADDHP(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FMAPHFIJDBK_KKKKNGADDHP_OFFSET))(this, a1);
		}

	};
