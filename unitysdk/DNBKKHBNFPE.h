#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BlindBox/Pool/PoolClosedReason.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ScheduleData; }

#define DNBKKHBNFPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1193B550)
#define DNBKKHBNFPE_EMMPCNEIFGM_OFFSET UNITYSDK_OFFSET(0x1193B5C0)

inline static constexpr unsigned int DNBKKHBNFPE_TypeDefinitionIndex = 74926;

	class DNBKKHBNFPE : public ::System::Object
	{
	public:
		::RPG::Client::ScheduleData* IIPEDCJJIMN; // 0x10
		::System::Void _ctor(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + DNBKKHBNFPE_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::BlindBox::Pool::PoolClosedReason EMMPCNEIFGM()
		{
			return ((::RPG::Client::BlindBox::Pool::PoolClosedReason(*)(::PVOID))((::PBYTE)hIl2Cpp + DNBKKHBNFPE_EMMPCNEIFGM_OFFSET))(this);
		}

	};
