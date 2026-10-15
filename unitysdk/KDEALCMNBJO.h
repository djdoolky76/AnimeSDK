#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetState.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define KDEALCMNBJO_CHPAIEEKLGO_OFFSET UNITYSDK_OFFSET(0x1C47B910)
#define KDEALCMNBJO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C47B8E0)
#define KDEALCMNBJO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C47B8D0)
#define KDEALCMNBJO_DEPMKLBMFOK_OFFSET UNITYSDK_OFFSET(0x1C47B8F0)
#define KDEALCMNBJO_FCIMJNBJJPB_OFFSET UNITYSDK_OFFSET(0x1C47B940)
#define KDEALCMNBJO_FOGLPDGLKLD_OFFSET UNITYSDK_OFFSET(0x1C47B900)
#define KDEALCMNBJO_NIFANMHOKPP_OFFSET UNITYSDK_OFFSET(0x1C47B920)
#define KDEALCMNBJO_OBFHNAPFEIN_OFFSET UNITYSDK_OFFSET(0x1C47B930)

inline static constexpr unsigned int KDEALCMNBJO_TypeDefinitionIndex = 41397;

	class KDEALCMNBJO : public ::System::Object
	{
	public:
		::System::String* KFAEMNDIHBP; // 0x10
		::System::UInt32 KAMGHIIKPEE; // 0x18
		::RPG::Client::AssetState MFDJMBHALDP; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEALCMNBJO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::UInt32 a2, ::RPG::Client::AssetState a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::RPG::Client::AssetState))((::PBYTE)hIl2Cpp + KDEALCMNBJO_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::String* DEPMKLBMFOK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEALCMNBJO_DEPMKLBMFOK_OFFSET))(this);
		}

		::System::Void FOGLPDGLKLD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KDEALCMNBJO_FOGLPDGLKLD_OFFSET))(this, a1);
		}

		::System::UInt32 CHPAIEEKLGO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEALCMNBJO_CHPAIEEKLGO_OFFSET))(this);
		}

		::System::Void NIFANMHOKPP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KDEALCMNBJO_NIFANMHOKPP_OFFSET))(this, a1);
		}

		::RPG::Client::AssetState OBFHNAPFEIN()
		{
			return ((::RPG::Client::AssetState(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEALCMNBJO_OBFHNAPFEIN_OFFSET))(this);
		}

		::System::Void FCIMJNBJJPB(::RPG::Client::AssetState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetState))((::PBYTE)hIl2Cpp + KDEALCMNBJO_FCIMJNBJJPB_OFFSET))(this, a1);
		}

	};
