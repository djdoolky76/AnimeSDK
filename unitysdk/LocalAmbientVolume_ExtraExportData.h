#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define LOCALAMBIENTVOLUME_EXTRAEXPORTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xB83ADC0)

	class LocalAmbientVolume_ExtraExportData : public ::System::Object
	{
	public:
		::System::String* meshPath; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_EXTRAEXPORTDATA_CTOR_OFFSET))(this);
		}

	};
