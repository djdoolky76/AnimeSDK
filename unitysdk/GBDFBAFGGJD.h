#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NewsTicker_MoveDirectionType.h"
#include "unitysdk/System/Object.h"
class ADDNEJFFFJB;
class JAABBDCGHFF;
class JHBKDMFDFHF;
class MKMLDELEKJC;
class MLNIAHKIEJH;

#define GBDFBAFGGJD_AGNHJBPONJM_OFFSET UNITYSDK_OFFSET(0x159402D0)
#define GBDFBAFGGJD_CCTOR_OFFSET UNITYSDK_OFFSET(0x15940470)

inline static constexpr unsigned int GBDFBAFGGJD_TypeDefinitionIndex = 68987;

	class GBDFBAFGGJD : public ::System::Object
	{
	public:
		static ::JAABBDCGHFF** StaticGet_HGLFLENHMBB()
		{
			return (::JAABBDCGHFF**)UnitySDK::FromName("", "GBDFBAFGGJD")->GetStaticField(0x57280);
		}

		static ::MLNIAHKIEJH** StaticGet_JLALCNPLAPK()
		{
			return (::MLNIAHKIEJH**)UnitySDK::FromName("", "GBDFBAFGGJD")->GetStaticField(0x57288);
		}

		static ::MKMLDELEKJC** StaticGet_NLJKLODIOJF()
		{
			return (::MKMLDELEKJC**)UnitySDK::FromName("", "GBDFBAFGGJD")->GetStaticField(0x57290);
		}

		static ::JHBKDMFDFHF** StaticGet_PDHNPBBMKGD()
		{
			return (::JHBKDMFDFHF**)UnitySDK::FromName("", "GBDFBAFGGJD")->GetStaticField(0x57298);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBDFBAFGGJD_CCTOR_OFFSET))();
		}

		static ::ADDNEJFFFJB* AGNHJBPONJM(::RPG::Client::NewsTicker_MoveDirectionType a1)
		{
			return ((::ADDNEJFFFJB*(*)(::RPG::Client::NewsTicker_MoveDirectionType))((::PBYTE)hIl2Cpp + GBDFBAFGGJD_AGNHJBPONJM_OFFSET))(a1);
		}

	};
