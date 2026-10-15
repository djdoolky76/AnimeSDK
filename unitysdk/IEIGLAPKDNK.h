#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/INKMMBKPNMJ.h"
namespace RPG::GameCore { class SpecialBpFeature; }

#define IEIGLAPKDNK_CLEAR_OFFSET UNITYSDK_OFFSET(0x15EF12E0)
#define IEIGLAPKDNK_CTOR_OFFSET UNITYSDK_OFFSET(0x15EF1420)
#define IEIGLAPKDNK_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x15EF13E0)
#define IEIGLAPKDNK_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x15EF1400)
#define IEIGLAPKDNK_KMPKIGLGIMK_OFFSET UNITYSDK_OFFSET(0x15EF1330)
#define IEIGLAPKDNK_NFCMDHJCGBL_OFFSET UNITYSDK_OFFSET(0x15EF1260)
#define IEIGLAPKDNK_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x15EF13F0)
#define IEIGLAPKDNK_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x15EF1410)

inline static constexpr unsigned int IEIGLAPKDNK_TypeDefinitionIndex = 56897;

	class IEIGLAPKDNK : public ::System::Object
	{
	public:
		::RPG::GameCore::SpecialBpFeature* _Config_k__BackingField; // 0x10
		::System::Boolean IDBEBIDMHME; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 _Priority_k__BackingField; // 0x1C
		// static const ::System::String* MOEMFMBKGBA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIGLAPKDNK_CTOR_OFFSET))(this);
		}

		::System::Void NFCMDHJCGBL(::RPG::GameCore::SpecialBpFeature* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpecialBpFeature*))((::PBYTE)hIl2Cpp + IEIGLAPKDNK_NFCMDHJCGBL_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIGLAPKDNK_CLEAR_OFFSET))(this);
		}

		::INKMMBKPNMJ KMPKIGLGIMK()
		{
			return ((::INKMMBKPNMJ(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIGLAPKDNK_KMPKIGLGIMK_OFFSET))(this);
		}

		::RPG::GameCore::SpecialBpFeature* get_Config()
		{
			return ((::RPG::GameCore::SpecialBpFeature*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIGLAPKDNK_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::SpecialBpFeature* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpecialBpFeature*))((::PBYTE)hIl2Cpp + IEIGLAPKDNK_SET_CONFIG_OFFSET))(this, a1);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIGLAPKDNK_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IEIGLAPKDNK_SET_PRIORITY_OFFSET))(this, a1);
		}

	};
