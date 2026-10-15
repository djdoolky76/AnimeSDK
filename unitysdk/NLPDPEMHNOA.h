#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLPDPEMHNOA;
namespace RPG::Client::ActivityIdleLive { class IdleLiveDanmuContentData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveImageContentData; }
namespace RPG::GameCore { class IdleLiveImgDanmuRow; }

#define NLPDPEMHNOA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBC71E60)
#define NLPDPEMHNOA_CTOR_OFFSET UNITYSDK_OFFSET(0xBC71FB0)
#define NLPDPEMHNOA_GAFJELFLGAE_OFFSET UNITYSDK_OFFSET(0xBC720F0)
#define NLPDPEMHNOA_GET_INTERVAL_OFFSET UNITYSDK_OFFSET(0xBC71E20)
#define NLPDPEMHNOA_GET_ISENDED_OFFSET UNITYSDK_OFFSET(0xBC71E40)
#define NLPDPEMHNOA_ICLMPLKMNOO_OFFSET UNITYSDK_OFFSET(0xBC72010)
#define NLPDPEMHNOA_SET_INTERVAL_OFFSET UNITYSDK_OFFSET(0xBC71E30)
#define NLPDPEMHNOA_SET_ISENDED_OFFSET UNITYSDK_OFFSET(0xBC71E50)

inline static constexpr unsigned int NLPDPEMHNOA_TypeDefinitionIndex = 75348;

	class NLPDPEMHNOA : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveImageContentData* NJDEBDGGGJL; // 0x10
		::System::Single EAMEIJKODBG; // 0x18
		::System::UInt32 AINKFBPJMOB; // 0x1C
		::System::UInt32 IBEIJHJAELJ; // 0x20
		::System::Single FLBLLMPABOJ; // 0x24
		::System::UInt32 PHCCMACKMNO; // 0x28
		::System::Boolean _IsEnded_k__BackingField; // 0x2C
		::System::Byte _padding0[0x3];
		::System::Single _Interval_k__BackingField; // 0x30
		::System::Void _ctor(::RPG::GameCore::IdleLiveImgDanmuRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveImgDanmuRow*))((::PBYTE)hIl2Cpp + NLPDPEMHNOA_CTOR_OFFSET))(this, a1);
		}

		::System::Single get_Interval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPDPEMHNOA_GET_INTERVAL_OFFSET))(this);
		}

		::System::Void set_Interval(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NLPDPEMHNOA_SET_INTERVAL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEnded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPDPEMHNOA_GET_ISENDED_OFFSET))(this);
		}

		::System::Void set_IsEnded(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NLPDPEMHNOA_SET_ISENDED_OFFSET))(this, a1);
		}

		static ::NLPDPEMHNOA* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::NLPDPEMHNOA*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NLPDPEMHNOA_BPLPBPMEODA_OFFSET))(a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDanmuContentData* GAFJELFLGAE()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDanmuContentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLPDPEMHNOA_GAFJELFLGAE_OFFSET))(this);
		}

		::System::Void ICLMPLKMNOO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NLPDPEMHNOA_ICLMPLKMNOO_OFFSET))(this, a1);
		}

	};
