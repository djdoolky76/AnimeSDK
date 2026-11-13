#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPNFPHJPOMM_BNODLLNHEME;
class KPNFPHJPOMM_LKPMAAJCLGH;
namespace RPG::Client { class IAssetOperation; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KPNFPHJPOMM_PEAHKPNLOAA_ABFDIFLKGDF_OFFSET UNITYSDK_OFFSET(0x191384A0)
#define KPNFPHJPOMM_PEAHKPNLOAA_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x19133380)
#define KPNFPHJPOMM_PEAHKPNLOAA_CGNDLCINEAH_OFFSET UNITYSDK_OFFSET(0x191330B0)
#define KPNFPHJPOMM_PEAHKPNLOAA_CTOR_OFFSET UNITYSDK_OFFSET(0x19132930)
#define KPNFPHJPOMM_PEAHKPNLOAA_EEMDBGCMHLP_OFFSET UNITYSDK_OFFSET(0x19132AA0)
#define KPNFPHJPOMM_PEAHKPNLOAA_EIOEPGGKKKK_OFFSET UNITYSDK_OFFSET(0x19133110)
#define KPNFPHJPOMM_PEAHKPNLOAA_HNMGPHCHMLO_OFFSET UNITYSDK_OFFSET(0x19132F40)
#define KPNFPHJPOMM_PEAHKPNLOAA_OIBKPJEGPOK_OFFSET UNITYSDK_OFFSET(0x19137F30)
#define KPNFPHJPOMM_PEAHKPNLOAA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x191383C0)

inline static constexpr unsigned int KPNFPHJPOMM_PEAHKPNLOAA_TypeDefinitionIndex = 50257;

	class KPNFPHJPOMM_PEAHKPNLOAA : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* HBDBEPCFONA; // 0x10
		::RPG::Client::IAssetOperation* NCIEFEMABLF; // 0x18
		::System::Boolean JJGABAMOFCI; // 0x20
		::System::Void _ctor(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + KPNFPHJPOMM_PEAHKPNLOAA_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNFPHJPOMM_PEAHKPNLOAA_TOSTRING_OFFSET))(this);
		}

		::System::Void EEMDBGCMHLP(::KPNFPHJPOMM_BNODLLNHEME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPNFPHJPOMM_BNODLLNHEME*))((::PBYTE)hIl2Cpp + KPNFPHJPOMM_PEAHKPNLOAA_EEMDBGCMHLP_OFFSET))(this, a1);
		}

		::System::Void OIBKPJEGPOK(::KPNFPHJPOMM_LKPMAAJCLGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPNFPHJPOMM_LKPMAAJCLGH*))((::PBYTE)hIl2Cpp + KPNFPHJPOMM_PEAHKPNLOAA_OIBKPJEGPOK_OFFSET))(this, a1);
		}

		::System::Void HNMGPHCHMLO(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KPNFPHJPOMM_PEAHKPNLOAA_HNMGPHCHMLO_OFFSET))(this, a1);
		}

		::System::Boolean CGNDLCINEAH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNFPHJPOMM_PEAHKPNLOAA_CGNDLCINEAH_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNFPHJPOMM_PEAHKPNLOAA_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void EIOEPGGKKKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNFPHJPOMM_PEAHKPNLOAA_EIOEPGGKKKK_OFFSET))(this);
		}

		::RPG::Client::IAssetOperation* ABFDIFLKGDF()
		{
			return ((::RPG::Client::IAssetOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNFPHJPOMM_PEAHKPNLOAA_ABFDIFLKGDF_OFFSET))(this);
		}

	};
