#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TaskContext; }

#define FAAEKAHOPFH_JNCEJPDOGDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1565B2B0)

	class FAAEKAHOPFH_JNCEJPDOGDI : public ::System::Object
	{
	public:
		::RPG::GameCore::TaskContext* BKIFMPHBIAK; // 0x10
		::System::Int32 KAPFPAKBGOK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAAEKAHOPFH_JNCEJPDOGDI_CTOR_OFFSET))(this);
		}

	};
