#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NEBMBGBIHHH.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MechCraftTraitType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class FHJKNCMMMON;
class LKDLCJELFCM;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LKDLCJELFCM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1080F0)
#define LKDLCJELFCM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D107D90)

inline static constexpr unsigned int LKDLCJELFCM_TypeDefinitionIndex = 12004;

	class LKDLCJELFCM : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::NEBMBGBIHHH, ::System::UInt32>* KOGHELCCHJC; // 0x10
		::System::String* NFHLAIMKFPI; // 0x18
		::Il2CppArray<::System::UInt32>* FODGHIDJAPP; // 0x20
		::Il2CppArray<::FHJKNCMMMON*>* GJBOKLDCKEG; // 0x28
		::System::UInt32 PHFMCACHFIJ; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID OENAMINOLLF; // 0x38
		::System::UInt32 PMIEAEGJNMJ; // 0x48
		::RPG::GameCore::MechCraftTraitType FBFCPNADPKB; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDLCJELFCM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LKDLCJELFCM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LKDLCJELFCM*))((::PBYTE)hIl2Cpp + LKDLCJELFCM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
