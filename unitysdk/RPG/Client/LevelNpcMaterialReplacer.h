#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MaterialReplacerBase.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_LEVELNPCMATERIALREPLACER_CHANGENPCMATERIAL_OFFSET UNITYSDK_OFFSET(0x1CEE69B0)
#define RPG_CLIENT_LEVELNPCMATERIALREPLACER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEE6BF0)
#define RPG_CLIENT_LEVELNPCMATERIALREPLACER_NBGHCNNLKPD_OFFSET UNITYSDK_OFFSET(0x1CEE6B60)
#define RPG_CLIENT_LEVELNPCMATERIALREPLACER_REPLACEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1CEE6A00)

namespace RPG::Client
{
	inline static constexpr unsigned int LevelNpcMaterialReplacer_TypeDefinitionIndex = 70991;

	class LevelNpcMaterialReplacer : public ::RPG::Client::MaterialReplacerBase
	{
	public:
		::System::UInt32 NPCID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELNPCMATERIALREPLACER_CTOR_OFFSET))(this);
		}

		::System::Void ChangeNpcMaterial(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELNPCMATERIALREPLACER_CHANGENPCMATERIAL_OFFSET))(this, a1);
		}

		::System::Void ReplaceMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELNPCMATERIALREPLACER_REPLACEMATERIAL_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*> NBGHCNNLKPD()
		{
			return ((::System::ValueTuple_2<::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LEVELNPCMATERIALREPLACER_NBGHCNNLKPD_OFFSET))(this);
		}

	};
}
