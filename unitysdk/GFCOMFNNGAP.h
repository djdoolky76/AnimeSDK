#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GFCOMFNNGAP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD5DAE0)
#define GFCOMFNNGAP_ICLOCNNCPFG_1_OFFSET UNITYSDK_OFFSET(0x1DD5D820)
#define GFCOMFNNGAP_ICLOCNNCPFG_2_OFFSET UNITYSDK_OFFSET(0x1DD5DA10)

inline static constexpr unsigned int GFCOMFNNGAP_TypeDefinitionIndex = 6395;

	class GFCOMFNNGAP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>** StaticGet_DDPHAPFKNPL()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>**)UnitySDK::FromName("", "GFCOMFNNGAP")->GetStaticField(0x2BB30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFCOMFNNGAP_CCTOR_OFFSET))();
		}

		static ::System::String* ICLOCNNCPFG_1(::System::Type* a1)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + GFCOMFNNGAP_ICLOCNNCPFG_1_OFFSET))(a1);
		}

		static ::System::String* ICLOCNNCPFG_2(::System::Object* a1)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + GFCOMFNNGAP_ICLOCNNCPFG_2_OFFSET))(a1);
		}

	};
