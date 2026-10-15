#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class CycleScore; }

#define GAAJIDNDLPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15934040)
#define GAAJIDNDLPJ_KNPLBKEBIHP_OFFSET UNITYSDK_OFFSET(0x15933FA0)

	class GAAJIDNDLPJ : public ::System::Object
	{
	public:
		::RPG::Client::CycleScore* CACDGCHDHJM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAJIDNDLPJ_CTOR_OFFSET))(this);
		}

		::RPG::Client::CycleScore* KNPLBKEBIHP()
		{
			return ((::RPG::Client::CycleScore*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAJIDNDLPJ_KNPLBKEBIHP_OFFSET))(this);
		}

	};
