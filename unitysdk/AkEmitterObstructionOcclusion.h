#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkObstructionOcclusion.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class AkAudioListener;
class AkGameObj;
namespace System { class Object; }

#define AKEMITTEROBSTRUCTIONOCCLUSION_AWAKE_OFFSET UNITYSDK_OFFSET(0x1FDD42E0)
#define AKEMITTEROBSTRUCTIONOCCLUSION_SETOBSTRUCTIONOCCLUSION_OFFSET UNITYSDK_OFFSET(0x1FDD4760)
#define AKEMITTEROBSTRUCTIONOCCLUSION_UPDATECURRENTLISTENERLIST_OFFSET UNITYSDK_OFFSET(0x1FDD43A0)
#define AKEMITTEROBSTRUCTIONOCCLUSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDD4A10)

inline static constexpr unsigned int AkEmitterObstructionOcclusion_TypeDefinitionIndex = 33320;

class AkEmitterObstructionOcclusion : public ::AkObstructionOcclusion
{
public:
	::AkGameObj* m_gameObj; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEMITTEROBSTRUCTIONOCCLUSION__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEMITTEROBSTRUCTIONOCCLUSION_AWAKE_OFFSET))(this);
	}

	::System::Void UpdateCurrentListenerList()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEMITTEROBSTRUCTIONOCCLUSION_UPDATECURRENTLISTENERLIST_OFFSET))(this);
	}

	::System::Void SetObstructionOcclusion(::System::Collections::Generic::KeyValuePair_2<::AkAudioListener*, ::System::Object*> ObsOccPair)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::AkAudioListener*, ::System::Object*>))((::PBYTE)hIl2Cpp + AKEMITTEROBSTRUCTIONOCCLUSION_SETOBSTRUCTIONOCCLUSION_OFFSET))(this, ObsOccPair);
	}
};
