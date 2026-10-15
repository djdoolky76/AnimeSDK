#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MuseumModule; }
namespace System { class String; }

#define AHKHONCKHND_AOLLBBOCCCO_OFFSET UNITYSDK_OFFSET(0xEB80AF0)
#define AHKHONCKHND_BJBNIOPCMME_OFFSET UNITYSDK_OFFSET(0xEB80AA0)
#define AHKHONCKHND_CMEOJJFIEHA_OFFSET UNITYSDK_OFFSET(0xEB80B80)
#define AHKHONCKHND_FAIDEEFLMNF_OFFSET UNITYSDK_OFFSET(0xEB80D20)
#define AHKHONCKHND_FKBGKPEBAPI_OFFSET UNITYSDK_OFFSET(0xEB80450)
#define AHKHONCKHND_HINEFLMFHHF_OFFSET UNITYSDK_OFFSET(0xEB80970)
#define AHKHONCKHND_KBADJJKLMDP_OFFSET UNITYSDK_OFFSET(0xEB80C60)
#define AHKHONCKHND_KHMFBNOIPCI_OFFSET UNITYSDK_OFFSET(0xEB808B0)
#define AHKHONCKHND_MHKOKBGDMME_OFFSET UNITYSDK_OFFSET(0xEB80A00)

inline static constexpr unsigned int AHKHONCKHND_TypeDefinitionIndex = 66350;

	class AHKHONCKHND : public ::System::Object
	{
	public:
		static ::RPG::Client::MuseumModule** StaticGet_NNPPJLLEFIA()
		{
			return (::RPG::Client::MuseumModule**)UnitySDK::FromName("", "AHKHONCKHND")->GetStaticField(0x52270);
		}

		static ::System::Boolean FKBGKPEBAPI(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AHKHONCKHND_FKBGKPEBAPI_OFFSET))(a1);
		}

		static ::System::Boolean KHMFBNOIPCI()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AHKHONCKHND_KHMFBNOIPCI_OFFSET))();
		}

		static ::System::Boolean HINEFLMFHHF()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AHKHONCKHND_HINEFLMFHHF_OFFSET))();
		}

		static ::System::Boolean MHKOKBGDMME()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AHKHONCKHND_MHKOKBGDMME_OFFSET))();
		}

		static ::System::Boolean BJBNIOPCMME()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AHKHONCKHND_BJBNIOPCMME_OFFSET))();
		}

		static ::System::Boolean AOLLBBOCCCO()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AHKHONCKHND_AOLLBBOCCCO_OFFSET))();
		}

		static ::System::Boolean CMEOJJFIEHA(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + AHKHONCKHND_CMEOJJFIEHA_OFFSET))(a1);
		}

		static ::System::Boolean KBADJJKLMDP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AHKHONCKHND_KBADJJKLMDP_OFFSET))();
		}

		static ::System::Boolean FAIDEEFLMNF()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AHKHONCKHND_FAIDEEFLMNF_OFFSET))();
		}

	};
