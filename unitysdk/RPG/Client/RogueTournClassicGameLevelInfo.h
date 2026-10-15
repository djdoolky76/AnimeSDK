#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHMPGNHBBLC.h"
#include "unitysdk/System/Object.h"
class IJNFOHJGPBC;
class NLIOPBPOBHB;
class ONPOFJPEBMJ;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class IRogueTournClassicGameLevelLayer; }
namespace RPG::Client { class IRogueTournGameLevelLayer; }
namespace RPG::Client { class IRogueTournGameLevelLayerLinear; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xDF876E0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDF89120)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_GET_CURLAYER_OFFSET UNITYSDK_OFFSET(0xDF88450)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xDF89F40)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_GET_LAYERCOUNT_OFFSET UNITYSDK_OFFSET(0xDF8A340)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_GET_LAYERS_OFFSET UNITYSDK_OFFSET(0xDF8A390)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xDF8A300)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_RPG_CLIENT_IROGUETOURNGAMELEVELLINEAR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xDF8A020)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_RPG_CLIENT_IROGUETOURNGAMELEVEL_GET_CURLAYER_OFFSET UNITYSDK_OFFSET(0xDF8A430)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_RPG_CLIENT_IROGUETOURNGAMELEVEL_GET_LAYERS_OFFSET UNITYSDK_OFFSET(0xDF8A3D0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_SYNCFULL_OFFSET UNITYSDK_OFFSET(0xDF88C90)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_SYNCINCREMENTAL_OFFSET UNITYSDK_OFFSET(0xDF89A10)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO__GETORFILLLAYERTOINDEX_OFFSET UNITYSDK_OFFSET(0xDF8A160)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO__SYNCLAYERSFULL_OFFSET UNITYSDK_OFFSET(0xDF893C0)
#define RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO__SYNCLAYERSINCREMENTAL_OFFSET UNITYSDK_OFFSET(0xDF89A80)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournClassicGameLevelInfo_TypeDefinitionIndex = 67628;

	class RogueTournClassicGameLevelInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournClassicGameLevelLayer*>* _Layers; // 0x10
		::System::UInt32 _CurLayerIndex; // 0x18
		::NHMPGNHBBLC _Status; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncFull(::ONPOFJPEBMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONPOFJPEBMJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_SYNCFULL_OFFSET))(this, a1);
		}

		::System::Void SyncIncremental(::NLIOPBPOBHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLIOPBPOBHB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_SYNCINCREMENTAL_OFFSET))(this, a1);
		}

		::RPG::Client::IRogueTournClassicGameLevelLayer* get_Item(::System::UInt32 a1)
		{
			return ((::RPG::Client::IRogueTournClassicGameLevelLayer*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_GET_ITEM_OFFSET))(this, a1);
		}

		::RPG::Client::IRogueTournGameLevelLayerLinear* RPG_Client_IRogueTournGameLevelLinear_get_Item(::System::UInt32 a1)
		{
			return ((::RPG::Client::IRogueTournGameLevelLayerLinear*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_RPG_CLIENT_IROGUETOURNGAMELEVELLINEAR_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void _SyncLayersFull(::Google::Protobuf::Collections::RepeatedField_1<::IJNFOHJGPBC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::IJNFOHJGPBC*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO__SYNCLAYERSFULL_OFFSET))(this, a1);
		}

		::System::Void _SyncLayersIncremental(::Google::Protobuf::Collections::RepeatedField_1<::IJNFOHJGPBC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::IJNFOHJGPBC*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO__SYNCLAYERSINCREMENTAL_OFFSET))(this, a1);
		}

		::RPG::Client::IRogueTournClassicGameLevelLayer* _GetOrFillLayerToIndex(::System::UInt32 a1)
		{
			return ((::RPG::Client::IRogueTournClassicGameLevelLayer*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO__GETORFILLLAYERTOINDEX_OFFSET))(this, a1);
		}

		::NHMPGNHBBLC get_Status()
		{
			return ((::NHMPGNHBBLC(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_GET_STATUS_OFFSET))(this);
		}

		::System::UInt32 get_LayerCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_GET_LAYERCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournClassicGameLevelLayer*>* get_Layers()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournClassicGameLevelLayer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_GET_LAYERS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelLayer*>* RPG_Client_IRogueTournGameLevel_get_Layers()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelLayer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_RPG_CLIENT_IROGUETOURNGAMELEVEL_GET_LAYERS_OFFSET))(this);
		}

		::RPG::Client::IRogueTournClassicGameLevelLayer* get_CurLayer()
		{
			return ((::RPG::Client::IRogueTournClassicGameLevelLayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_GET_CURLAYER_OFFSET))(this);
		}

		::RPG::Client::IRogueTournGameLevelLayer* RPG_Client_IRogueTournGameLevel_get_CurLayer()
		{
			return ((::RPG::Client::IRogueTournGameLevelLayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCLASSICGAMELEVELINFO_RPG_CLIENT_IROGUETOURNGAMELEVEL_GET_CURLAYER_OFFSET))(this);
		}

	};
}
