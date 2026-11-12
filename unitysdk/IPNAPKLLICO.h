#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IPNAPKLLICO;
namespace RPG::Client { class IRogueTournPersonaRoomAttribute; }
namespace RPG::Client { template <typename T1, typename T2> class RogueInstanceCacheManager_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IPNAPKLLICO_CCTOR_OFFSET UNITYSDK_OFFSET(0xB85A460)
#define IPNAPKLLICO_CTOR_OFFSET UNITYSDK_OFFSET(0xB85A0E0)
#define IPNAPKLLICO_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xB85A230)
#define IPNAPKLLICO_GET_ATTRIBUTELIST_OFFSET UNITYSDK_OFFSET(0xB85A080)
#define IPNAPKLLICO_GET_COMPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0xB85A040)
#define IPNAPKLLICO_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB85A060)
#define IPNAPKLLICO_JLJDKMBENJG_OFFSET UNITYSDK_OFFSET(0xB85A0A0)
#define IPNAPKLLICO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0xB85A120)
#define IPNAPKLLICO_OPJGEGLNBLH_OFFSET UNITYSDK_OFFSET(0xB85A1B0)
#define IPNAPKLLICO_SET_ATTRIBUTELIST_OFFSET UNITYSDK_OFFSET(0xB85A090)
#define IPNAPKLLICO_SET_COMPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0xB85A050)
#define IPNAPKLLICO_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB85A070)

inline static constexpr unsigned int IPNAPKLLICO_TypeDefinitionIndex = 69669;

	class IPNAPKLLICO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>* FGJCCBCKPNL; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _AttributeList_k__BackingField; // 0x18
		::System::UInt32 _Level_k__BackingField; // 0x20
		::System::UInt32 _CompositionType_k__BackingField; // 0x24
		static ::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::IPNAPKLLICO*>** StaticGet_CCAEPODBHDM()
		{
			return (::RPG::Client::RogueInstanceCacheManager_2<::System::UInt32, ::IPNAPKLLICO*>**)UnitySDK::FromName("", "IPNAPKLLICO")->GetStaticField(0x5A1B0);
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
