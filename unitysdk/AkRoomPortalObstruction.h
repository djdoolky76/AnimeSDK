#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkObstructionOcclusion.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
class AkAudioListener;
class AkRoomPortal;
namespace System { class Object; }

#define AKROOMPORTALOBSTRUCTION_AWAKE_OFFSET UNITYSDK_OFFSET(0x1F321FE0)
#define AKROOMPORTALOBSTRUCTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1F322400)
#define AKROOMPORTALOBSTRUCTION_SETOBSTRUCTIONOCCLUSION_OFFSET UNITYSDK_OFFSET(0x1F3221F0)
#define AKROOMPORTALOBSTRUCTION_UPDATECURRENTLISTENERLIST_OFFSET UNITYSDK_OFFSET(0x1F322110)

inline static constexpr unsigned int AkRoomPortalObstruction_TypeDefinitionIndex = 46024;

	class AkRoomPortalObstruction : public ::AkObstructionOcclusion
	{
	public:
		::AkRoomPortal* m_portal; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTALOBSTRUCTION_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTALOBSTRUCTION_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateCurrentListenerList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTALOBSTRUCTION_UPDATECURRENTLISTENERLIST_OFFSET))(this);
		}

		::System::Void SetObstructionOcclusion(::System::Collections::Generic::KeyValuePair_2<::AkAudioListener*, ::System::Object*> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::AkAudioListener*, ::System::Object*>))((::PBYTE)hIl2Cpp + AKROOMPORTALOBSTRUCTION_SETOBSTRUCTIONOCCLUSION_OFFSET))(this, a1);
		}

	};
