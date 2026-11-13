#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LKHAJCACPBH;
namespace RPG::Client { class GridFightPetPalEffect; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTREPOSITORY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF24140)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTREPOSITORY_GET_FIRSTEFFECT_OFFSET UNITYSDK_OFFSET(0x1DF237C0)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTREPOSITORY_GET_PETPALEFFECTS_OFFSET UNITYSDK_OFFSET(0x1DF237A0)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTREPOSITORY_GET_PETPALID_OFFSET UNITYSDK_OFFSET(0x1DF23660)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTREPOSITORY_SET_PETPALEFFECTS_OFFSET UNITYSDK_OFFSET(0x1DF237B0)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTREPOSITORY_SYNC_1_OFFSET UNITYSDK_OFFSET(0x1DF23D00)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTREPOSITORY_SYNC_OFFSET UNITYSDK_OFFSET(0x1DF23830)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTREPOSITORY_UPDATE_OFFSET UNITYSDK_OFFSET(0x1DF24050)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTREPOSITORY__ADDPETPALEFFECT_OFFSET UNITYSDK_OFFSET(0x1DF23EC0)
#define RPG_CLIENT_GRIDFIGHTPETPALEFFECTREPOSITORY__FETCHPETPALEFFECT_OFFSET UNITYSDK_OFFSET(0x1DF23DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPetPalEffectRepository_TypeDefinitionIndex = 66727;

	class GridFightPetPalEffectRepository : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightPetPalEffect*>* _PetPalEffects_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTREPOSITORY_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightPetPalEffect*>* get_PetPalEffects()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightPetPalEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTREPOSITORY_GET_PETPALEFFECTS_OFFSET))(this);
		}

		::System::Void set_PetPalEffects(::System::Collections::Generic::List_1<::RPG::Client::GridFightPetPalEffect*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightPetPalEffect*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTREPOSITORY_SET_PETPALEFFECTS_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightPetPalEffect* get_FirstEffect()
		{
			return ((::RPG::Client::GridFightPetPalEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTREPOSITORY_GET_FIRSTEFFECT_OFFSET))(this);
		}

		::System::UInt32 get_PetPalID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTREPOSITORY_GET_PETPALID_OFFSET))(this);
		}

		::System::Void Sync(::System::Collections::Generic::IList_1<::LKHAJCACPBH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::LKHAJCACPBH*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTREPOSITORY_SYNC_OFFSET))(this, a1);
		}

		::System::Void Sync_1(::LKHAJCACPBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKHAJCACPBH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTREPOSITORY_SYNC_1_OFFSET))(this, a1);
		}

		::System::Void Update(::LKHAJCACPBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKHAJCACPBH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTREPOSITORY_UPDATE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightPetPalEffect* _FetchPetPalEffect(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightPetPalEffect*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTREPOSITORY__FETCHPETPALEFFECT_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightPetPalEffect* _AddPetPalEffect(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightPetPalEffect*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPETPALEFFECTREPOSITORY__ADDPETPALEFFECT_OFFSET))(this, a1, a2);
		}

	};
}
