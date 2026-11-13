#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APCGKBOPGJL.h"
#include "unitysdk/GGLKJLLMHBN.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class KFMGKJPDLNB;
class ODJIEONBGBL;

#define INBGCDGBDFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5E4570)
#define INBGCDGBDFD_DGBMKOOLGID_OFFSET UNITYSDK_OFFSET(0x1A5E4650)
#define INBGCDGBDFD_DMIDAHCJIOA_OFFSET UNITYSDK_OFFSET(0x1A5E4F70)
#define INBGCDGBDFD_IGPNOGINEFD_OFFSET UNITYSDK_OFFSET(0x1A5E4D70)
#define INBGCDGBDFD__CHECKNEEDREBUILD_OFFSET UNITYSDK_OFFSET(0x1A5E46E0)
#define INBGCDGBDFD__REBUILD_OFFSET UNITYSDK_OFFSET(0x1A5E4760)

inline static constexpr unsigned int INBGCDGBDFD_TypeDefinitionIndex = 64151;

	class INBGCDGBDFD : public ::GGLKJLLMHBN
	{
	public:
		::ODJIEONBGBL* ELJAHHOIABP; // 0x28
		::KFMGKJPDLNB* BBHLBMONOIJ; // 0x30
		::APCGKBOPGJL ODMGLBEOBDP; // 0x38
		::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::UInt32> LDMKNOIOFLI; // 0x40
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
