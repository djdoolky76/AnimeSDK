#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class MainMissionInfoConfig; }
namespace RPG::GameCore { class SubMissionInfoConfig; }
namespace System { class String; }

#define CLPPAMNDKIM_ADBFHPONIBF_OFFSET UNITYSDK_OFFSET(0xDA23E50)
#define CLPPAMNDKIM_CTOR_OFFSET UNITYSDK_OFFSET(0xDA243B0)
#define CLPPAMNDKIM_EMKCDCFEMIP_OFFSET UNITYSDK_OFFSET(0xDA23D10)
#define CLPPAMNDKIM_LACAGFCGGPM_OFFSET UNITYSDK_OFFSET(0xDA23FD0)
#define CLPPAMNDKIM_MPEJHJFNLGB_OFFSET UNITYSDK_OFFSET(0xDA23EF0)

inline static constexpr unsigned int CLPPAMNDKIM_TypeDefinitionIndex = 47704;

	class CLPPAMNDKIM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPPAMNDKIM_CTOR_OFFSET))(this);
		}

		static ::RPG::GameCore::MainMissionInfoConfig* EMKCDCFEMIP(::System::String* a1)
		{
			return ((::RPG::GameCore::MainMissionInfoConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLPPAMNDKIM_EMKCDCFEMIP_OFFSET))(a1);
		}

		static ::RPG::GameCore::MainMissionInfoConfig* ADBFHPONIBF(::System::String* a1)
		{
			return ((::RPG::GameCore::MainMissionInfoConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLPPAMNDKIM_ADBFHPONIBF_OFFSET))(a1);
		}

		static ::System::String* MPEJHJFNLGB(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLPPAMNDKIM_MPEJHJFNLGB_OFFSET))(a1);
		}

		static ::RPG::GameCore::SubMissionInfoConfig* LACAGFCGGPM(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SubMissionInfoConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLPPAMNDKIM_LACAGFCGGPM_OFFSET))(a1);
		}

	};
