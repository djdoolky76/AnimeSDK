#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCGKEELAOEA;
class DLIGFDOIAPM;
class HBCBINEHHFI;
class LFNJCGNABKA;
class PAIFNKMCPGB;
namespace RPG::AvatarSystem { class AvatarServant; }

#define NMAKBNJNLIB_CTOR_OFFSET UNITYSDK_OFFSET(0xBC75280)
#define NMAKBNJNLIB_GET_PROPERTYPROVIDER_OFFSET UNITYSDK_OFFSET(0xBC75220)
#define NMAKBNJNLIB_GET_SERVANTROWDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0xBC75240)
#define NMAKBNJNLIB_GET_SERVANTSKILLROWDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0xBC75260)
#define NMAKBNJNLIB_GET_SERVANT_OFFSET UNITYSDK_OFFSET(0xBC751F0)
#define NMAKBNJNLIB_GET_SKILLLEVELPROVIDER_OFFSET UNITYSDK_OFFSET(0xBC75200)
#define NMAKBNJNLIB_LMHNAJPLMFI_OFFSET UNITYSDK_OFFSET(0xBC75310)
#define NMAKBNJNLIB_SET_PROPERTYPROVIDER_OFFSET UNITYSDK_OFFSET(0xBC75230)
#define NMAKBNJNLIB_SET_SERVANTROWDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0xBC75250)
#define NMAKBNJNLIB_SET_SERVANTSKILLROWDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0xBC75270)
#define NMAKBNJNLIB_SET_SKILLLEVELPROVIDER_OFFSET UNITYSDK_OFFSET(0xBC75210)

inline static constexpr unsigned int NMAKBNJNLIB_TypeDefinitionIndex = 51931;

	class NMAKBNJNLIB : public ::System::Object
	{
	public:
		::PAIFNKMCPGB* _ServantSkillRowDataProvider_k__BackingField; // 0x10
		::HBCBINEHHFI* MPKAFBADCAI; // 0x18
		::DLIGFDOIAPM* _PropertyProvider_k__BackingField; // 0x20
		::BCGKEELAOEA* _SkillLevelProvider_k__BackingField; // 0x28
		::RPG::AvatarSystem::AvatarServant* _Servant_k__BackingField; // 0x30
		::LFNJCGNABKA* _ServantRowDataProvider_k__BackingField; // 0x38
		::System::Void _ctor(::RPG::AvatarSystem::AvatarServant* a1, ::HBCBINEHHFI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::AvatarServant*, ::HBCBINEHHFI*))((::PBYTE)hIl2Cpp + NMAKBNJNLIB_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::AvatarSystem::AvatarServant* get_Servant()
		{
			return ((::RPG::AvatarSystem::AvatarServant*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMAKBNJNLIB_GET_SERVANT_OFFSET))(this);
		}

		::BCGKEELAOEA* get_SkillLevelProvider()
		{
			return ((::BCGKEELAOEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMAKBNJNLIB_GET_SKILLLEVELPROVIDER_OFFSET))(this);
		}

		::System::Void set_SkillLevelProvider(::BCGKEELAOEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCGKEELAOEA*))((::PBYTE)hIl2Cpp + NMAKBNJNLIB_SET_SKILLLEVELPROVIDER_OFFSET))(this, a1);
		}

		::DLIGFDOIAPM* get_PropertyProvider()
		{
			return ((::DLIGFDOIAPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMAKBNJNLIB_GET_PROPERTYPROVIDER_OFFSET))(this);
		}

		::System::Void set_PropertyProvider(::DLIGFDOIAPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLIGFDOIAPM*))((::PBYTE)hIl2Cpp + NMAKBNJNLIB_SET_PROPERTYPROVIDER_OFFSET))(this, a1);
		}

		::LFNJCGNABKA* get_ServantRowDataProvider()
		{
			return ((::LFNJCGNABKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMAKBNJNLIB_GET_SERVANTROWDATAPROVIDER_OFFSET))(this);
		}

		::System::Void set_ServantRowDataProvider(::LFNJCGNABKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFNJCGNABKA*))((::PBYTE)hIl2Cpp + NMAKBNJNLIB_SET_SERVANTROWDATAPROVIDER_OFFSET))(this, a1);
		}

		::PAIFNKMCPGB* get_ServantSkillRowDataProvider()
		{
			return ((::PAIFNKMCPGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMAKBNJNLIB_GET_SERVANTSKILLROWDATAPROVIDER_OFFSET))(this);
		}

		::System::Void set_ServantSkillRowDataProvider(::PAIFNKMCPGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAIFNKMCPGB*))((::PBYTE)hIl2Cpp + NMAKBNJNLIB_SET_SERVANTSKILLROWDATAPROVIDER_OFFSET))(this, a1);
		}

		::System::Boolean LMHNAJPLMFI(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NMAKBNJNLIB_LMHNAJPLMFI_OFFSET))(this, a1);
		}

	};
