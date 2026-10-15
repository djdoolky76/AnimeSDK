#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"
class CEKGGHILKPC;
class FCOEMCEDLNL;
namespace System { class String; }

#define CEKGGHILKPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB8CDB0)
#define CEKGGHILKPC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB8CA50)

inline static constexpr unsigned int CEKGGHILKPC_TypeDefinitionIndex = 11572;

	class CEKGGHILKPC : public ::System::Object
	{
	public:
		::System::String* EMFJFPAAEMB; // 0x10
		::System::String* LFMFLBMDCGE; // 0x18
		::System::String* OHMIIOMCIMA; // 0x20
		::System::String* GAIFKHJMCJO; // 0x28
		::System::String* MEPIMHPJKPP; // 0x30
		::System::String* NCCJOMIOKML; // 0x38
		::System::String* GKLAPFJKONI; // 0x40
		::RPG::GameCore::FateRinHouguOwnerType GHNJCLNKGHH; // 0x48
		::System::UInt32 PKJDFMCKNMC; // 0x4C
		::System::UInt32 HHDMOCBJKOF; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEKGGHILKPC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CEKGGHILKPC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CEKGGHILKPC*))((::PBYTE)hIl2Cpp + CEKGGHILKPC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
