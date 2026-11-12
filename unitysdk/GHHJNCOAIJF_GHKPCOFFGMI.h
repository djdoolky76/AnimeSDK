#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHHJNCOAIJF;
class GHHJNCOAIJF_GHKPCOFFGMI;
class IHGIENOHBMJ;
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define GHHJNCOAIJF_GHKPCOFFGMI_BACGLGPIIIH_OFFSET UNITYSDK_OFFSET(0x1695B790)
#define GHHJNCOAIJF_GHKPCOFFGMI_CTOR_OFFSET UNITYSDK_OFFSET(0x1695B360)
#define GHHJNCOAIJF_GHKPCOFFGMI_EGBKBGPCAOH_OFFSET UNITYSDK_OFFSET(0x1695B3F0)
#define GHHJNCOAIJF_GHKPCOFFGMI_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x1695B370)
#define GHHJNCOAIJF_GHKPCOFFGMI_IDOCGNIBDFE_OFFSET UNITYSDK_OFFSET(0x1695A500)

inline static constexpr unsigned int GHHJNCOAIJF_GHKPCOFFGMI_TypeDefinitionIndex = 71306;

	class GHHJNCOAIJF_GHKPCOFFGMI : public ::System::Object
	{
	public:
		static ::GHHJNCOAIJF_GHKPCOFFGMI** StaticGet_FLMODBLFAGD()
		{
			return (::GHHJNCOAIJF_GHKPCOFFGMI**)UnitySDK::FromName("", "GHKPCOFFGMI")->GetStaticField(0x68890);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHJNCOAIJF_GHKPCOFFGMI_CTOR_OFFSET))(this);
		}

		static ::GHHJNCOAIJF_GHKPCOFFGMI* GGBLHEHJBDO()
		{
			return ((::GHHJNCOAIJF_GHKPCOFFGMI*(*)())((::PBYTE)hIl2Cpp + GHHJNCOAIJF_GHKPCOFFGMI_GGBLHEHJBDO_OFFSET))();
		}

		::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>* IDOCGNIBDFE(::GHHJNCOAIJF* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::IHGIENOHBMJ*>*(*)(::PVOID, ::GHHJNCOAIJF*))((::PBYTE)hIl2Cpp + GHHJNCOAIJF_GHKPCOFFGMI_IDOCGNIBDFE_OFFSET))(this, a1);
		}

		static ::UnityEngine::Networking::UnityWebRequest* EGBKBGPCAOH(::GHHJNCOAIJF* a1)
		{
			return ((::UnityEngine::Networking::UnityWebRequest*(*)(::GHHJNCOAIJF*))((::PBYTE)hIl2Cpp + GHHJNCOAIJF_GHKPCOFFGMI_EGBKBGPCAOH_OFFSET))(a1);
		}

		static ::System::Void BACGLGPIIIH(::UnityEngine::Networking::UnityWebRequest* a1, ::IHGIENOHBMJ* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Networking::UnityWebRequest*, ::IHGIENOHBMJ*))((::PBYTE)hIl2Cpp + GHHJNCOAIJF_GHKPCOFFGMI_BACGLGPIIIH_OFFSET))(a1, a2);
		}

	};
