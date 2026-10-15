#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNOCOHFFHCP.h"
namespace RPG::GameCore { class PropComponent; }

#define EPGHKIEPJKG_CTOR_OFFSET UNITYSDK_OFFSET(0x155D4A30)
#define EPGHKIEPJKG_GET_ICONID_OFFSET UNITYSDK_OFFSET(0x155D47E0)
#define EPGHKIEPJKG_JNCBEGFKCHF_OFFSET UNITYSDK_OFFSET(0x155D4840)

	class EPGHKIEPJKG : public ::JNOCOHFFHCP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::PropComponent* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + EPGHKIEPJKG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_IconID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPGHKIEPJKG_GET_ICONID_OFFSET))(this);
		}

		::System::Int32 JNCBEGFKCHF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPGHKIEPJKG_JNCBEGFKCHF_OFFSET))(this);
		}

	};
