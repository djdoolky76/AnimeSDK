#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKLHNHFCDBL_AEGLMCLGDJA;
namespace RPG::Client { class RogueTournBuildRefHttpDataItem; }

#define DFMJONKENEM_CTOR_OFFSET UNITYSDK_OFFSET(0xE8335E0)
#define DFMJONKENEM_FNCNMCEOALF_OFFSET UNITYSDK_OFFSET(0xE833200)
#define DFMJONKENEM_GGLPLMALONK_OFFSET UNITYSDK_OFFSET(0xE833570)

inline static constexpr unsigned int DFMJONKENEM_TypeDefinitionIndex = 67510;

	class DFMJONKENEM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMJONKENEM_CTOR_OFFSET))(this);
		}

		::RPG::Client::RogueTournBuildRefHttpDataItem* FNCNMCEOALF(::GKLHNHFCDBL_AEGLMCLGDJA* a1)
		{
			return ((::RPG::Client::RogueTournBuildRefHttpDataItem*(*)(::PVOID, ::GKLHNHFCDBL_AEGLMCLGDJA*))((::PBYTE)hIl2Cpp + DFMJONKENEM_FNCNMCEOALF_OFFSET))(this, a1);
		}

		::System::Void GGLPLMALONK(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DFMJONKENEM_GGLPLMALONK_OFFSET))(this, a1, a2, a3);
		}

	};
