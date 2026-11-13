#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KOPOINICDPH_BKGOMALDIDH_OFFSET UNITYSDK_OFFSET(0x1CB11010)
#define KOPOINICDPH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB11730)
#define KOPOINICDPH_HLHHCMCHBOO_OFFSET UNITYSDK_OFFSET(0x1CB113D0)
#define KOPOINICDPH_IMBDJBBOLGF_OFFSET UNITYSDK_OFFSET(0x1CB11600)
#define KOPOINICDPH_JCEKFPNHOCB_OFFSET UNITYSDK_OFFSET(0x1CB11500)
#define KOPOINICDPH_KDCNBBIPNJL_OFFSET UNITYSDK_OFFSET(0x1CB10F30)
#define KOPOINICDPH_LKPHONPDJMK_OFFSET UNITYSDK_OFFSET(0x1CB11240)
#define KOPOINICDPH_MCKJFEGPDHF_OFFSET UNITYSDK_OFFSET(0x1CB11190)

inline static constexpr unsigned int KOPOINICDPH_TypeDefinitionIndex = 36099;

	class KOPOINICDPH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>** StaticGet_DLNBIKBHBDL()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>**)UnitySDK::FromName("", "KOPOINICDPH")->GetStaticField(0x59300);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_EMHABLFBAEB()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)UnitySDK::FromName("", "KOPOINICDPH")->GetStaticField(0x59308);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOPOINICDPH_CCTOR_OFFSET))();
		}

		static ::System::Boolean KDCNBBIPNJL(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + KOPOINICDPH_KDCNBBIPNJL_OFFSET))(a1);
		}

		static ::System::Void BKGOMALDIDH(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + KOPOINICDPH_BKGOMALDIDH_OFFSET))(a1, a2);
		}

		static ::System::Void MCKJFEGPDHF(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KOPOINICDPH_MCKJFEGPDHF_OFFSET))(a1);
		}

		static ::System::Void LKPHONPDJMK(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + KOPOINICDPH_LKPHONPDJMK_OFFSET))(a1, a2);
		}

		static ::System::Boolean HLHHCMCHBOO(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + KOPOINICDPH_HLHHCMCHBOO_OFFSET))(a1);
		}

		static ::System::Void JCEKFPNHOCB(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + KOPOINICDPH_JCEKFPNHOCB_OFFSET))(a1, a2);
		}

		static ::System::Boolean IMBDJBBOLGF(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + KOPOINICDPH_IMBDJBBOLGF_OFFSET))(a1);
		}

	};
