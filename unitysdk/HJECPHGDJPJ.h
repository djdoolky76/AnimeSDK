#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Nullable_1.h"
class ICCLDNDNHPD;
class KNFCEJEJINK;
namespace RPG::GameCore { class ChimeraDuelFireGlobalEffectNode; }

#define HJECPHGDJPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15D075E0)
#define HJECPHGDJPJ_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0x15D07560)

inline static constexpr unsigned int HJECPHGDJPJ_TypeDefinitionIndex = 77680;

	class HJECPHGDJPJ : public ::HBLDGJCDJPF
	{
	public:
		::RPG::GameCore::ChimeraDuelFireGlobalEffectNode* EABKOHGCHFP; // 0x10
		::System::Nullable_1<::RPG::GameCore::ChimeraDuelTeamType> FLPPKLDOCDD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJECPHGDJPJ_CTOR_OFFSET))(this);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + HJECPHGDJPJ_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};
