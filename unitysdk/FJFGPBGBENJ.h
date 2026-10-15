#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PPKICBIDEGD.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class LittleGameEntityPreset; }
namespace System { class String; }

#define FJFGPBGBENJ_CEPAOBODEDL_OFFSET UNITYSDK_OFFSET(0x1CA70E30)
#define FJFGPBGBENJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA70EE0)
#define FJFGPBGBENJ_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x1CA70E70)
#define FJFGPBGBENJ_NKAMGFABLPN_OFFSET UNITYSDK_OFFSET(0x1CA70DF0)

inline static constexpr unsigned int FJFGPBGBENJ_TypeDefinitionIndex = 43395;

	class FJFGPBGBENJ : public ::System::Object
	{
	public:
		::RPG::GameCore::LittleGameEntityPreset* ELILFEPKLCJ; // 0x10
		::PPKICBIDEGD BPAPBAFOMCH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFGPBGBENJ_CTOR_OFFSET))(this);
		}

		::System::Int32 NKAMGFABLPN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFGPBGBENJ_NKAMGFABLPN_OFFSET))(this);
		}

		::System::Int32 CEPAOBODEDL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFGPBGBENJ_CEPAOBODEDL_OFFSET))(this);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJFGPBGBENJ_MLMGEFIOION_OFFSET))(this);
		}

	};
