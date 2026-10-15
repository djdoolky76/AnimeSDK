#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class FBFODNFGMKG;
class JLKCBOIFJKC;
class MGBHKCMHDOK;

#define JBPIOKMAGFC_CTOR_OFFSET UNITYSDK_OFFSET(0x16577000)
#define JBPIOKMAGFC_GET_ID_OFFSET UNITYSDK_OFFSET(0x16576DE0)
#define JBPIOKMAGFC_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x16576DA0)
#define JBPIOKMAGFC_GET_ISRECOVER_OFFSET UNITYSDK_OFFSET(0x16576EA0)
#define JBPIOKMAGFC_GET_TRAITEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x16576E20)
#define JBPIOKMAGFC_GET_TRAITID_OFFSET UNITYSDK_OFFSET(0x16576E60)
#define JBPIOKMAGFC_ONTRAITCHANGE_OFFSET UNITYSDK_OFFSET(0x16576EC0)
#define JBPIOKMAGFC_ONUPDATE_1_OFFSET UNITYSDK_OFFSET(0x16576F60)
#define JBPIOKMAGFC_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x16576F10)
#define JBPIOKMAGFC_PNLLINHJDJF_OFFSET UNITYSDK_OFFSET(0x16576D10)
#define JBPIOKMAGFC_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x16576FB0)
#define JBPIOKMAGFC_SET_ISRECOVER_OFFSET UNITYSDK_OFFSET(0x16576EB0)

inline static constexpr unsigned int JBPIOKMAGFC_TypeDefinitionIndex = 65457;

	class JBPIOKMAGFC : public ::System::Object
	{
	public:
		::System::Boolean _IsRecover_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPIOKMAGFC_CTOR_OFFSET))(this);
		}

		::RPG::Client::TextID PNLLINHJDJF()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPIOKMAGFC_PNLLINHJDJF_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPIOKMAGFC_GET_ISACTIVE_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPIOKMAGFC_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::GridFightTraitEffectType get_TraitEffectType()
		{
			return ((::RPG::GameCore::GridFightTraitEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPIOKMAGFC_GET_TRAITEFFECTTYPE_OFFSET))(this);
		}

		::System::UInt32 get_TraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPIOKMAGFC_GET_TRAITID_OFFSET))(this);
		}

		::System::Boolean get_IsRecover()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPIOKMAGFC_GET_ISRECOVER_OFFSET))(this);
		}

		::System::Void set_IsRecover(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JBPIOKMAGFC_SET_ISRECOVER_OFFSET))(this, a1);
		}

		::System::Void OnTraitChange(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + JBPIOKMAGFC_ONTRAITCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void OnUpdate(::MGBHKCMHDOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGBHKCMHDOK*))((::PBYTE)hIl2Cpp + JBPIOKMAGFC_ONUPDATE_OFFSET))(this, a1);
		}

		::System::Void OnUpdate_1(::JLKCBOIFJKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLKCBOIFJKC*))((::PBYTE)hIl2Cpp + JBPIOKMAGFC_ONUPDATE_1_OFFSET))(this, a1);
		}

		::System::Void SetCollector(::FBFODNFGMKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBFODNFGMKG*))((::PBYTE)hIl2Cpp + JBPIOKMAGFC_SETCOLLECTOR_OFFSET))(this, a1);
		}

	};
