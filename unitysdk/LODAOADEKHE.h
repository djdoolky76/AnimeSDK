#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ConfirmDialogContext; }
namespace System { class String; }

#define LODAOADEKHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5A23E0)
#define LODAOADEKHE_GNNMGJMFNAE_OFFSET UNITYSDK_OFFSET(0x1A5A1EF0)
#define LODAOADEKHE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1A5A1DA0)

inline static constexpr unsigned int LODAOADEKHE_TypeDefinitionIndex = 62494;

	class LODAOADEKHE : public ::System::Object
	{
	public:
		::System::String* LDOHLFIHLNH; // 0x10
		::System::String* FHLCNCDFAKD; // 0x18
		::System::String* OCNGEPBPGCM; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LODAOADEKHE_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LODAOADEKHE_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void GNNMGJMFNAE(::RPG::Client::ConfirmDialogContext* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ConfirmDialogContext*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LODAOADEKHE_GNNMGJMFNAE_OFFSET))(this, a1, a2, a3);
		}

	};
