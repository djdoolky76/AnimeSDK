#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DLCGLBPNLAE;
class FCOEMCEDLNL;
namespace System { class String; }

#define DLCGLBPNLAE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E804BE0)
#define DLCGLBPNLAE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E804BF0)
#define DLCGLBPNLAE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E804BB0)

inline static constexpr unsigned int DLCGLBPNLAE_TypeDefinitionIndex = 21893;

	class DLCGLBPNLAE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* ABJMPKMHCBD; // 0x18
		::System::Int32 NPHAJEKCBKF; // 0x20
		::System::UInt32 GKJBKEDFHIB; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCGLBPNLAE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DLCGLBPNLAE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DLCGLBPNLAE*))((::PBYTE)hIl2Cpp + DLCGLBPNLAE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DLCGLBPNLAE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DLCGLBPNLAE*))((::PBYTE)hIl2Cpp + DLCGLBPNLAE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
