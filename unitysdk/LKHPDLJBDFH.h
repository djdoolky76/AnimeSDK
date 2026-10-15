#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJDDMMEHBLE;
namespace RPG::Client { template <typename T1, typename T2> class LRUCache_2; }
namespace RPG::GameCore { class FreeStyleCharacterIDMapping; }
namespace RPG::GameCore { class FreeStyleCharacterIDMappingConfig; }
namespace RPG::GameCore { class FreeStyleCharacterInfoConfigRow; }
namespace RPG::GameCore { class FreeStyleTriggerGraphInfo; }
namespace RPG::GameCore { class FreeStyleTriggerGraphTemplateConfig; }
namespace System { class String; }

#define LKHPDLJBDFH_CCTOR_OFFSET UNITYSDK_OFFSET(0xB748C60)
#define LKHPDLJBDFH_CFALPACOIGA_OFFSET UNITYSDK_OFFSET(0xB748890)
#define LKHPDLJBDFH_CNELPPNJOEG_OFFSET UNITYSDK_OFFSET(0xB748BB0)
#define LKHPDLJBDFH_GFOCGLHMLMC_OFFSET UNITYSDK_OFFSET(0xB747960)
#define LKHPDLJBDFH_GIOLPDJCKMM_OFFSET UNITYSDK_OFFSET(0xB7487E0)
#define LKHPDLJBDFH_HINAPKNHOJE_OFFSET UNITYSDK_OFFSET(0xB7476B0)
#define LKHPDLJBDFH_HJOLPIEGCEN_OFFSET UNITYSDK_OFFSET(0xB748B10)
#define LKHPDLJBDFH_LBOJJBOMKDD_OFFSET UNITYSDK_OFFSET(0xB747760)
#define LKHPDLJBDFH_PNBMIDHBPLD_OFFSET UNITYSDK_OFFSET(0xB747AD0)

inline static constexpr unsigned int LKHPDLJBDFH_TypeDefinitionIndex = 57271;

	class LKHPDLJBDFH : public ::System::Object
	{
	public:
		static ::RPG::Client::LRUCache_2<::System::String*, ::FJDDMMEHBLE*>** StaticGet_AOAPMGJGHOC()
		{
			return (::RPG::Client::LRUCache_2<::System::String*, ::FJDDMMEHBLE*>**)UnitySDK::FromName("", "LKHPDLJBDFH")->GetStaticField(0x698E0);
		}

		static ::RPG::Client::LRUCache_2<::System::String*, ::RPG::GameCore::FreeStyleTriggerGraphTemplateConfig*>** StaticGet_EOLPHFHNKMI()
		{
			return (::RPG::Client::LRUCache_2<::System::String*, ::RPG::GameCore::FreeStyleTriggerGraphTemplateConfig*>**)UnitySDK::FromName("", "LKHPDLJBDFH")->GetStaticField(0x698E8);
		}

		static ::System::String** StaticGet_HABAOLGJMBI()
		{
			return (::System::String**)UnitySDK::FromName("", "LKHPDLJBDFH")->GetStaticField(0x698F0);
		}

		static ::RPG::GameCore::FreeStyleCharacterIDMappingConfig** StaticGet_HLGKFCGLCPG()
		{
			return (::RPG::GameCore::FreeStyleCharacterIDMappingConfig**)UnitySDK::FromName("", "LKHPDLJBDFH")->GetStaticField(0x698F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKHPDLJBDFH_CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::FreeStyleCharacterInfoConfigRow* HINAPKNHOJE(::System::String* a1)
		{
			return ((::RPG::GameCore::FreeStyleCharacterInfoConfigRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + LKHPDLJBDFH_HINAPKNHOJE_OFFSET))(a1);
		}

		static ::RPG::GameCore::FreeStyleCharacterIDMapping* LBOJJBOMKDD(::System::String* a1)
		{
			return ((::RPG::GameCore::FreeStyleCharacterIDMapping*(*)(::System::String*))((::PBYTE)hIl2Cpp + LKHPDLJBDFH_LBOJJBOMKDD_OFFSET))(a1);
		}

		static ::FJDDMMEHBLE* GFOCGLHMLMC(::System::String* a1)
		{
			return ((::FJDDMMEHBLE*(*)(::System::String*))((::PBYTE)hIl2Cpp + LKHPDLJBDFH_GFOCGLHMLMC_OFFSET))(a1);
		}

		static ::System::Void GIOLPDJCKMM(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LKHPDLJBDFH_GIOLPDJCKMM_OFFSET))(a1);
		}

		static ::RPG::GameCore::FreeStyleTriggerGraphInfo* CFALPACOIGA(::System::String* a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::FreeStyleTriggerGraphInfo*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + LKHPDLJBDFH_CFALPACOIGA_OFFSET))(a1, a2);
		}

		static ::System::Void CNELPPNJOEG(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LKHPDLJBDFH_CNELPPNJOEG_OFFSET))(a1);
		}

		static ::FJDDMMEHBLE* PNBMIDHBPLD(::System::String* a1)
		{
			return ((::FJDDMMEHBLE*(*)(::System::String*))((::PBYTE)hIl2Cpp + LKHPDLJBDFH_PNBMIDHBPLD_OFFSET))(a1);
		}

		static ::RPG::GameCore::FreeStyleTriggerGraphTemplateConfig* HJOLPIEGCEN(::System::String* a1)
		{
			return ((::RPG::GameCore::FreeStyleTriggerGraphTemplateConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + LKHPDLJBDFH_HJOLPIEGCEN_OFFSET))(a1);
		}

	};
