#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
class ICCLDNDNHPD;
class KNFCEJEJINK;
namespace RPG::GameCore { class ChimeraDuelFireGlobalEffectNode; }
namespace System { class Nullable; }

#define HJECPHGDJPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15D14020)
#define HJECPHGDJPJ_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0x15D13FA0)

	class HJECPHGDJPJ : public ::HBLDGJCDJPF
	{
	public:
		::RPG::GameCore::ChimeraDuelFireGlobalEffectNode* EABKOHGCHFP; // 0x10
		::System::Nullable* FLPPKLDOCDD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJECPHGDJPJ_CTOR_OFFSET))(this);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + HJECPHGDJPJ_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};
