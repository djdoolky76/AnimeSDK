#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJIGMBHENE.h"
#include "unitysdk/RPG/Client/TextID.h"

#define DGFIIPKIHEA_CTOR_OFFSET UNITYSDK_OFFSET(0xE83B400)
#define DGFIIPKIHEA_NPJGONHMEOD_OFFSET UNITYSDK_OFFSET(0xE83B420)

inline static constexpr unsigned int DGFIIPKIHEA_TypeDefinitionIndex = 61190;

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
