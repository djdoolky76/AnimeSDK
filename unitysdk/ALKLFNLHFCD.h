#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }

#define ALKLFNLHFCD_CTOR_OFFSET UNITYSDK_OFFSET(0x163DDA20)
#define ALKLFNLHFCD_EBAHMLMBBNH_OFFSET UNITYSDK_OFFSET(0x163DDD00)
#define ALKLFNLHFCD_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x163DDDF0)
#define ALKLFNLHFCD_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x163DDE40)
#define ALKLFNLHFCD_LPBJDOMPMNA_OFFSET UNITYSDK_OFFSET(0x163DDA40)

inline static constexpr unsigned int ALKLFNLHFCD_TypeDefinitionIndex = 67393;

	class ALKLFNLHFCD : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTrait* ENFAMOIAMGL; // 0x10
		::System::UInt32 MFECFKKKNEJ; // 0x18
		::System::UInt32 GJOKKELANBJ; // 0x1C
		::System::Void _ctor(::Il2CppArray<::System::UInt32>* a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + ALKLFNLHFCD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean LPBJDOMPMNA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKLFNLHFCD_LPBJDOMPMNA_OFFSET))(this);
		}

		::System::Boolean EBAHMLMBBNH(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + ALKLFNLHFCD_EBAHMLMBBNH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKLFNLHFCD_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKLFNLHFCD_GET_ISSHOW_OFFSET))(this);
		}

	};
