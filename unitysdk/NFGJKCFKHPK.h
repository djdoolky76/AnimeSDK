#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NFGJKCFKHPK_CCTOR_OFFSET UNITYSDK_OFFSET(0xBB8BE00)

inline static constexpr unsigned int NFGJKCFKHPK_TypeDefinitionIndex = 57184;

	class NFGJKCFKHPK : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_IGDHNKPPFMB()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("", "NFGJKCFKHPK")->GetStaticField(0x1EC20);
		}

		static ::Il2CppArray<::System::Int32>** StaticGet_LPEGKMECBEL()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("", "NFGJKCFKHPK")->GetStaticField(0x1EC28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFGJKCFKHPK_CCTOR_OFFSET))();
		}

	};
