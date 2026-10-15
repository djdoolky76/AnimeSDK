#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/LightTypeID.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LIKAMNCAMKM_BBJDHOGCFIJ_OFFSET UNITYSDK_OFFSET(0xB6D5900)
#define LIKAMNCAMKM_BLDIPHDAKOK_OFFSET UNITYSDK_OFFSET(0xB6D57D0)
#define LIKAMNCAMKM_CCTOR_OFFSET UNITYSDK_OFFSET(0xB6D5A40)
#define LIKAMNCAMKM_CKDLKPBGKEK_OFFSET UNITYSDK_OFFSET(0xB6D4C50)
#define LIKAMNCAMKM_CTOR_OFFSET UNITYSDK_OFFSET(0xB6D5A30)
#define LIKAMNCAMKM_FEMDLBIPMBD_OFFSET UNITYSDK_OFFSET(0xB6D5740)
#define LIKAMNCAMKM_GCNOFBPLEKG_OFFSET UNITYSDK_OFFSET(0xB6D4D70)
#define LIKAMNCAMKM_JGEBKNPNHKN_OFFSET UNITYSDK_OFFSET(0xB6D4CB0)
#define LIKAMNCAMKM_JHNKOKGGNFA_OFFSET UNITYSDK_OFFSET(0xB6D43A0)
#define LIKAMNCAMKM_NGGCPEFIKPH_OFFSET UNITYSDK_OFFSET(0xB6D4BF0)
#define LIKAMNCAMKM_PGJFEMNEIBM_OFFSET UNITYSDK_OFFSET(0xB6D4D10)

inline static constexpr unsigned int LIKAMNCAMKM_TypeDefinitionIndex = 49052;

	class LIKAMNCAMKM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::ScenenLightManager::LightTypeID>** StaticGet_EHHBIPNDLKB()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::ScenenLightManager::LightTypeID>**)UnitySDK::FromName("", "LIKAMNCAMKM")->GetStaticField(0x5D080);
		}

		static ::System::Collections::Generic::Dictionary_2<::ScenenLightManager::LightTypeID, ::System::Type*>** StaticGet_DMEEELDIAII()
		{
			return (::System::Collections::Generic::Dictionary_2<::ScenenLightManager::LightTypeID, ::System::Type*>**)UnitySDK::FromName("", "LIKAMNCAMKM")->GetStaticField(0x5D088);
		}

		static ::System::Collections::Generic::Dictionary_2<::ScenenLightManager::LightTypeID, ::System::String*>** StaticGet_DKKNECNFHBP()
		{
			return (::System::Collections::Generic::Dictionary_2<::ScenenLightManager::LightTypeID, ::System::String*>**)UnitySDK::FromName("", "LIKAMNCAMKM")->GetStaticField(0x5D090);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::ScenenLightManager::LightTypeID>** StaticGet_PMLCKHAHHNL()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::ScenenLightManager::LightTypeID>**)UnitySDK::FromName("", "LIKAMNCAMKM")->GetStaticField(0x5D098);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKAMNCAMKM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIKAMNCAMKM_CCTOR_OFFSET))();
		}

		static ::System::Void JHNKOKGGNFA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIKAMNCAMKM_JHNKOKGGNFA_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::ScenenLightManager::LightTypeID>* NGGCPEFIKPH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::ScenenLightManager::LightTypeID>*(*)())((::PBYTE)hIl2Cpp + LIKAMNCAMKM_NGGCPEFIKPH_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::ScenenLightManager::LightTypeID, ::System::String*>* CKDLKPBGKEK()
		{
			return ((::System::Collections::Generic::Dictionary_2<::ScenenLightManager::LightTypeID, ::System::String*>*(*)())((::PBYTE)hIl2Cpp + LIKAMNCAMKM_CKDLKPBGKEK_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::ScenenLightManager::LightTypeID, ::System::Type*>* JGEBKNPNHKN()
		{
			return ((::System::Collections::Generic::Dictionary_2<::ScenenLightManager::LightTypeID, ::System::Type*>*(*)())((::PBYTE)hIl2Cpp + LIKAMNCAMKM_JGEBKNPNHKN_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::ScenenLightManager::LightTypeID>* PGJFEMNEIBM()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Type*, ::ScenenLightManager::LightTypeID>*(*)())((::PBYTE)hIl2Cpp + LIKAMNCAMKM_PGJFEMNEIBM_OFFSET))();
		}

		static ::System::Void GCNOFBPLEKG()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIKAMNCAMKM_GCNOFBPLEKG_OFFSET))();
		}

		static ::System::Void FEMDLBIPMBD()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIKAMNCAMKM_FEMDLBIPMBD_OFFSET))();
		}

		static ::ScenenLightManager::LightTypeID BLDIPHDAKOK(::System::String* a1)
		{
			return ((::ScenenLightManager::LightTypeID(*)(::System::String*))((::PBYTE)hIl2Cpp + LIKAMNCAMKM_BLDIPHDAKOK_OFFSET))(a1);
		}

		static ::System::String* BBJDHOGCFIJ(::ScenenLightManager::LightTypeID a1)
		{
			return ((::System::String*(*)(::ScenenLightManager::LightTypeID))((::PBYTE)hIl2Cpp + LIKAMNCAMKM_BBJDHOGCFIJ_OFFSET))(a1);
		}

	};
