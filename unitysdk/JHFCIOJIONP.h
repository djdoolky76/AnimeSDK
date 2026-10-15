#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define JHFCIOJIONP_CLEAR_OFFSET UNITYSDK_OFFSET(0xB1AFCE0)
#define JHFCIOJIONP_CTOR_OFFSET UNITYSDK_OFFSET(0xB1AFDF0)
#define JHFCIOJIONP_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0xB1AFD30)
#define JHFCIOJIONP_DOGONNEEEOI_OFFSET UNITYSDK_OFFSET(0xB1AFCD0)
#define JHFCIOJIONP_HDNHBCHJMLN_OFFSET UNITYSDK_OFFSET(0xB1AFD90)

inline static constexpr unsigned int JHFCIOJIONP_TypeDefinitionIndex = 57814;

	class JHFCIOJIONP : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* OCGEPPOBEPF; // 0x10
		::System::Boolean FHKAIANBPKH; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 KAAOIFKEBGH; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFCIOJIONP_CTOR_OFFSET))(this);
		}

		::System::Boolean DOGONNEEEOI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFCIOJIONP_DOGONNEEEOI_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFCIOJIONP_CLEAR_OFFSET))(this);
		}

		::System::Void DLAILGNMFGI(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + JHFCIOJIONP_DLAILGNMFGI_OFFSET))(this, a1, a2);
		}

		::System::Void HDNHBCHJMLN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JHFCIOJIONP_HDNHBCHJMLN_OFFSET))(this, a1);
		}

	};
