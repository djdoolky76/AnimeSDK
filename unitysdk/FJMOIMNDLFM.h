#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LoadingStrategyPriority.h"
#include "unitysdk/System/Object.h"
class BPANGADOKAM;
class CICNAOMJPGD;
class FJMOIMNDLFM_FONIPPOHCAK;
namespace RPG::GameCore { class LoadingStratageConfigRow; }

#define FJMOIMNDLFM_ALFKJPLFPDO_OFFSET UNITYSDK_OFFSET(0x157D9B10)
#define FJMOIMNDLFM_CCTOR_OFFSET UNITYSDK_OFFSET(0x157DA830)
#define FJMOIMNDLFM_EIIEJMDAEDC_OFFSET UNITYSDK_OFFSET(0x157DA380)
#define FJMOIMNDLFM_ENMPDDKJMDM_OFFSET UNITYSDK_OFFSET(0x157D9FB0)
#define FJMOIMNDLFM_EOLCAFGHIOM_OFFSET UNITYSDK_OFFSET(0x157DA020)
#define FJMOIMNDLFM_GLMKDIMMMDF_OFFSET UNITYSDK_OFFSET(0x157DA170)
#define FJMOIMNDLFM_GPAEEANOBPE_OFFSET UNITYSDK_OFFSET(0x157DA270)
#define FJMOIMNDLFM_HPHDELKFADA_OFFSET UNITYSDK_OFFSET(0x157D9F50)
#define FJMOIMNDLFM_JMNILJLAHLJ_OFFSET UNITYSDK_OFFSET(0x157DA100)
#define FJMOIMNDLFM_KADJEBGHMDF_OFFSET UNITYSDK_OFFSET(0x157D97C0)
#define FJMOIMNDLFM_NGBODAHJPBI_OFFSET UNITYSDK_OFFSET(0x157D99A0)

	class FJMOIMNDLFM : public ::System::Object
	{
	public:
		static ::CICNAOMJPGD** StaticGet_PGFADOJCHJM()
		{
			return (::CICNAOMJPGD**)UnitySDK::FromName("", "FJMOIMNDLFM")->GetStaticField(0x6DB50);
		}

		static ::FJMOIMNDLFM_FONIPPOHCAK** StaticGet_BMGLMNMNBNB()
		{
			return (::FJMOIMNDLFM_FONIPPOHCAK**)UnitySDK::FromName("", "FJMOIMNDLFM")->GetStaticField(0x6DB58);
		}

		static ::CICNAOMJPGD** StaticGet_BBHHHJFOALF()
		{
			return (::CICNAOMJPGD**)UnitySDK::FromName("", "FJMOIMNDLFM")->GetStaticField(0x6DB60);
		}

		static ::System::Boolean* StaticGet_JIOADNKADGA()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FJMOIMNDLFM")->GetStaticField(0x15290);
		}

		static ::RPG::Client::LoadingStrategyPriority* StaticGet_NMKGIODFOCJ()
		{
			return (::RPG::Client::LoadingStrategyPriority*)UnitySDK::FromName("", "FJMOIMNDLFM")->GetStaticField(0x15294);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJMOIMNDLFM_CCTOR_OFFSET))();
		}

		static ::System::Void KADJEBGHMDF()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJMOIMNDLFM_KADJEBGHMDF_OFFSET))();
		}

		static ::System::Void HPHDELKFADA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJMOIMNDLFM_HPHDELKFADA_OFFSET))();
		}

		static ::System::Void ENMPDDKJMDM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJMOIMNDLFM_ENMPDDKJMDM_OFFSET))();
		}

		static ::System::Void NGBODAHJPBI(::CICNAOMJPGD* a1, ::RPG::Client::LoadingStrategyPriority a2)
		{
			return ((::System::Void(*)(::CICNAOMJPGD*, ::RPG::Client::LoadingStrategyPriority))((::PBYTE)hIl2Cpp + FJMOIMNDLFM_NGBODAHJPBI_OFFSET))(a1, a2);
		}

		static ::CICNAOMJPGD* EOLCAFGHIOM()
		{
			return ((::CICNAOMJPGD*(*)())((::PBYTE)hIl2Cpp + FJMOIMNDLFM_EOLCAFGHIOM_OFFSET))();
		}

		static ::System::Void JMNILJLAHLJ()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJMOIMNDLFM_JMNILJLAHLJ_OFFSET))();
		}

		static ::RPG::GameCore::LoadingStratageConfigRow* ALFKJPLFPDO()
		{
			return ((::RPG::GameCore::LoadingStratageConfigRow*(*)())((::PBYTE)hIl2Cpp + FJMOIMNDLFM_ALFKJPLFPDO_OFFSET))();
		}

		static ::System::Boolean GLMKDIMMMDF(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + FJMOIMNDLFM_GLMKDIMMMDF_OFFSET))(a1);
		}

		static ::System::Boolean GPAEEANOBPE(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + FJMOIMNDLFM_GPAEEANOBPE_OFFSET))(a1);
		}

		static ::System::Boolean EIIEJMDAEDC(::Il2CppArray<::BPANGADOKAM*>* a1)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::BPANGADOKAM*>*))((::PBYTE)hIl2Cpp + FJMOIMNDLFM_EIIEJMDAEDC_OFFSET))(a1);
		}

	};
