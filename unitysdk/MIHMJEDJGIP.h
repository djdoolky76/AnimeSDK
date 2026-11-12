#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }

#define MIHMJEDJGIP_CTOR_OFFSET UNITYSDK_OFFSET(0xC20E2F0)
#define MIHMJEDJGIP_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xC20E620)
#define MIHMJEDJGIP_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xC20E670)
#define MIHMJEDJGIP_LPBJDOMPMNA_OFFSET UNITYSDK_OFFSET(0xC20E310)
#define MIHMJEDJGIP_MOFEJFPCCGN_OFFSET UNITYSDK_OFFSET(0xC20E550)

inline static constexpr unsigned int MIHMJEDJGIP_TypeDefinitionIndex = 67407;

	class MIHMJEDJGIP : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTrait* ENFAMOIAMGL; // 0x10
		::System::UInt32 HMNGEJKAGJD; // 0x18
		::System::UInt32 HCABNNKKNLP; // 0x1C
		// static const ::System::Object JJLIIOMACLN; // 0x0
		// static const ::System::Object MOFNCHOGHFC; // 0x0
		::System::Void _ctor(::Il2CppArray<::System::UInt32>* a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + MIHMJEDJGIP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean LPBJDOMPMNA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHMJEDJGIP_LPBJDOMPMNA_OFFSET))(this);
		}

		::System::Boolean MOFEJFPCCGN(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + MIHMJEDJGIP_MOFEJFPCCGN_OFFSET))(this, a1);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHMJEDJGIP_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHMJEDJGIP_GET_ISSHOW_OFFSET))(this);
		}

	};
