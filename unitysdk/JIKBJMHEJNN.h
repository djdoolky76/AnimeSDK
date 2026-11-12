#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpecialSkillButtonGroupType.h"
#include "unitysdk/System/Object.h"
class BILMMJGHFGD;
class NPECNJDLMFD;

#define JIKBJMHEJNN_BHFKPLLFHAI_OFFSET UNITYSDK_OFFSET(0xBA1DF10)
#define JIKBJMHEJNN_CCTOR_OFFSET UNITYSDK_OFFSET(0xBA1DFF0)
#define JIKBJMHEJNN_CTOR_OFFSET UNITYSDK_OFFSET(0xBA1DFE0)
#define JIKBJMHEJNN_EOPLLANFLBA_OFFSET UNITYSDK_OFFSET(0xBA1DF80)
#define JIKBJMHEJNN_ICMMEIFDDFL_OFFSET UNITYSDK_OFFSET(0xBA1DEC0)
#define JIKBJMHEJNN_PADACLAMLKO_OFFSET UNITYSDK_OFFSET(0xBA1DE80)

inline static constexpr unsigned int JIKBJMHEJNN_TypeDefinitionIndex = 73989;

	class JIKBJMHEJNN : public ::System::Object
	{
	public:
		static ::BILMMJGHFGD** StaticGet_INGMHMEJGEG()
		{
			return (::BILMMJGHFGD**)UnitySDK::FromName("", "JIKBJMHEJNN")->GetStaticField(0xD800);
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
