#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LDJMFMBBDFK;
namespace System { class String; }

#define LDJMFMBBDFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0E0FD0)
#define LDJMFMBBDFK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0E0FE0)
#define LDJMFMBBDFK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0E0FA0)

	class LDJMFMBBDFK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* MDBHPILLAPA; // 0x18
		::Il2CppArray<::System::String*>* MMCPCPAEEAH; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJMFMBBDFK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LDJMFMBBDFK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LDJMFMBBDFK*))((::PBYTE)hIl2Cpp + LDJMFMBBDFK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LDJMFMBBDFK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LDJMFMBBDFK*))((::PBYTE)hIl2Cpp + LDJMFMBBDFK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
