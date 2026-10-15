#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHEIAHPHBNA;
class MKHNMHOHEAK;
class NNIKOAIKFMO;
namespace Entitas { class IEntity; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JNBGHJMOCNB_BAMDALPCMLB_1_OFFSET UNITYSDK_OFFSET(0xB2776A0)
#define JNBGHJMOCNB_BPGLLLGDNGP_OFFSET UNITYSDK_OFFSET(0xB277880)
#define JNBGHJMOCNB_CGDDHKPJMGG_OFFSET UNITYSDK_OFFSET(0xB2778E0)
#define JNBGHJMOCNB_CTOR_OFFSET UNITYSDK_OFFSET(0xB276C40)
#define JNBGHJMOCNB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB277AD0)
#define JNBGHJMOCNB_GET_ENTITYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB277DB0)
#define JNBGHJMOCNB_SET_ENTITYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB277DC0)
#define JNBGHJMOCNB_TICK_OFFSET UNITYSDK_OFFSET(0xB277920)

inline static constexpr unsigned int JNBGHJMOCNB_TypeDefinitionIndex = 76546;

	class JNBGHJMOCNB : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::MKHNMHOHEAK*>* ONOKAJIHCBO; // 0x10
		::DHEIAHPHBNA* LBEIODGCFOD; // 0x18
		::System::Int32 _EntityRuntimeID_k__BackingField; // 0x20
		::System::Void _ctor(::DHEIAHPHBNA* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::DHEIAHPHBNA*, ::System::Int32))((::PBYTE)hIl2Cpp + JNBGHJMOCNB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean BAMDALPCMLB_1(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + JNBGHJMOCNB_BAMDALPCMLB_1_OFFSET))(this, a1);
		}

		::Entitas::IEntity* BPGLLLGDNGP()
		{
			return ((::Entitas::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNBGHJMOCNB_BPGLLLGDNGP_OFFSET))(this);
		}

		::NNIKOAIKFMO* CGDDHKPJMGG()
		{
			return ((::NNIKOAIKFMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNBGHJMOCNB_CGDDHKPJMGG_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JNBGHJMOCNB_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNBGHJMOCNB_DISPOSE_OFFSET))(this);
		}

		::System::Int32 get_EntityRuntimeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNBGHJMOCNB_GET_ENTITYRUNTIMEID_OFFSET))(this);
		}

		::System::Void set_EntityRuntimeID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JNBGHJMOCNB_SET_ENTITYRUNTIMEID_OFFSET))(this, a1);
		}

	};
