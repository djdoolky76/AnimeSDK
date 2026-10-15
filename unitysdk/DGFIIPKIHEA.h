#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJIGMBHENE.h"
#include "unitysdk/RPG/Client/TextID.h"

#define DGFIIPKIHEA_CTOR_OFFSET UNITYSDK_OFFSET(0xE846210)
#define DGFIIPKIHEA_NPJGONHMEOD_OFFSET UNITYSDK_OFFSET(0xE846230)

	class DGFIIPKIHEA : public ::HDJIGMBHENE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGFIIPKIHEA_CTOR_OFFSET))(this);
		}

		::RPG::Client::TextID NPJGONHMEOD()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + DGFIIPKIHEA_NPJGONHMEOD_OFFSET))(this);
		}

	};
