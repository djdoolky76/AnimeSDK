#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IEIIGGKKALK_CTOR_OFFSET UNITYSDK_OFFSET(0x15EFD550)
#define IEIIGGKKALK_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x15EFD5D0)
#define IEIIGGKKALK_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x15EFD560)

inline static constexpr unsigned int IEIIGGKKALK_TypeDefinitionIndex = 67059;

	class IEIIGGKKALK : public ::System::Object
	{
	public:
		::System::UInt32 _AvatarID_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IEIIGGKKALK_CTOR_OFFSET))(this, a1);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIIGGKKALK_TRIGGERACTION_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIIGGKKALK_GET_AVATARID_OFFSET))(this);
		}

	};
