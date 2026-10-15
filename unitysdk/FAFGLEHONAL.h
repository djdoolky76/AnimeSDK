#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
class FAFGLEHONAL;
namespace RPG::Client { class MatchThreeBoard; }

#define FAFGLEHONAL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1567A640)
#define FAFGLEHONAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1567AC50)
#define FAFGLEHONAL_MIDEKMOCNBK_OFFSET UNITYSDK_OFFSET(0x1567A9E0)
#define FAFGLEHONAL_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1567AC10)
#define FAFGLEHONAL_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1567A6C0)

inline static constexpr unsigned int FAFGLEHONAL_TypeDefinitionIndex = 65896;

	class FAFGLEHONAL : public ::FNIDIOCNBBI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFGLEHONAL_CTOR_OFFSET))(this);
		}

		static ::FAFGLEHONAL* BPLPBPMEODA(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::FAFGLEHONAL*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + FAFGLEHONAL_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFGLEHONAL_ONEXECUTE_OFFSET))(this);
		}

		::System::Void MIDEKMOCNBK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FAFGLEHONAL_MIDEKMOCNBK_OFFSET))(this, a1);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFGLEHONAL_ONCLEAR_OFFSET))(this);
		}

	};
