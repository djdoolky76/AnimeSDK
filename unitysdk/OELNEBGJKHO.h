#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetEventPort.h"
#include "unitysdk/RPG/Client/AssetEventType.h"
#include "unitysdk/System/Object.h"
class BOCEFFDMFPM;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client::AssetSystem { class AssetLoader; }
namespace System { class Action; }
namespace System { class Object; }

#define OELNEBGJKHO_CAEOBEFMIML_OFFSET UNITYSDK_OFFSET(0x1C4CCE70)
#define OELNEBGJKHO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4CCFC0)
#define OELNEBGJKHO_CJIJHBPEFEM_OFFSET UNITYSDK_OFFSET(0x1C4CC4C0)
#define OELNEBGJKHO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4CCFB0)
#define OELNEBGJKHO_FMPAOKGPMNG_OFFSET UNITYSDK_OFFSET(0x1C4CC970)
#define OELNEBGJKHO_IKAHNBNDHDL_1_OFFSET UNITYSDK_OFFSET(0x1C4CCAF0)
#define OELNEBGJKHO_IKAHNBNDHDL_OFFSET UNITYSDK_OFFSET(0x1C4CC9E0)
#define OELNEBGJKHO_KIDNPIKFFHG_1_OFFSET UNITYSDK_OFFSET(0x1C4CC620)
#define OELNEBGJKHO_KIDNPIKFFHG_OFFSET UNITYSDK_OFFSET(0x1C4CC510)
#define OELNEBGJKHO_KLINKDOIOEB_1_OFFSET UNITYSDK_OFFSET(0x1C4CC850)
#define OELNEBGJKHO_KLINKDOIOEB_OFFSET UNITYSDK_OFFSET(0x1C4CC740)
#define OELNEBGJKHO_LPJACIGFNKK_OFFSET UNITYSDK_OFFSET(0x1C4CCF60)
#define OELNEBGJKHO_MFEFNKKFMFF_OFFSET UNITYSDK_OFFSET(0x1C4CCEC0)
#define OELNEBGJKHO_OIAMCLCPABC_OFFSET UNITYSDK_OFFSET(0x1C4CCF10)
#define OELNEBGJKHO_PBDFCIEGMFD_1_OFFSET UNITYSDK_OFFSET(0x1C4CCD10)
#define OELNEBGJKHO_PBDFCIEGMFD_OFFSET UNITYSDK_OFFSET(0x1C4CCC00)
#define OELNEBGJKHO_PLCHMLBLIJP_OFFSET UNITYSDK_OFFSET(0x1C4CCE20)

