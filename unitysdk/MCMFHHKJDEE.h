#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MAOBMOAAFGK;
namespace RPG::GameCore { class StoryLineFloorDataRow; }

#define MCMFHHKJDEE_BOLLKKJJGGF_OFFSET UNITYSDK_OFFSET(0xB888350)
#define MCMFHHKJDEE_CTOR_OFFSET UNITYSDK_OFFSET(0xB888320)
#define MCMFHHKJDEE_JCNIHCGPEDB_OFFSET UNITYSDK_OFFSET(0xB8882D0)
#define MCMFHHKJDEE_KENFGAHMDOA_OFFSET UNITYSDK_OFFSET(0xB888280)
#define MCMFHHKJDEE_MNBBCAMDGDI_OFFSET UNITYSDK_OFFSET(0xB888390)
#define MCMFHHKJDEE_OJAKJDAJCNN_OFFSET UNITYSDK_OFFSET(0xB888230)

	class MCMFHHKJDEE : public ::System::Object
	{
	public:
		::MAOBMOAAFGK* MKPECJPHOEK; // 0x10
		::RPG::GameCore::StoryLineFloorDataRow* IBPBJBOKKMF; // 0x18
		::System::Void _ctor(::RPG::GameCore::StoryLineFloorDataRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StoryLineFloorDataRow*))((::PBYTE)hIl2Cpp + MCMFHHKJDEE_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 OJAKJDAJCNN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMFHHKJDEE_OJAKJDAJCNN_OFFSET))(this);
		}

		::System::UInt32 KENFGAHMDOA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMFHHKJDEE_KENFGAHMDOA_OFFSET))(this);
		}

		::System::UInt32 JCNIHCGPEDB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMFHHKJDEE_JCNIHCGPEDB_OFFSET))(this);
		}

		::MAOBMOAAFGK* BOLLKKJJGGF()
		{
			return ((::MAOBMOAAFGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMFHHKJDEE_BOLLKKJJGGF_OFFSET))(this);
		}

		::System::Boolean MNBBCAMDGDI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMFHHKJDEE_MNBBCAMDGDI_OFFSET))(this);
		}

	};
