#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BABMCGPMDHM_CTOR_OFFSET UNITYSDK_OFFSET(0x15BCE5B0)
#define BABMCGPMDHM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BCE510)
#define BABMCGPMDHM_GET_ID_OFFSET UNITYSDK_OFFSET(0x15BCE570)
#define BABMCGPMDHM_GET_ONSHIELDREMOVESEQUENCE_OFFSET UNITYSDK_OFFSET(0x15BCE590)
#define BABMCGPMDHM_GET_PROTECTEDENTITYLIST_OFFSET UNITYSDK_OFFSET(0x15BCE550)
#define BABMCGPMDHM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15BCE4B0)
#define BABMCGPMDHM_SET_ID_OFFSET UNITYSDK_OFFSET(0x15BCE580)
#define BABMCGPMDHM_SET_ONSHIELDREMOVESEQUENCE_OFFSET UNITYSDK_OFFSET(0x15BCE5A0)
#define BABMCGPMDHM_SET_PROTECTEDENTITYLIST_OFFSET UNITYSDK_OFFSET(0x15BCE560)

	class BABMCGPMDHM : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _ProtectedEntityList_k__BackingField; // 0x18
		::KFELGAIGHAP* _OnShieldRemoveSequence_k__BackingField; // 0x20
		::System::Int32 _ID_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABMCGPMDHM_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::Int32 a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::KFELGAIGHAP* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + BABMCGPMDHM_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABMCGPMDHM_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_ProtectedEntityList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABMCGPMDHM_GET_PROTECTEDENTITYLIST_OFFSET))(this);
		}

		::System::Void set_ProtectedEntityList(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + BABMCGPMDHM_SET_PROTECTEDENTITYLIST_OFFSET))(this, a1);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BABMCGPMDHM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BABMCGPMDHM_SET_ID_OFFSET))(this, a1);
		}

		::KFELGAIGHAP* get_OnShieldRemoveSequence()
		{
			return ((::KFELGAIGHAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABMCGPMDHM_GET_ONSHIELDREMOVESEQUENCE_OFFSET))(this);
		}

		::System::Void set_OnShieldRemoveSequence(::KFELGAIGHAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + BABMCGPMDHM_SET_ONSHIELDREMOVESEQUENCE_OFFSET))(this, a1);
		}

	};
