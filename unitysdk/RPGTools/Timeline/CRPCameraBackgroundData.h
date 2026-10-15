#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPGTOOLS_TIMELINE_CRPCAMERABACKGROUNDDATA_CFIFPNPICBC_OFFSET UNITYSDK_OFFSET(0xF7450)
#define RPGTOOLS_TIMELINE_CRPCAMERABACKGROUNDDATA_FNHNPFFOPDH_OFFSET UNITYSDK_OFFSET(0xF73E0)
#define RPGTOOLS_TIMELINE_CRPCAMERABACKGROUNDDATA_GIOKIMNFJDP_OFFSET UNITYSDK_OFFSET(0xF7370)
#define RPGTOOLS_TIMELINE_CRPCAMERABACKGROUNDDATA_JDDOLBNGDAO_OFFSET UNITYSDK_OFFSET(0xE8B26E0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CRPCameraBackgroundData_TypeDefinitionIndex = 47882;

	struct alignas(8) CRPCameraBackgroundData
	{
		::System::Boolean Enable; // 0x10
		::System::Byte _padding0[0x3];
		::UnityEngine::Color Color; // 0x14
		::System::Byte _padding1[0x4];
		::System::String* TexturePath; // 0x28
		::UnityEngine::Vector2 Offset; // 0x30
		::System::Single Rotation; // 0x38
		::System::Single Scale; // 0x3C
		::System::Collections::Generic::List_1<::System::String*>* AdditiveActorUniqueNames; // 0x40
		::System::Collections::Generic::List_1<::System::String*>* AdditiveTimelineEffectUniqueNames; // 0x48
		/*
		static ::RPGTools::Timeline::CRPCameraBackgroundData JDDOLBNGDAO()
		{
			return ((::RPGTools::Timeline::CRPCameraBackgroundData(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERABACKGROUNDDATA_JDDOLBNGDAO_OFFSET))();
		}
		*/

		::System::Collections::Generic::List_1<::System::String*>* GIOKIMNFJDP()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERABACKGROUNDDATA_GIOKIMNFJDP_OFFSET))(this);
		}

		::System::Void FNHNPFFOPDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERABACKGROUNDDATA_FNHNPFFOPDH_OFFSET))(this);
		}

		/*
		::System::Void CFIFPNPICBC(::RPGTools::Timeline::CRPCameraBackgroundData a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CRPCameraBackgroundData, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERABACKGROUNDDATA_CFIFPNPICBC_OFFSET))(this, a1, a2);
		}
		*/

	};
}
