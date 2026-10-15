#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IPNAPKLLICO;
namespace RPG::Client { class IRogueTournPersonaRoomAttribute; }
namespace RPG::Client { template <typename T1, typename T2> class RogueInstanceCacheManager_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IPNAPKLLICO_CCTOR_OFFSET UNITYSDK_OFFSET(0x16525630)
#define IPNAPKLLICO_CTOR_OFFSET UNITYSDK_OFFSET(0x165252B0)
#define IPNAPKLLICO_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x16525400)
#define IPNAPKLLICO_GET_ATTRIBUTELIST_OFFSET UNITYSDK_OFFSET(0x16525250)
#define IPNAPKLLICO_GET_COMPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0x16525210)
#define IPNAPKLLICO_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x16525230)
#define IPNAPKLLICO_JLJDKMBENJG_OFFSET UNITYSDK_OFFSET(0x16525270)
#define IPNAPKLLICO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x165252F0)
#define IPNAPKLLICO_OPJGEGLNBLH_OFFSET UNITYSDK_OFFSET(0x16525380)
#define IPNAPKLLICO_SET_ATTRIBUTELIST_OFFSET UNITYSDK_OFFSET(0x16525260)
#define IPNAPKLLICO_SET_COMPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0x16525220)
#define IPNAPKLLICO_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x16525240)

	class IPNAPKLLICO : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _AttributeList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>* FGJCCBCKPNL; // 0x18
		::System::UInt32 _Level_k__BackingField; // 0x20
		::System::UInt32 _CompositionType_k__BackingField; // 0x24
		static ::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::IPNAPKLLICO*>** StaticGet_CCAEPODBHDM()
		{
			return (::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::IPNAPKLLICO*>**)UnitySDK::FromName("", "IPNAPKLLICO")->GetStaticField(0x6DBC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPNAPKLLICO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPNAPKLLICO_CCTOR_OFFSET))();
		}

		::System::UInt32 get_CompositionType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPNAPKLLICO_GET_COMPOSITIONTYPE_OFFSET))(this);
		}

		::System::Void set_CompositionType(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IPNAPKLLICO_SET_COMPOSITIONTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPNAPKLLICO_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IPNAPKLLICO_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_AttributeList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPNAPKLLICO_GET_ATTRIBUTELIST_OFFSET))(this);
		}

		::System::Void set_AttributeList(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + IPNAPKLLICO_SET_ATTRIBUTELIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>* JLJDKMBENJG()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPNAPKLLICO_JLJDKMBENJG_OFFSET))(this);
		}

		static ::IPNAPKLLICO* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::IPNAPKLLICO*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IPNAPKLLICO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::IPNAPKLLICO* OPJGEGLNBLH(::System::UInt32 a1)
		{
			return ((::IPNAPKLLICO*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IPNAPKLLICO_OPJGEGLNBLH_OFFSET))(a1);
		}

		::System::Void DIOEAJEHHND(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IPNAPKLLICO_DIOEAJEHHND_OFFSET))(this, a1);
		}

	};
