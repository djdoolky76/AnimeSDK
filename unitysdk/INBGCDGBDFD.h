#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APCGKBOPGJL.h"
#include "unitysdk/GGLKJLLMHBN.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class KFMGKJPDLNB;
class ODJIEONBGBL;

#define INBGCDGBDFD_CTOR_OFFSET UNITYSDK_OFFSET(0x164D7C50)
#define INBGCDGBDFD_DGBMKOOLGID_OFFSET UNITYSDK_OFFSET(0x164D7D30)
#define INBGCDGBDFD_DMIDAHCJIOA_OFFSET UNITYSDK_OFFSET(0x164D8640)
#define INBGCDGBDFD_IGPNOGINEFD_OFFSET UNITYSDK_OFFSET(0x164D8440)
#define INBGCDGBDFD__CHECKNEEDREBUILD_OFFSET UNITYSDK_OFFSET(0x164D7DC0)
#define INBGCDGBDFD__REBUILD_OFFSET UNITYSDK_OFFSET(0x164D7E30)

inline static constexpr unsigned int INBGCDGBDFD_TypeDefinitionIndex = 62717;

	class INBGCDGBDFD : public ::GGLKJLLMHBN
	{
	public:
		::KFMGKJPDLNB* BBHLBMONOIJ; // 0x28
		::ODJIEONBGBL* ELJAHHOIABP; // 0x30
		::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::UInt32> LDMKNOIOFLI; // 0x38
		::System::Byte _padding0[0x4];
		::APCGKBOPGJL ODMGLBEOBDP; // 0x44
		::System::Void _ctor(::APCGKBOPGJL a1, ::ODJIEONBGBL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::APCGKBOPGJL, ::ODJIEONBGBL*))((::PBYTE)hIl2Cpp + INBGCDGBDFD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void DGBMKOOLGID(::KFMGKJPDLNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFMGKJPDLNB*))((::PBYTE)hIl2Cpp + INBGCDGBDFD_DGBMKOOLGID_OFFSET))(this, a1);
		}

		::System::Boolean _CheckNeedRebuild()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INBGCDGBDFD__CHECKNEEDREBUILD_OFFSET))(this);
		}

		::System::Void _Rebuild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INBGCDGBDFD__REBUILD_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint IGPNOGINEFD(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + INBGCDGBDFD_IGPNOGINEFD_OFFSET))(this, a1);
		}

		::System::Void DMIDAHCJIOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INBGCDGBDFD_DMIDAHCJIOA_OFFSET))(this);
		}

	};
