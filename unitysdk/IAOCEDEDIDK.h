#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class WaitForEndOfFrame; }
namespace UnityEngine { class WaitForFixedUpdate; }
namespace UnityEngine { class WaitForSeconds; }

#define IAOCEDEDIDK_BMJLKKNAPBP_OFFSET UNITYSDK_OFFSET(0x1EC1D4F0)
#define IAOCEDEDIDK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC1D940)
#define IAOCEDEDIDK_HPNAIEIMMPN_OFFSET UNITYSDK_OFFSET(0x1EC1D5B0)
#define IAOCEDEDIDK_LCOHAPIIFMC_OFFSET UNITYSDK_OFFSET(0x1EC1D550)

inline static constexpr unsigned int IAOCEDEDIDK_TypeDefinitionIndex = 35173;

	class IAOCEDEDIDK : public ::System::Object
	{
	public:
		static ::UnityEngine::WaitForEndOfFrame** StaticGet_GKKHJLLNIOJ()
		{
			return (::UnityEngine::WaitForEndOfFrame**)UnitySDK::FromName("", "IAOCEDEDIDK")->GetStaticField(0x4B670);
		}

		static ::UnityEngine::WaitForFixedUpdate** StaticGet_KIONDMCELHN()
		{
			return (::UnityEngine::WaitForFixedUpdate**)UnitySDK::FromName("", "IAOCEDEDIDK")->GetStaticField(0x4B678);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Single, ::UnityEngine::WaitForSeconds*>** StaticGet_HANKAANFAFF()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Single, ::UnityEngine::WaitForSeconds*>**)UnitySDK::FromName("", "IAOCEDEDIDK")->GetStaticField(0x4B680);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAOCEDEDIDK_CCTOR_OFFSET))();
		}

		static ::UnityEngine::WaitForEndOfFrame* BMJLKKNAPBP()
		{
			return ((::UnityEngine::WaitForEndOfFrame*(*)())((::PBYTE)hIl2Cpp + IAOCEDEDIDK_BMJLKKNAPBP_OFFSET))();
		}

		static ::UnityEngine::WaitForFixedUpdate* LCOHAPIIFMC()
		{
			return ((::UnityEngine::WaitForFixedUpdate*(*)())((::PBYTE)hIl2Cpp + IAOCEDEDIDK_LCOHAPIIFMC_OFFSET))();
		}

		static ::UnityEngine::WaitForSeconds* HPNAIEIMMPN(::System::Single a1)
		{
			return ((::UnityEngine::WaitForSeconds*(*)(::System::Single))((::PBYTE)hIl2Cpp + IAOCEDEDIDK_HPNAIEIMMPN_OFFSET))(a1);
		}

	};
