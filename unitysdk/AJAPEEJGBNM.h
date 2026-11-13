#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightTemplateEquipTraitEffect; }
namespace System { class String; }

#define AJAPEEJGBNM_CLGMMGMMENL_OFFSET UNITYSDK_OFFSET(0x19D32930)
#define AJAPEEJGBNM_CTOR_OFFSET UNITYSDK_OFFSET(0x19D32C60)
#define AJAPEEJGBNM_DNKJNPFDHBE_OFFSET UNITYSDK_OFFSET(0x19D32A20)

inline static constexpr unsigned int AJAPEEJGBNM_TypeDefinitionIndex = 66511;

	class AJAPEEJGBNM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJAPEEJGBNM_CTOR_OFFSET))(this);
		}

		::System::Boolean CLGMMGMMENL(::RPG::Client::GridFightEquipItemData* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*, ::System::String*))((::PBYTE)hIl2Cpp + AJAPEEJGBNM_CLGMMGMMENL_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean DNKJNPFDHBE(::RPG::Client::GridFightTemplateEquipTraitEffect* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightTemplateEquipTraitEffect*))((::PBYTE)hIl2Cpp + AJAPEEJGBNM_DNKJNPFDHBE_OFFSET))(a1);
		}

	};
