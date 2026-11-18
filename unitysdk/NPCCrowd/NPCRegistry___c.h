#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/NPCRegistryEntry.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NPCCrowd/NPCRegistry_EntryWithDist.h"

namespace System { template <typename T> class Comparison_1; }

#define NPCCROWD_NPCREGISTRY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x114DACE0)
#define NPCCROWD_NPCREGISTRY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x114DAD20)
#define NPCCROWD_NPCREGISTRY___C__GETBACKSTAGEENTRIES_B__30_0_OFFSET UNITYSDK_OFFSET(0x114DAD30)
#define NPCCROWD_NPCREGISTRY___C__GETCULLCANDIDATES_B__32_0_OFFSET UNITYSDK_OFFSET(0x114DADB0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCRegistry___c_TypeDefinitionIndex = 92447;

	class NPCRegistry___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NPCRegistry___c_TypeDefinitionIndex)->GetStaticField(0x4B120);
		}
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__32_0()
		{
			return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(NPCRegistry___c_TypeDefinitionIndex)->GetStaticField(0x4B128);
		}
		static ::System::Comparison_1<::NPCCrowd::NPCRegistryEntry>** StaticGet___9__30_0()
		{
			return (::System::Comparison_1<::NPCCrowd::NPCRegistryEntry>**)Il2CppClass::FromTypeDefinitionIndex(NPCRegistry___c_TypeDefinitionIndex)->GetStaticField(0x4B130);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetBackStageEntries_b__30_0(::NPCCrowd::NPCRegistryEntry a, ::NPCCrowd::NPCRegistryEntry b)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::NPCRegistryEntry, ::NPCCrowd::NPCRegistryEntry))((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY___C__GETBACKSTAGEENTRIES_B__30_0_OFFSET))(this, a, b);
		}

		::System::Int32 _GetCullCandidates_b__32_0(::NPCCrowd::NPCRegistry_EntryWithDist a, ::NPCCrowd::NPCRegistry_EntryWithDist b)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::NPCRegistry_EntryWithDist, ::NPCCrowd::NPCRegistry_EntryWithDist))((::PBYTE)hIl2Cpp + NPCCROWD_NPCREGISTRY___C__GETCULLCANDIDATES_B__32_0_OFFSET))(this, a, b);
		}
	};
}
