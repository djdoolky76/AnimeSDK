#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Entitas { class IEntity; }

#define AGAEEKDKGBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5567E0)
#define AGAEEKDKGBN_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1C556790)

inline static constexpr unsigned int AGAEEKDKGBN_TypeDefinitionIndex = 36925;

	class AGAEEKDKGBN : public ::System::Object
	{
	public:
		::Entitas::IEntity* ANOLHDEJDJA; // 0x10
		::System::Int32 CEGOPEIKDLA; // 0x18
		::System::Int32 DDAICPFIOJF; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAEEKDKGBN_CTOR_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGAEEKDKGBN_PJPFIHFAHGO_OFFSET))(this);
		}

	};
