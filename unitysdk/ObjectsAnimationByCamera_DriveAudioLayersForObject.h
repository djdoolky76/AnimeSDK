#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define OBJECTSANIMATIONBYCAMERA_DRIVEAUDIOLAYERSFOROBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0xFD98A20)

inline static constexpr unsigned int ObjectsAnimationByCamera_DriveAudioLayersForObject_TypeDefinitionIndex = 38918;

class ObjectsAnimationByCamera_DriveAudioLayersForObject : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* layers; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_DRIVEAUDIOLAYERSFOROBJECT__CTOR_OFFSET))(this);
	}
};
