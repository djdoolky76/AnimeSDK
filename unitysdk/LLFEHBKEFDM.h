#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LLFEHBKEFDM;
namespace System { class String; }

#define LLFEHBKEFDM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D10D590)
#define LLFEHBKEFDM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D10D5A0)
#define LLFEHBKEFDM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D10D560)

	class LLFEHBKEFDM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* ANLGDGBOHCA; // 0x18
		::System::String* ECNKCCNJNPJ; // 0x20
		::Il2CppArray<::System::String*>* NGIMHEEFALB; // 0x28
		::Il2CppArray<::System::String*>* OJFKGJBEDEG; // 0x30
		::Il2CppArray<::System::String*>* JGDMGEKAHMI; // 0x38
		::Il2CppArray<::System::String*>* MFMLJBGBBJI; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFEHBKEFDM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LLFEHBKEFDM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LLFEHBKEFDM*))((::PBYTE)hIl2Cpp + LLFEHBKEFDM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LLFEHBKEFDM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LLFEHBKEFDM*))((::PBYTE)hIl2Cpp + LLFEHBKEFDM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
