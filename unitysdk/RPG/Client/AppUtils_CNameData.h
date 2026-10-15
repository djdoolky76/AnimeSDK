#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define RPG_CLIENT_APPUTILS_CNAMEDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0xC6905D0)

namespace RPG::Client
{
	inline static constexpr unsigned int AppUtils_CNameData_TypeDefinitionIndex = 59278;

	struct alignas(8) AppUtils_CNameData
	{
		::System::String* IP; // 0x10
		::System::String* CName; // 0x18
		static ::RPG::Client::AppUtils_CNameData* StaticGet_Emtpy()
		{
			return (::RPG::Client::AppUtils_CNameData*)UnitySDK::FromName("RPG.Client", "CNameData")->GetStaticField(0x45B10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_CNAMEDATA_CCTOR_OFFSET))();
		}

	};
}
