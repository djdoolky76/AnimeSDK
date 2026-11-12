#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MANIJAAODMF;

#define MANIJAAODMF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E332150)
#define MANIJAAODMF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E331EA0)

inline static constexpr unsigned int MANIJAAODMF_TypeDefinitionIndex = 14093;

	class MANIJAAODMF : public ::System::Object
	{
	public:
		::System::UInt32 MMDDLJCIJLE; // 0x10
		::System::UInt32 FLLFLEEHCJI; // 0x14
		::RPG::Client::TextID NHGEPMEBMCF; // 0x18
		::System::UInt32 LPDDNLPNGJG; // 0x28
		::System::UInt32 KFAGIEFOAGN; // 0x2C
		::RPG::Client::TextID KLOIMHOIHHI; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANIJAAODMF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MANIJAAODMF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MANIJAAODMF*))((::PBYTE)hIl2Cpp + MANIJAAODMF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
