#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBIOHKOEMDD_IHPDOPAKDCG;
namespace RPG::AvatarSystem { class IAvatar; }

#define HBIOHKOEMDD___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15C05C20)
#define HBIOHKOEMDD___C__DISPLAYCLASS1_0__SORT_B__0_OFFSET UNITYSDK_OFFSET(0x15C06EB0)

	class HBIOHKOEMDD___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::HBIOHKOEMDD_IHPDOPAKDCG* ctx; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIOHKOEMDD___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Int32 _Sort_b__0(::RPG::AvatarSystem::IAvatar* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + HBIOHKOEMDD___C__DISPLAYCLASS1_0__SORT_B__0_OFFSET))(this, a1, a2);
		}

	};
