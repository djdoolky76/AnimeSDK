#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define FMHFNGKMLEH_CATCHITEMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x15858760)

	class FMHFNGKMLEH_CatchItemData : public ::System::Object
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 GroupEntityID; // 0x14
		::System::String* ItemPrefabPath; // 0x18
		::System::Single WaitSeconds; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMHFNGKMLEH_CATCHITEMDATA_CTOR_OFFSET))(this);
		}

	};
