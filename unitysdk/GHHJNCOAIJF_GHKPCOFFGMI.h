#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHHJNCOAIJF;
class GHHJNCOAIJF_GHKPCOFFGMI;
class IHGIENOHBMJ;
namespace RPG::Client::Promises { class IPromise; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define GHHJNCOAIJF_GHKPCOFFGMI_BACGLGPIIIH_OFFSET UNITYSDK_OFFSET(0x15A21090)
#define GHHJNCOAIJF_GHKPCOFFGMI_CTOR_OFFSET UNITYSDK_OFFSET(0x15A20C60)
#define GHHJNCOAIJF_GHKPCOFFGMI_EGBKBGPCAOH_OFFSET UNITYSDK_OFFSET(0x15A20CF0)
#define GHHJNCOAIJF_GHKPCOFFGMI_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x15A20C70)
#define GHHJNCOAIJF_GHKPCOFFGMI_IDOCGNIBDFE_OFFSET UNITYSDK_OFFSET(0x15A1FE10)

inline static constexpr unsigned int GHHJNCOAIJF_GHKPCOFFGMI_TypeDefinitionIndex = 69352;

	class GHHJNCOAIJF_GHKPCOFFGMI : public ::System::Object
	{
	public:
		static ::GHHJNCOAIJF_GHKPCOFFGMI** StaticGet_FLMODBLFAGD()
		{
			return (::GHHJNCOAIJF_GHKPCOFFGMI**)UnitySDK::FromName("", "GHKPCOFFGMI")->GetStaticField(0x5C3F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHJNCOAIJF_GHKPCOFFGMI_CTOR_OFFSET))(this);
		}

		static ::GHHJNCOAIJF_GHKPCOFFGMI* GGBLHEHJBDO()
		{
			return ((::GHHJNCOAIJF_GHKPCOFFGMI*(*)())((::PBYTE)hIl2Cpp + GHHJNCOAIJF_GHKPCOFFGMI_GGBLHEHJBDO_OFFSET))();
		}

		::RPG::Client::Promises::IPromise* IDOCGNIBDFE(::GHHJNCOAIJF* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::GHHJNCOAIJF*))((::PBYTE)hIl2Cpp + GHHJNCOAIJF_GHKPCOFFGMI_IDOCGNIBDFE_OFFSET))(this, a1);
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
