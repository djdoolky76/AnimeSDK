#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAHMDAMLKDA;
class HNNHKPKCMJD;
class JNBGHJMOCNB;
class KPCDEJGJHBK;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DHEIAHPHBNA_BPGLLLGDNGP_OFFSET UNITYSDK_OFFSET(0xEBC6580)
#define DHEIAHPHBNA_CMMBLOKDEFD_OFFSET UNITYSDK_OFFSET(0xEBC64D0)
#define DHEIAHPHBNA_CTOR_OFFSET UNITYSDK_OFFSET(0xEBC6120)
#define DHEIAHPHBNA_FADPOIFOMBJ_OFFSET UNITYSDK_OFFSET(0xEBC61D0)
#define DHEIAHPHBNA_GET_GAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xEBC6BB0)
#define DHEIAHPHBNA_GET_INSTANCECLIENT_OFFSET UNITYSDK_OFFSET(0xEBC6BA0)
#define DHEIAHPHBNA_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xEBC66D0)
#define DHEIAHPHBNA_LIIKEKFNAAI_OFFSET UNITYSDK_OFFSET(0xEBC63E0)
#define DHEIAHPHBNA_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xEBC68D0)
#define DHEIAHPHBNA_SET_GAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xEBC6BC0)

inline static constexpr unsigned int DHEIAHPHBNA_TypeDefinitionIndex = 76546;

	class DHEIAHPHBNA : public ::System::Object
	{
	public:
		::HNNHKPKCMJD* _InstanceClient_k__BackingField; // 0x10
		::BAHMDAMLKDA* _GameInstance_k__BackingField; // 0x18
		::Entitas::IContext* EEFMDEHLLFI; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::JNBGHJMOCNB*>* HAMONNEFNHN; // 0x28
		::System::Void _ctor(::BAHMDAMLKDA* a1, ::Entitas::IContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BAHMDAMLKDA*, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + DHEIAHPHBNA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void FADPOIFOMBJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHEIAHPHBNA_FADPOIFOMBJ_OFFSET))(this, a1);
		}

		::System::Void LIIKEKFNAAI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHEIAHPHBNA_LIIKEKFNAAI_OFFSET))(this, a1);
		}

		::KPCDEJGJHBK* CMMBLOKDEFD(::System::Int32 a1)
		{
			return ((::KPCDEJGJHBK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHEIAHPHBNA_CMMBLOKDEFD_OFFSET))(this, a1);
		}

		::Entitas::IEntity* BPGLLLGDNGP(::System::Int32 a1)
		{
			return ((::Entitas::IEntity*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHEIAHPHBNA_BPGLLLGDNGP_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DHEIAHPHBNA_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHEIAHPHBNA_PJPFIHFAHGO_OFFSET))(this);
		}

		::HNNHKPKCMJD* get_InstanceClient()
		{
			return ((::HNNHKPKCMJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHEIAHPHBNA_GET_INSTANCECLIENT_OFFSET))(this);
		}

		::BAHMDAMLKDA* get_GameInstance()
		{
			return ((::BAHMDAMLKDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHEIAHPHBNA_GET_GAMEINSTANCE_OFFSET))(this);
		}

		::System::Void set_GameInstance(::BAHMDAMLKDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAHMDAMLKDA*))((::PBYTE)hIl2Cpp + DHEIAHPHBNA_SET_GAMEINSTANCE_OFFSET))(this, a1);
		}

	};
