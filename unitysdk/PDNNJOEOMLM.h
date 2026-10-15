#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ChenLingFesBuff; }
namespace System { class String; }

#define PDNNJOEOMLM_CTOR_OFFSET UNITYSDK_OFFSET(0xC01A310)

inline static constexpr unsigned int PDNNJOEOMLM_TypeDefinitionIndex = 77710;

	class PDNNJOEOMLM : public ::System::Object
	{
	public:
		::RPG::GameCore::ChenLingFesBuff* HABJHGPFGEB; // 0x10
		::Il2CppArray<::System::Single>* NPHFIJAFHLB; // 0x18
		::System::String* OENAMINOLLF; // 0x20
		::System::String* EOMFOMKCMAK; // 0x28
		::System::Single GAFENHHEBPG; // 0x30
		::System::Int32 DBPLPPBABDP; // 0x34
		::System::Void _ctor(::RPG::GameCore::ChenLingFesBuff* a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesBuff*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + PDNNJOEOMLM_CTOR_OFFSET))(this, a1, a2);
		}

	};