inline static constexpr unsigned int OELNEBGJKHO_TypeDefinitionIndex = 41396;

	class OELNEBGJKHO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Action*>** StaticGet_DHPACGHECNM()
		{
			return (::Il2CppArray<::System::Action*>**)UnitySDK::FromName("", "OELNEBGJKHO")->GetStaticField(0x14F30);
		}

		// static const ::System::Object FPJHKPHLOPA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OELNEBGJKHO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OELNEBGJKHO_CCTOR_OFFSET))();
		}

		static ::System::Int32 CJIJHBPEFEM(::RPG::Client::AssetEventType a1, ::RPG::Client::AssetEventPort a2)
		{
			return ((::System::Int32(*)(::RPG::Client::AssetEventType, ::RPG::Client::AssetEventPort))((::PBYTE)hIl2Cpp + OELNEBGJKHO_CJIJHBPEFEM_OFFSET))(a1, a2);
		}

		static ::System::Void KIDNPIKFFHG(::RPG::Client::AssetEventType a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::RPG::Client::AssetEventType, ::System::Action*))((::PBYTE)hIl2Cpp + OELNEBGJKHO_KIDNPIKFFHG_OFFSET))(a1, a2);
		}

		static ::System::Void KIDNPIKFFHG_1(::RPG::Client::AssetEventType a1, ::RPG::Client::AssetEventPort a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::RPG::Client::AssetEventType, ::RPG::Client::AssetEventPort, ::System::Action*))((::PBYTE)hIl2Cpp + OELNEBGJKHO_KIDNPIKFFHG_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void KLINKDOIOEB(::RPG::Client::AssetEventType a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::RPG::Client::AssetEventType, ::System::Action*))((::PBYTE)hIl2Cpp + OELNEBGJKHO_KLINKDOIOEB_OFFSET))(a1, a2);
		}

		static ::System::Void KLINKDOIOEB_1(::RPG::Client::AssetEventType a1, ::RPG::Client::AssetEventPort a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::RPG::Client::AssetEventType, ::RPG::Client::AssetEventPort, ::System::Action*))((::PBYTE)hIl2Cpp + OELNEBGJKHO_KLINKDOIOEB_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FMPAOKGPMNG()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OELNEBGJKHO_FMPAOKGPMNG_OFFSET))();
		}

		static ::System::Void IKAHNBNDHDL(::RPG::Client::AssetEventType a1, ::RPG::Client::IAssetOperation* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::RPG::Client::AssetEventType, ::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + OELNEBGJKHO_IKAHNBNDHDL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void IKAHNBNDHDL_1(::RPG::Client::AssetEventType a1, ::RPG::Client::AssetEventPort a2, ::RPG::Client::IAssetOperation* a3, ::Il2CppArray<::System::Object*>* a4)
		{
			return ((::System::Void(*)(::RPG::Client::AssetEventType, ::RPG::Client::AssetEventPort, ::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + OELNEBGJKHO_IKAHNBNDHDL_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void PBDFCIEGMFD(::RPG::Client::AssetEventType a1, ::RPG::Client::IAssetOperation* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::RPG::Client::AssetEventType, ::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + OELNEBGJKHO_PBDFCIEGMFD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PBDFCIEGMFD_1(::RPG::Client::AssetEventType a1, ::RPG::Client::AssetEventPort a2, ::RPG::Client::IAssetOperation* a3, ::Il2CppArray<::System::Object*>* a4)
		{
			return ((::System::Void(*)(::RPG::Client::AssetEventType, ::RPG::Client::AssetEventPort, ::RPG::Client::IAssetOperation*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + OELNEBGJKHO_PBDFCIEGMFD_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void PLCHMLBLIJP(::BOCEFFDMFPM* a1, ::RPG::Client::AssetEventPort a2)
		{
			return ((::System::Void(*)(::BOCEFFDMFPM*, ::RPG::Client::AssetEventPort))((::PBYTE)hIl2Cpp + OELNEBGJKHO_PLCHMLBLIJP_OFFSET))(a1, a2);
		}

		static ::System::Void CAEOBEFMIML(::BOCEFFDMFPM* a1, ::RPG::Client::AssetEventPort a2)
		{
			return ((::System::Void(*)(::BOCEFFDMFPM*, ::RPG::Client::AssetEventPort))((::PBYTE)hIl2Cpp + OELNEBGJKHO_CAEOBEFMIML_OFFSET))(a1, a2);
		}

		static ::System::Void MFEFNKKFMFF(::BOCEFFDMFPM* a1, ::RPG::Client::AssetEventPort a2)
		{
			return ((::System::Void(*)(::BOCEFFDMFPM*, ::RPG::Client::AssetEventPort))((::PBYTE)hIl2Cpp + OELNEBGJKHO_MFEFNKKFMFF_OFFSET))(a1, a2);
		}

		static ::System::Void OIAMCLCPABC(::RPG::Client::AssetSystem::AssetLoader* a1, ::RPG::Client::AssetEventPort a2)
		{
			return ((::System::Void(*)(::RPG::Client::AssetSystem::AssetLoader*, ::RPG::Client::AssetEventPort))((::PBYTE)hIl2Cpp + OELNEBGJKHO_OIAMCLCPABC_OFFSET))(a1, a2);
		}

		static ::System::Void LPJACIGFNKK(::RPG::Client::AssetSystem::AssetLoader* a1, ::RPG::Client::AssetEventPort a2)
		{
			return ((::System::Void(*)(::RPG::Client::AssetSystem::AssetLoader*, ::RPG::Client::AssetEventPort))((::PBYTE)hIl2Cpp + OELNEBGJKHO_LPJACIGFNKK_OFFSET))(a1, a2);
		}

	};
