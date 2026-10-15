#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/MiniGameEventReason.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T> class Action_1; }

#define EDNFOIODAHO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA33590)
#define EDNFOIODAHO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA335E0)

inline static constexpr unsigned int EDNFOIODAHO_TypeDefinitionIndex = 43383;

	class EDNFOIODAHO : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::Client::LittleGame::FiveDim::MiniGameEventReason>* CMIFLIMCPBO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDNFOIODAHO_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDNFOIODAHO_CLEAR_OFFSET))(this);
		}

	};
