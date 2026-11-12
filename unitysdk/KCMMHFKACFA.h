#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
class KCMMHFKACFA;
namespace RPG::Client { class MatchThreeBoard; }

#define KCMMHFKACFA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBBC8920)
#define KCMMHFKACFA_CTOR_OFFSET UNITYSDK_OFFSET(0xBBC8A90)
#define KCMMHFKACFA_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xBBC89A0)
#define KCMMHFKACFA_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xBBC89F0)

inline static constexpr unsigned int KCMMHFKACFA_TypeDefinitionIndex = 67823;

	class KCMMHFKACFA : public ::FNIDIOCNBBI
	{
	public:
		::System::Boolean GNDCCBNILML; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 GACEMBBAGMP; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMMHFKACFA_CTOR_OFFSET))(this);
		}

		static ::KCMMHFKACFA* BPLPBPMEODA(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::KCMMHFKACFA*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + KCMMHFKACFA_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMMHFKACFA_ONCLEAR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMMHFKACFA_ONEXECUTE_OFFSET))(this);
		}

	};
