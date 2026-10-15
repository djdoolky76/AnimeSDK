#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_LITTLEGAMESHARE_REPLICATIONFORMATTERRESOLVER_FIJPBNBAHGD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C7F8090)
#define RPG_CLIENT_LITTLEGAMESHARE_REPLICATIONFORMATTERRESOLVER_FIJPBNBAHGD_GNLJKGAHBLI_OFFSET UNITYSDK_OFFSET(0x1C7F7ED0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ReplicationFormatterResolver_FIJPBNBAHGD_TypeDefinitionIndex = 37066;

	class ReplicationFormatterResolver_FIJPBNBAHGD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>** StaticGet_PJHNAIJGAOI()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>**)UnitySDK::FromName("RPG.Client.LittleGameShare", "FIJPBNBAHGD")->GetStaticField(0x1D7B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_REPLICATIONFORMATTERRESOLVER_FIJPBNBAHGD_CCTOR_OFFSET))();
		}

		static ::System::Object* GNLJKGAHBLI(::System::Type* a1)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_REPLICATIONFORMATTERRESOLVER_FIJPBNBAHGD_GNLJKGAHBLI_OFFSET))(a1);
		}

	};
}
