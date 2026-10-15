#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYoSDKJSON { class JSONObject; }
namespace System::Threading { class Thread; }

#define MGGAIAJILFC_ALHEOBCEJGN_OFFSET UNITYSDK_OFFSET(0xB9160F0)
#define MGGAIAJILFC_CTOR_OFFSET UNITYSDK_OFFSET(0xB916A10)
#define MGGAIAJILFC_IHJIAMCFFGF_OFFSET UNITYSDK_OFFSET(0xB9169D0)
#define MGGAIAJILFC_JBFEFINPPFP_OFFSET UNITYSDK_OFFSET(0xB9160A0)
#define MGGAIAJILFC_LLPGKJNAMIN_OFFSET UNITYSDK_OFFSET(0xB916960)
#define MGGAIAJILFC_MNANMMJADGN_OFFSET UNITYSDK_OFFSET(0xB9162F0)

inline static constexpr unsigned int MGGAIAJILFC_TypeDefinitionIndex = 69481;

	class MGGAIAJILFC : public ::System::Object
	{
	public:
		static ::System::Threading::Thread** StaticGet_JMNAAFBIHOP()
		{
			return (::System::Threading::Thread**)UnitySDK::FromName("", "MGGAIAJILFC")->GetStaticField(0x68350);
		}

		static ::System::Int32* StaticGet_JEPIGKPBNLD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "MGGAIAJILFC")->GetStaticField(0x14CE0);
		}

		static ::System::Boolean* StaticGet_GBKLKFDBLDH()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MGGAIAJILFC")->GetStaticField(0x14CE4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGAIAJILFC_CTOR_OFFSET))(this);
		}

		static ::System::Void JBFEFINPPFP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGGAIAJILFC_JBFEFINPPFP_OFFSET))();
		}

		static ::System::Boolean ALHEOBCEJGN()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MGGAIAJILFC_ALHEOBCEJGN_OFFSET))();
		}

		static ::System::Void MNANMMJADGN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGGAIAJILFC_MNANMMJADGN_OFFSET))();
		}

		static ::System::Void LLPGKJNAMIN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MGGAIAJILFC_LLPGKJNAMIN_OFFSET))(a1);
		}

		static ::System::Void IHJIAMCFFGF(::MiHoYoSDKJSON::JSONObject* a1)
		{
			return ((::System::Void(*)(::MiHoYoSDKJSON::JSONObject*))((::PBYTE)hIl2Cpp + MGGAIAJILFC_IHJIAMCFFGF_OFFSET))(a1);
		}

	};
