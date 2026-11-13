#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class SceneTVMenuDataRow; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }

#define KOAIMAGDCOH_MPBMCPMMMHH_CTOR_OFFSET UNITYSDK_OFFSET(0x18FB3530)

inline static constexpr unsigned int KOAIMAGDCOH_MPBMCPMMMHH_TypeDefinitionIndex = 70758;

	class KOAIMAGDCOH_MPBMCPMMMHH : public ::System::Object
	{
	public:
		::UnityEngine::Texture2D* AACBKNJEJNC; // 0x10
		::RPG::GameCore::SceneTVMenuDataRow* EABKOHGCHFP; // 0x18
		::System::String* CLOPOKOLDFO; // 0x20
		::System::Boolean JKCIODIHMNC; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 FPMKMOEOCHF; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIMAGDCOH_MPBMCPMMMHH_CTOR_OFFSET))(this);
		}

	};
