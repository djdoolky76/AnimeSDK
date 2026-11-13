#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightTrait; }

#define FEFMCGJCMGN_CBENHKLNMPE_OFFSET UNITYSDK_OFFSET(0x1308D500)
#define FEFMCGJCMGN_CTOR_OFFSET UNITYSDK_OFFSET(0x1308D4E0)
#define FEFMCGJCMGN_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1308D650)
#define FEFMCGJCMGN_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x1308D6D0)
#define FEFMCGJCMGN_LPBJDOMPMNA_OFFSET UNITYSDK_OFFSET(0x1308D5F0)

inline static constexpr unsigned int FEFMCGJCMGN_TypeDefinitionIndex = 67402;

	class FEFMCGJCMGN : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTrait* ENFAMOIAMGL; // 0x10
		::System::UInt32 GKEKGFBNNKF; // 0x18
		::System::UInt32 IDBDHGEGDCP; // 0x1C
		::System::Void _ctor(::Il2CppArray<::System::UInt32>* a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + FEFMCGJCMGN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 CBENHKLNMPE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFMCGJCMGN_CBENHKLNMPE_OFFSET))(this);
		}

		::System::Boolean LPBJDOMPMNA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFMCGJCMGN_LPBJDOMPMNA_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFMCGJCMGN_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFMCGJCMGN_GET_ISSHOW_OFFSET))(this);
		}

	};
