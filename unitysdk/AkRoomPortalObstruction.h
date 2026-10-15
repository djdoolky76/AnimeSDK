#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkObstructionOcclusion.h"
class AkAudioListener;
class AkRoomPortal;
namespace System { class Object; }
namespace System::Collections::Generic { class KeyValuePair; }

#define AKROOMPORTALOBSTRUCTION_AWAKE_OFFSET UNITYSDK_OFFSET(0x1F5BF450)
#define AKROOMPORTALOBSTRUCTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5BF870)
#define AKROOMPORTALOBSTRUCTION_SETOBSTRUCTIONOCCLUSION_OFFSET UNITYSDK_OFFSET(0x1F5BF660)
#define AKROOMPORTALOBSTRUCTION_UPDATECURRENTLISTENERLIST_OFFSET UNITYSDK_OFFSET(0x1F5BF580)

inline static constexpr unsigned int AkRoomPortalObstruction_TypeDefinitionIndex = 44949;

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

		::System::Void SetObstructionOcclusion(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + AKROOMPORTALOBSTRUCTION_SETOBSTRUCTIONOCCLUSION_OFFSET))(this, a1);
		}

	};
