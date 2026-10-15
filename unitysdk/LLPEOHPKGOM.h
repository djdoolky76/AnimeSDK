#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DesignerUserPrefsDomain.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LLPEOHPKGOM;
namespace System { class String; }

#define LLPEOHPKGOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D110FC0)
#define LLPEOHPKGOM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D110FD0)
#define LLPEOHPKGOM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D110F90)

	class LLPEOHPKGOM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* BFLIFKBEOPJ; // 0x18
		::System::Boolean JJODEAGKDOH; // 0x20
		::System::Byte _padding0[0x3];
		::RPG::GameCore::DesignerUserPrefsDomain POIELLDDNFM; // 0x24
		::System::UInt32 MNDFOPKBHKP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPEOHPKGOM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LLPEOHPKGOM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LLPEOHPKGOM*))((::PBYTE)hIl2Cpp + LLPEOHPKGOM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LLPEOHPKGOM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LLPEOHPKGOM*))((::PBYTE)hIl2Cpp + LLPEOHPKGOM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
