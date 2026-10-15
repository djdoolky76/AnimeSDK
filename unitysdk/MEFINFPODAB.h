#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GLDAMFHLMPM_UIElementType.h"
#include "unitysdk/RPG/Client/CloudUIBattlePosRegion.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DFFPKLFKGAO;
class GLDAMFHLMPM_LINELOKDPNG;
class MADHNHEMBOJ;
namespace RPG::Client { class CloudUIPosReporterMono; }
namespace System { class Nullable; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define MEFINFPODAB_AEDKLEBHLCG_OFFSET UNITYSDK_OFFSET(0xB8C2790)
#define MEFINFPODAB_CDAGCKHFKBO_OFFSET UNITYSDK_OFFSET(0xB8C2930)
#define MEFINFPODAB_CTOR_OFFSET UNITYSDK_OFFSET(0xB8C3750)
#define MEFINFPODAB_DNLHBKDMIHI_OFFSET UNITYSDK_OFFSET(0xB8C2400)
#define MEFINFPODAB_GNPKMOLBNMI_OFFSET UNITYSDK_OFFSET(0xB8C2CB0)
#define MEFINFPODAB_HLLAJNELHPL_OFFSET UNITYSDK_OFFSET(0xB8C3480)
#define MEFINFPODAB_IAOPPMMMOII_OFFSET UNITYSDK_OFFSET(0xB8C35F0)
#define MEFINFPODAB_IOBFPODCOFL_OFFSET UNITYSDK_OFFSET(0xB8C2650)
#define MEFINFPODAB_OFDKPMPKAIA_OFFSET UNITYSDK_OFFSET(0xB8C3720)
#define MEFINFPODAB_OJPLJKMHFPE_OFFSET UNITYSDK_OFFSET(0xB8C31F0)

inline static constexpr unsigned int MEFINFPODAB_TypeDefinitionIndex = 59849;

	class MEFINFPODAB : public ::System::Object
	{
	public:
		::RPG::Client::CloudUIBattlePosRegion LOJFDBJKOEB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFINFPODAB_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* DNLHBKDMIHI(::RPG::Client::CloudUIPosReporterMono* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::RPG::Client::CloudUIPosReporterMono*))((::PBYTE)hIl2Cpp + MEFINFPODAB_DNLHBKDMIHI_OFFSET))(this, a1);
		}

		::System::Boolean IOBFPODCOFL(::UnityEngine::RectTransform* a1, ::GLDAMFHLMPM_LINELOKDPNG* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*, ::GLDAMFHLMPM_LINELOKDPNG*))((::PBYTE)hIl2Cpp + MEFINFPODAB_IOBFPODCOFL_OFFSET))(this, a1, a2);
		}

		::System::Boolean AEDKLEBHLCG(::UnityEngine::RectTransform* a1, ::GLDAMFHLMPM_LINELOKDPNG* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*, ::GLDAMFHLMPM_LINELOKDPNG*))((::PBYTE)hIl2Cpp + MEFINFPODAB_AEDKLEBHLCG_OFFSET))(this, a1, a2);
		}

		::GLDAMFHLMPM_LINELOKDPNG* GNPKMOLBNMI(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::GLDAMFHLMPM_UIElementType a4)
		{
			return ((::GLDAMFHLMPM_LINELOKDPNG*(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::GLDAMFHLMPM_UIElementType))((::PBYTE)hIl2Cpp + MEFINFPODAB_GNPKMOLBNMI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Nullable* CDAGCKHFKBO()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFINFPODAB_CDAGCKHFKBO_OFFSET))(this);
		}

		::System::Nullable* OJPLJKMHFPE()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFINFPODAB_OJPLJKMHFPE_OFFSET))(this);
		}

		::MADHNHEMBOJ* HLLAJNELHPL()
		{
			return ((::MADHNHEMBOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFINFPODAB_HLLAJNELHPL_OFFSET))(this);
		}

		::DFFPKLFKGAO* IAOPPMMMOII()
		{
			return ((::DFFPKLFKGAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFINFPODAB_IAOPPMMMOII_OFFSET))(this);
		}

		::System::Single OFDKPMPKAIA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFINFPODAB_OFDKPMPKAIA_OFFSET))(this);
		}

	};
