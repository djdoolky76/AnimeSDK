#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpecialSkillButtonGroupType.h"
#include "unitysdk/System/Object.h"
class BILMMJGHFGD;
class NPECNJDLMFD;

#define JIKBJMHEJNN_BHFKPLLFHAI_OFFSET UNITYSDK_OFFSET(0xB1F6110)
#define JIKBJMHEJNN_CCTOR_OFFSET UNITYSDK_OFFSET(0xB1F61F0)
#define JIKBJMHEJNN_CTOR_OFFSET UNITYSDK_OFFSET(0xB1F61E0)
#define JIKBJMHEJNN_EOPLLANFLBA_OFFSET UNITYSDK_OFFSET(0xB1F6180)
#define JIKBJMHEJNN_ICMMEIFDDFL_OFFSET UNITYSDK_OFFSET(0xB1F60C0)
#define JIKBJMHEJNN_PADACLAMLKO_OFFSET UNITYSDK_OFFSET(0xB1F6080)

inline static constexpr unsigned int JIKBJMHEJNN_TypeDefinitionIndex = 71964;

	class JIKBJMHEJNN : public ::System::Object
	{
	public:
		static ::BILMMJGHFGD** StaticGet_INGMHMEJGEG()
		{
			return (::BILMMJGHFGD**)UnitySDK::FromName("", "JIKBJMHEJNN")->GetStaticField(0x17B00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKBJMHEJNN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIKBJMHEJNN_CCTOR_OFFSET))();
		}

		::System::Void PADACLAMLKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKBJMHEJNN_PADACLAMLKO_OFFSET))(this);
		}

		::RPG::GameCore::SpecialSkillButtonGroupType ICMMEIFDDFL()
		{
			return ((::RPG::GameCore::SpecialSkillButtonGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKBJMHEJNN_ICMMEIFDDFL_OFFSET))(this);
		}

		::NPECNJDLMFD* BHFKPLLFHAI()
		{
			return ((::NPECNJDLMFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKBJMHEJNN_BHFKPLLFHAI_OFFSET))(this);
		}

		static ::BILMMJGHFGD* EOPLLANFLBA()
		{
			return ((::BILMMJGHFGD*(*)())((::PBYTE)hIl2Cpp + JIKBJMHEJNN_EOPLLANFLBA_OFFSET))();
		}

	};
