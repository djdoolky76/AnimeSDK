#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_LITTLEGAMESHARE_RPCFORMATTERRESOLVER_EPGJMDFCAJD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C7F85B0)
#define RPG_CLIENT_LITTLEGAMESHARE_RPCFORMATTERRESOLVER_EPGJMDFCAJD_GNLJKGAHBLI_OFFSET UNITYSDK_OFFSET(0x1C7F8410)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int RpcFormatterResolver_EPGJMDFCAJD_TypeDefinitionIndex = 37063;

	class RpcFormatterResolver_EPGJMDFCAJD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>** StaticGet_PJHNAIJGAOI()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>**)UnitySDK::FromName("RPG.Client.LittleGameShare", "EPGJMDFCAJD")->GetStaticField(0x1D810);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_RPCFORMATTERRESOLVER_EPGJMDFCAJD_CCTOR_OFFSET))();
		}

		static ::System::Object* GNLJKGAHBLI(::System::Type* a1)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_RPCFORMATTERRESOLVER_EPGJMDFCAJD_GNLJKGAHBLI_OFFSET))(a1);
		}

	};
}
