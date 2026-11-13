#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightTrait; }

#define CDCEDEEBDDA_CTOR_OFFSET UNITYSDK_OFFSET(0x173A9430)
#define CDCEDEEBDDA_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x173A96E0)
#define CDCEDEEBDDA_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x173A9730)
#define CDCEDEEBDDA_LPBJDOMPMNA_OFFSET UNITYSDK_OFFSET(0x173A9450)

inline static constexpr unsigned int CDCEDEEBDDA_TypeDefinitionIndex = 67395;

	class CDCEDEEBDDA : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTrait* ENFAMOIAMGL; // 0x10
		::System::UInt32 HCABNNKKNLP; // 0x18
		::System::UInt32 MFECFKKKNEJ; // 0x1C
		::System::Void _ctor(::Il2CppArray<::System::UInt32>* a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + CDCEDEEBDDA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean LPBJDOMPMNA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCEDEEBDDA_LPBJDOMPMNA_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCEDEEBDDA_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCEDEEBDDA_GET_ISSHOW_OFFSET))(this);
		}

	};
