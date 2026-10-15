#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_ACMFEOAAJMN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C759B00)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_ACMFEOAAJMN_GNLJKGAHBLI_OFFSET UNITYSDK_OFFSET(0x1C758C60)

namespace MessagePack
{
	class GeneratedMessagePackResolver_ACMFEOAAJMN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>** StaticGet_PJHNAIJGAOI()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>**)UnitySDK::FromName("MessagePack", "ACMFEOAAJMN")->GetStaticField(0x16410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_ACMFEOAAJMN_CCTOR_OFFSET))();
		}

		static ::System::Object* GNLJKGAHBLI(::System::Type* a1)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_ACMFEOAAJMN_GNLJKGAHBLI_OFFSET))(a1);
		}

	};
}
