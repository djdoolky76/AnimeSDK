#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
namespace RPG::Client { class MapPropDef; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KNNMGDNOHAG_AFMMJIONOPN_OFFSET UNITYSDK_OFFSET(0xB589B00)
#define KNNMGDNOHAG_CTOR_OFFSET UNITYSDK_OFFSET(0xB58A3C0)
#define KNNMGDNOHAG_DCMBPKCCLCL_OFFSET UNITYSDK_OFFSET(0xB58A000)
#define KNNMGDNOHAG_DKKODCDDGLC_1_OFFSET UNITYSDK_OFFSET(0xB589CC0)
#define KNNMGDNOHAG_DKKODCDDGLC_OFFSET UNITYSDK_OFFSET(0xB589C40)
#define KNNMGDNOHAG_DPOPBEDMFOK_OFFSET UNITYSDK_OFFSET(0xB589ED0)
#define KNNMGDNOHAG_HMIOIJENBFE_OFFSET UNITYSDK_OFFSET(0xB58A280)
#define KNNMGDNOHAG_JEKPOFFDGEL_OFFSET UNITYSDK_OFFSET(0xB58A0B0)
#define KNNMGDNOHAG__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB58A1A0)

	class KNNMGDNOHAG : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* GDOBDJIELPD; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* DIICJGAAJCA; // 0x18
		// static const ::System::String* LCNEFNJNBLE; // 0x0
		// static const ::System::String* MJPNONDNNCM; // 0x0
		// static const ::System::String* CILPDGGHPCO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNNMGDNOHAG_CTOR_OFFSET))(this);
		}

		::System::Void AFMMJIONOPN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KNNMGDNOHAG_AFMMJIONOPN_OFFSET))(this, a1);
		}

		::System::String* DKKODCDDGLC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KNNMGDNOHAG_DKKODCDDGLC_OFFSET))(this, a1);
		}

		::System::String* DKKODCDDGLC_1(::RPG::Client::MapPropDef* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + KNNMGDNOHAG_DKKODCDDGLC_1_OFFSET))(this, a1);
		}

		::System::Void DPOPBEDMFOK(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + KNNMGDNOHAG_DPOPBEDMFOK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DCMBPKCCLCL(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + KNNMGDNOHAG_DCMBPKCCLCL_OFFSET))(this, a1, a2);
		}

		::System::Void JEKPOFFDGEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNNMGDNOHAG_JEKPOFFDGEL_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNNMGDNOHAG__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void HMIOIJENBFE(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + KNNMGDNOHAG_HMIOIJENBFE_OFFSET))(this, a1, a2);
		}

	};
