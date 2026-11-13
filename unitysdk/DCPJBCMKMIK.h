#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameAbilityAttributeType.h"
#include "unitysdk/System/Object.h"
class ICLHCMBJDAN;
namespace RPG::GameCore { class BaseLittleGameAbilityEffectConfig; }
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DCPJBCMKMIK_BDDDKINALPG_OFFSET UNITYSDK_OFFSET(0x17728950)
#define DCPJBCMKMIK_CTOR_OFFSET UNITYSDK_OFFSET(0x17729190)
#define DCPJBCMKMIK_HGOCMAKIHBC_OFFSET UNITYSDK_OFFSET(0x17728E40)

inline static constexpr unsigned int DCPJBCMKMIK_TypeDefinitionIndex = 82176;

	class DCPJBCMKMIK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCPJBCMKMIK_CTOR_OFFSET))(this);
		}

		::System::Void BDDDKINALPG(::ICLHCMBJDAN* a1, ::System::Collections::Generic::HashSet_1<::System::Int32>* a2, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ICLHCMBJDAN*, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig*))((::PBYTE)hIl2Cpp + DCPJBCMKMIK_BDDDKINALPG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HGOCMAKIHBC(::ICLHCMBJDAN* a1, ::System::Collections::Generic::HashSet_1<::System::Int32>* a2, ::RPG::GameCore::LittleGameAbilityAttributeType a3, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a4)
		{
			return ((::System::Void(*)(::PVOID, ::ICLHCMBJDAN*, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::RPG::GameCore::LittleGameAbilityAttributeType, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*))((::PBYTE)hIl2Cpp + DCPJBCMKMIK_HGOCMAKIHBC_OFFSET))(this, a1, a2, a3, a4);
		}

	};
