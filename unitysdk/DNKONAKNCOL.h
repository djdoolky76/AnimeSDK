#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class DACEDJLJOGK;

#define DNKONAKNCOL_CTOR_OFFSET UNITYSDK_OFFSET(0x11FCED40)

inline static constexpr unsigned int DNKONAKNCOL_TypeDefinitionIndex = 81992;

	class DNKONAKNCOL : public ::System::Object
	{
	public:
		::Il2CppArray<::DACEDJLJOGK*>* PGHEGHLPIDH; // 0x10
		::RPG::Client::TextID GBCGKDHLIKO; // 0x18
		::System::UInt32 EHGGOCGBBLJ; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNKONAKNCOL_CTOR_OFFSET))(this);
		}

	};
