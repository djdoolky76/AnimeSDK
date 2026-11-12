#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
class BDKJMIOMPDE;
namespace RPG::Client { class MatchThreeBoard; }

#define BDKJMIOMPDE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x170C4970)
#define BDKJMIOMPDE_CTOR_OFFSET UNITYSDK_OFFSET(0x170C4AA0)
#define BDKJMIOMPDE_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x170C49F0)
#define BDKJMIOMPDE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x170C4A30)

inline static constexpr unsigned int BDKJMIOMPDE_TypeDefinitionIndex = 67803;

	class BDKJMIOMPDE : public ::FNIDIOCNBBI
	{
	public:
		::System::Boolean DMHJINGNBIH; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKJMIOMPDE_CTOR_OFFSET))(this);
		}

		static ::BDKJMIOMPDE* BPLPBPMEODA(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::BDKJMIOMPDE*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + BDKJMIOMPDE_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKJMIOMPDE_ONCLEAR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKJMIOMPDE_ONEXECUTE_OFFSET))(this);
		}

	};
