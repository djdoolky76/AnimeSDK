#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDILEMALGNC.h"
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GNMFHHHHDPB_CTOR_OFFSET UNITYSDK_OFFSET(0x15B0E090)
#define GNMFHHHHDPB_DHBILCLABJI_OFFSET UNITYSDK_OFFSET(0x15B0EB50)
#define GNMFHHHHDPB_EKPMCPFKDGN_OFFSET UNITYSDK_OFFSET(0x15B0E810)
#define GNMFHHHHDPB_EOEOIDKCKOJ_OFFSET UNITYSDK_OFFSET(0x15B0E8D0)
#define GNMFHHHHDPB_KFOPKEFOHFE_OFFSET UNITYSDK_OFFSET(0x15B0E330)
#define GNMFHHHHDPB_NHEDINBLOIH_OFFSET UNITYSDK_OFFSET(0x15B0E2D0)
#define GNMFHHHHDPB_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x15B0E780)
#define GNMFHHHHDPB_PMNAIAIJLGC_OFFSET UNITYSDK_OFFSET(0x15B0E620)

inline static constexpr unsigned int GNMFHHHHDPB_TypeDefinitionIndex = 69632;

	class GNMFHHHHDPB : public ::MDILEMALGNC
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>* CAFMAJOMAGN; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>* IALCJKLBKOF; // 0x40
		::System::Int32 NLNABHMIKKN; // 0x48
		static ::System::Int32* StaticGet_COEMCOBPMKD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "GNMFHHHHDPB")->GetStaticField(0x15390);
		}

		::System::Void _ctor(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + GNMFHHHHDPB_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean NHEDINBLOIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMFHHHHDPB_NHEDINBLOIH_OFFSET))(this);
		}

		::System::Void KFOPKEFOHFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMFHHHHDPB_KFOPKEFOHFE_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMFHHHHDPB_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Int32 EKPMCPFKDGN(::System::Action* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GNMFHHHHDPB_EKPMCPFKDGN_OFFSET))(this, a1);
		}

		::System::Void PMNAIAIJLGC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GNMFHHHHDPB_PMNAIAIJLGC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>* EOEOIDKCKOJ()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMFHHHHDPB_EOEOIDKCKOJ_OFFSET))(this);
		}

		::System::Void DHBILCLABJI(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>*))((::PBYTE)hIl2Cpp + GNMFHHHHDPB_DHBILCLABJI_OFFSET))(this, a1);
		}

	};
