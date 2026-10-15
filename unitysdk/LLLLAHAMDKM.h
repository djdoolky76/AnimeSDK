#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ElfBehaviorStateType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define LLLLAHAMDKM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C910970)
#define LLLLAHAMDKM_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0x1C9106F0)
#define LLLLAHAMDKM_GKMDJFIGIID_OFFSET UNITYSDK_OFFSET(0x1C9108F0)

inline static constexpr unsigned int LLLLAHAMDKM_TypeDefinitionIndex = 42107;

	class LLLLAHAMDKM : public ::System::Object
	{
	public:
		::System::String* DOPHFLLNGPJ; // 0x10
		::System::String* KBEPAIAFLHL; // 0x18
		::RPG::GameCore::ElfBehaviorStateType NIKECAGLOCE; // 0x20
		::System::Single KIPAGNCANAJ; // 0x24
		::RPG::Client::TextID MNAIAJJKGNG; // 0x28
		::System::Boolean AEPILOPAFKG; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLLAHAMDKM_CTOR_OFFSET))(this);
		}

		::System::Void DMKJAJLNEBK(::System::String* a1, ::RPG::Client::TextID a2, ::System::String* a3, ::RPG::GameCore::ElfBehaviorStateType a4, ::System::Single a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::TextID, ::System::String*, ::RPG::GameCore::ElfBehaviorStateType, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + LLLLAHAMDKM_DMKJAJLNEBK_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void GKMDJFIGIID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLLAHAMDKM_GKMDJFIGIID_OFFSET))(this);
		}

	};
