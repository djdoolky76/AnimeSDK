#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
class PHKIDNKGPOH;
namespace System { class String; }

#define PHKIDNKGPOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E728260)
#define PHKIDNKGPOH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E728280)
#define PHKIDNKGPOH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E728210)

inline static constexpr unsigned int PHKIDNKGPOH_TypeDefinitionIndex = 22795;

	class PHKIDNKGPOH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* OJGCIEKNGPM; // 0x18
		::System::Boolean EKGDOELGLFK; // 0x20
		::System::Boolean BMOBAIDLBCC; // 0x21
		::System::Byte _padding0[0x2];
		::RPG::MVector3 NEMDKBKDFDN; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKIDNKGPOH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PHKIDNKGPOH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PHKIDNKGPOH*))((::PBYTE)hIl2Cpp + PHKIDNKGPOH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PHKIDNKGPOH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PHKIDNKGPOH*))((::PBYTE)hIl2Cpp + PHKIDNKGPOH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
