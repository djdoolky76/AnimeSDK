#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PDHGEKBAEBE.h"
#include "unitysdk/PDHGEKBAEBE_IFOBEDHEDNH.h"
#include "unitysdk/Foundation/AssetPath.h"

class BPHGNMNLLHF;
template <typename T> class LJHFMILANJA_1;

#define JGPALCCLEGI_GMIBJJHKEKM_OFFSET UNITYSDK_OFFSET(0x18A147D0)
#define JGPALCCLEGI_ILFJHJHJMNB_OFFSET UNITYSDK_OFFSET(0x18A14340)
#define JGPALCCLEGI_KKONOHHPOIK_OFFSET UNITYSDK_OFFSET(0x18A14600)
#define JGPALCCLEGI_LKNBCFOKJLO_OFFSET UNITYSDK_OFFSET(0x18A14570)
#define JGPALCCLEGI_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x18A140F0)
#define JGPALCCLEGI__CTOR_OFFSET UNITYSDK_OFFSET(0x18A14330)

inline static constexpr unsigned int JGPALCCLEGI_TypeDefinitionIndex = 41367;

class JGPALCCLEGI : public ::PDHGEKBAEBE
{
public:
	::LJHFMILANJA_1<::BPHGNMNLLHF*>* PCHMHIOFNMF; // 0xB0
	::LJHFMILANJA_1<::System::Boolean>* MFIIKEGADCB; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGPALCCLEGI__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGPALCCLEGI_ONCREATEPROPERTY_OFFSET))(this);
	}

	::Foundation::AssetPath ILFJHJHJMNB()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + JGPALCCLEGI_ILFJHJHJMNB_OFFSET))(this);
	}

	::System::Void LKNBCFOKJLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGPALCCLEGI_LKNBCFOKJLO_OFFSET))(this);
	}

	::System::Void KKONOHHPOIK(::BPHGNMNLLHF* BDHOILPIGKB)
	{
		return ((::System::Void(*)(::PVOID, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + JGPALCCLEGI_KKONOHHPOIK_OFFSET))(this, BDHOILPIGKB);
	}

	::PDHGEKBAEBE_IFOBEDHEDNH GMIBJJHKEKM()
	{
		return ((::PDHGEKBAEBE_IFOBEDHEDNH(*)(::PVOID))((::PBYTE)hIl2Cpp + JGPALCCLEGI_GMIBJJHKEKM_OFFSET))(this);
	}
};
