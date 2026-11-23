#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkObstructionOcclusion.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class AkAudioListener;
class AkGameObj;
namespace System { class Object; }

#define AKEMITTEROBSTRUCTIONOCCLUSION_B6216BB8C124875A_OFFSET UNITYSDK_OFFSET(0x2915FF0)
#define AKEMITTEROBSTRUCTIONOCCLUSION_F7566C3648EB8944_OFFSET UNITYSDK_OFFSET(0x29161E0)
#define AKEMITTEROBSTRUCTIONOCCLUSION_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x2915F60)
#define AKEMITTEROBSTRUCTIONOCCLUSION__CTOR_OFFSET UNITYSDK_OFFSET(0x2916400)

inline static constexpr unsigned int AkEmitterObstructionOcclusion_TypeDefinitionIndex = 20445;

class AkEmitterObstructionOcclusion : public ::AkObstructionOcclusion
{
public:
	::AkGameObj* E729B16B68587938; // 0x50

	::System::Void F7566C3648EB8944()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEMITTEROBSTRUCTIONOCCLUSION_F7566C3648EB8944_OFFSET))(this);
	}

	::System::Void FDBCDBBFE02CD51A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEMITTEROBSTRUCTIONOCCLUSION_FDBCDBBFE02CD51A_OFFSET))(this);
	}

	::System::Void B6216BB8C124875A(::System::Collections::Generic::KeyValuePair_2<::AkAudioListener*, ::System::Object*> ACD8048FE35C23A4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::AkAudioListener*, ::System::Object*>))((::PBYTE)hIl2Cpp + AKEMITTEROBSTRUCTIONOCCLUSION_B6216BB8C124875A_OFFSET))(this, ACD8048FE35C23A4);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEMITTEROBSTRUCTIONOCCLUSION__CTOR_OFFSET))(this);
	}
};
