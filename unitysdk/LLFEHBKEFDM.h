#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LLFEHBKEFDM;
namespace System { class String; }

#define LLFEHBKEFDM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0DF7C0)
#define LLFEHBKEFDM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0DF7D0)
#define LLFEHBKEFDM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0DF790)

inline static constexpr unsigned int LLFEHBKEFDM_TypeDefinitionIndex = 22889;

	class LLFEHBKEFDM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* JGDMGEKAHMI; // 0x18
		::Il2CppArray<::System::String*>* ANLGDGBOHCA; // 0x20
		::Il2CppArray<::System::String*>* OJFKGJBEDEG; // 0x28
		::Il2CppArray<::System::String*>* NGIMHEEFALB; // 0x30
		::Il2CppArray<::System::String*>* MFMLJBGBBJI; // 0x38
		::System::String* ECNKCCNJNPJ; // 0x40
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
