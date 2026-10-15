#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class DACEDJLJOGK;

#define DNKONAKNCOL_CTOR_OFFSET UNITYSDK_OFFSET(0x11FD4170)

	class DNKONAKNCOL : public ::System::Object
	{
	public:
		::Il2CppArray<::DACEDJLJOGK*>* PGHEGHLPIDH; // 0x10
		::System::UInt32 EHGGOCGBBLJ; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID GBCGKDHLIKO; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNKONAKNCOL_CTOR_OFFSET))(this);
		}

	};
