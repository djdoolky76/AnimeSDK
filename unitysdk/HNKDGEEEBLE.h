#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HNKDGEEEBLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C678140)
#define HNKDGEEEBLE_GNLJKGAHBLI_OFFSET UNITYSDK_OFFSET(0x1C678050)

inline static constexpr unsigned int HNKDGEEEBLE_TypeDefinitionIndex = 37209;

	class HNKDGEEEBLE : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::System::Object*>** StaticGet_DJDMBFHDHON()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::System::Object*>**)UnitySDK::FromName("", "HNKDGEEEBLE")->GetStaticField(0x27A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNKDGEEEBLE_CCTOR_OFFSET))();
		}

		static ::System::Object* GNLJKGAHBLI(::System::RuntimeTypeHandle a1)
		{
			return ((::System::Object*(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + HNKDGEEEBLE_GNLJKGAHBLI_OFFSET))(a1);
		}

	};
