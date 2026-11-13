#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class SomatoCommonCameraConfig; }

#define PFBOPCJOKDO_CTOR_OFFSET UNITYSDK_OFFSET(0x16D75460)

inline static constexpr unsigned int PFBOPCJOKDO_TypeDefinitionIndex = 57710;

	class PFBOPCJOKDO : public ::System::Object
	{
	public:
		::RPG::GameCore::SomatoCommonCameraConfig* MHDMKLFLCCB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFBOPCJOKDO_CTOR_OFFSET))(this);
		}

	};
