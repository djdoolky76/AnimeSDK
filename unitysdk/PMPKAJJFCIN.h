#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::Client { class GridFightXingChaEquipScore; }
namespace System { class String; }

#define PMPKAJJFCIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCC5A490)
#define PMPKAJJFCIN_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0xCC5A4A0)

inline static constexpr unsigned int PMPKAJJFCIN_TypeDefinitionIndex = 67069;

	class PMPKAJJFCIN : public ::System::Object
	{
	public:
		::RPG::Client::GridFightXingChaEquipScore* OCLDCKAGEDP; // 0x10
		::System::Void _ctor(::RPG::Client::GridFightXingChaEquipScore* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightXingChaEquipScore*))((::PBYTE)hIl2Cpp + PMPKAJJFCIN_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint MNGGAOFNGIP(::System::String* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PMPKAJJFCIN_MNGGAOFNGIP_OFFSET))(this, a1);
		}

	};
