#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client { class BaseGameFlowContext; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HPPIAJEAEOL_CTOR_OFFSET UNITYSDK_OFFSET(0x15DDB350)

inline static constexpr unsigned int HPPIAJEAEOL_TypeDefinitionIndex = 64329;

	class HPPIAJEAEOL : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_2<::RPG::Client::BaseGameFlow*, ::RPG::Client::BaseGameFlowContext*>*>* BBCBMBIGEPH; // 0x10
		::RPG::Client::BaseGameFlow* BEGDKHKENMF; // 0x18
		::System::Void _ctor(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + HPPIAJEAEOL_CTOR_OFFSET))(this, a1);
		}

	};
