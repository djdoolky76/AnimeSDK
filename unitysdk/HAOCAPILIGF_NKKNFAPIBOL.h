#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAGGKGFMFPG;
class HAOCAPILIGF_NKKNFAPIBOL;
namespace RPG::GameCore { class GameEntity; }

#define HAOCAPILIGF_NKKNFAPIBOL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15B9DA30)
#define HAOCAPILIGF_NKKNFAPIBOL_CTOR_OFFSET UNITYSDK_OFFSET(0x15B9DAA0)

inline static constexpr unsigned int HAOCAPILIGF_NKKNFAPIBOL_TypeDefinitionIndex = 71805;

	class HAOCAPILIGF_NKKNFAPIBOL : public ::System::Object
	{
	public:
		::GAGGKGFMFPG* HBLFBGPMNJH; // 0x10
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
		::System::Boolean PKLFLANJCDG; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_NKKNFAPIBOL_CTOR_OFFSET))(this);
		}

		static ::HAOCAPILIGF_NKKNFAPIBOL* BPLPBPMEODA(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::GAGGKGFMFPG* a3)
		{
			return ((::HAOCAPILIGF_NKKNFAPIBOL*(*)(::RPG::GameCore::GameEntity*, ::System::Boolean, ::GAGGKGFMFPG*))((::PBYTE)hIl2Cpp + HAOCAPILIGF_NKKNFAPIBOL_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

	};
