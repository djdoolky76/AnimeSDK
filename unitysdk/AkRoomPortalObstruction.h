#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkObstructionOcclusion.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class AkAudioListener;
class AkRoomPortal;
namespace System { class Object; }

#define AKROOMPORTALOBSTRUCTION_B6216BB8C124875A_OFFSET UNITYSDK_OFFSET(0x291E160)
#define AKROOMPORTALOBSTRUCTION_F7566C3648EB8944_OFFSET UNITYSDK_OFFSET(0x291E220)
#define AKROOMPORTALOBSTRUCTION_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x291E0D0)
#define AKROOMPORTALOBSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x2916400)

inline static constexpr unsigned int AkRoomPortalObstruction_TypeDefinitionIndex = 20444;

class AkRoomPortalObstruction : public ::AkObstructionOcclusion
{
public:
	::AkRoomPortal* E1BF5232C525C1A9; // 0x50

	::System::Void F7566C3648EB8944()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTALOBSTRUCTION_F7566C3648EB8944_OFFSET))(this);
	}

	::System::Void B6216BB8C124875A(::System::Collections::Generic::KeyValuePair_2<::AkAudioListener*, ::System::Object*> ACD8048FE35C23A4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::AkAudioListener*, ::System::Object*>))((::PBYTE)hIl2Cpp + AKROOMPORTALOBSTRUCTION_B6216BB8C124875A_OFFSET))(this, ACD8048FE35C23A4);
	}

	::System::Void FDBCDBBFE02CD51A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTALOBSTRUCTION_FDBCDBBFE02CD51A_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMPORTALOBSTRUCTION__CTOR_OFFSET))(this);
	}
};
