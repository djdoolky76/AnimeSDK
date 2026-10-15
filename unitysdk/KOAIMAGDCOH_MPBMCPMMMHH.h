#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class SceneTVMenuDataRow; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }

#define KOAIMAGDCOH_MPBMCPMMMHH_CTOR_OFFSET UNITYSDK_OFFSET(0xB5867D0)

inline static constexpr unsigned int KOAIMAGDCOH_MPBMCPMMMHH_TypeDefinitionIndex = 68806;

	class KOAIMAGDCOH_MPBMCPMMMHH : public ::System::Object
	{
	public:
		::RPG::GameCore::SceneTVMenuDataRow* EABKOHGCHFP; // 0x10
		::UnityEngine::Texture2D* AACBKNJEJNC; // 0x18
		::System::String* CLOPOKOLDFO; // 0x20
		::System::Int32 FPMKMOEOCHF; // 0x28
		::System::Boolean JKCIODIHMNC; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_MPBMCPMMMHH_CTOR_OFFSET))(this);
		}

	};
