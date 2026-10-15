#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/PropShaderCtrlStatus.h"
#include "unitysdk/RPG/GameCore/PropType.h"
class MKCGPPKDOKG;
namespace RPG::Client { class TrivisionSpeed; }
namespace System { class Nullable; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Texture2D; }

#define MGHKENFHAAC_CCTOR_OFFSET UNITYSDK_OFFSET(0xB91FBA0)
#define MGHKENFHAAC_CTOR_OFFSET UNITYSDK_OFFSET(0xB91E140)
#define MGHKENFHAAC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB91E800)
#define MGHKENFHAAC_DPCPFFLAFLJ_OFFSET UNITYSDK_OFFSET(0xB91EBC0)
#define MGHKENFHAAC_FIILNOGLBJC_OFFSET UNITYSDK_OFFSET(0xB91E1A0)
#define MGHKENFHAAC_HCDFANMPBHI_OFFSET UNITYSDK_OFFSET(0xB91F710)
#define MGHKENFHAAC_IEFDLAEDBJO_OFFSET UNITYSDK_OFFSET(0xB91F880)
#define MGHKENFHAAC_JBIMPDFLALH_OFFSET UNITYSDK_OFFSET(0xB91FAC0)
#define MGHKENFHAAC_JFCLCCNDAJP_OFFSET UNITYSDK_OFFSET(0xB91F9D0)
#define MGHKENFHAAC_KFHCIIPKNPF_OFFSET UNITYSDK_OFFSET(0xB91FB40)
#define MGHKENFHAAC_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xB91EB10)
#define MGHKENFHAAC_MAAJEKHHKDA_OFFSET UNITYSDK_OFFSET(0xB91F910)
#define MGHKENFHAAC_MBCNPJJPLAM_OFFSET UNITYSDK_OFFSET(0xB91EF90)
#define MGHKENFHAAC_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xB91E150)
#define MGHKENFHAAC_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xB91E7C0)
#define MGHKENFHAAC_PPMCCPDEFEF_OFFSET UNITYSDK_OFFSET(0xB91ED70)
#define MGHKENFHAAC_TICK_OFFSET UNITYSDK_OFFSET(0xB91E860)

	class MGHKENFHAAC : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::MKCGPPKDOKG* HJCHFPEEHDC; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CPCLONDNJAC; // 0x20
		::RPG::GameCore::PropShaderCtrlStatus CPPNFCBEJLK; // 0x28
		::RPG::GameCore::PropType KAFPJCDFIDD; // 0x2C
		static ::UnityEngine::MaterialPropertyBlock** StaticGet_IDGFNFGGDOL()
		{
			return (::UnityEngine::MaterialPropertyBlock**)UnitySDK::FromName("", "MGHKENFHAAC")->GetStaticField(0x6F940);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::TrivisionSpeed*>** StaticGet_MKINLGAIBHC()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::TrivisionSpeed*>**)UnitySDK::FromName("", "MGHKENFHAAC")->GetStaticField(0x6F948);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHKENFHAAC_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGHKENFHAAC_CCTOR_OFFSET))();
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHKENFHAAC_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHKENFHAAC_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHKENFHAAC_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MGHKENFHAAC_TICK_OFFSET))(this, a1);
		}

		::System::Void LMCEDCHJKFF(::RPG::GameCore::PropType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropType))((::PBYTE)hIl2Cpp + MGHKENFHAAC_LMCEDCHJKFF_OFFSET))(this, a1);
		}

		::System::Void PPMCCPDEFEF(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MGHKENFHAAC_PPMCCPDEFEF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MBCNPJJPLAM(::UnityEngine::Texture2D* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MGHKENFHAAC_MBCNPJJPLAM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FIILNOGLBJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHKENFHAAC_FIILNOGLBJC_OFFSET))(this);
		}

		::System::Void HCDFANMPBHI(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MGHKENFHAAC_HCDFANMPBHI_OFFSET))(this, a1, a2);
		}

		::System::Void IEFDLAEDBJO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MGHKENFHAAC_IEFDLAEDBJO_OFFSET))(this, a1);
		}

		::System::Void MAAJEKHHKDA(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MGHKENFHAAC_MAAJEKHHKDA_OFFSET))(this, a1, a2);
		}

		::System::Void JFCLCCNDAJP(::System::UInt32 a1, ::System::Nullable* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Nullable*, ::System::Boolean))((::PBYTE)hIl2Cpp + MGHKENFHAAC_JFCLCCNDAJP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DPCPFFLAFLJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MGHKENFHAAC_DPCPFFLAFLJ_OFFSET))(this, a1);
		}

		::System::Void JBIMPDFLALH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHKENFHAAC_JBIMPDFLALH_OFFSET))(this);
		}

		::System::UInt32 KFHCIIPKNPF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHKENFHAAC_KFHCIIPKNPF_OFFSET))(this);
		}

	};
