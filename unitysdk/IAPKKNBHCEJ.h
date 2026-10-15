#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TextFormatFlag.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define IAPKKNBHCEJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x15E24F90)
#define IAPKKNBHCEJ_FFHNGNCIHLE_OFFSET UNITYSDK_OFFSET(0x15E24210)
#define IAPKKNBHCEJ_HENEMEPAGLE_OFFSET UNITYSDK_OFFSET(0x15E24EB0)
#define IAPKKNBHCEJ_KKNKOLKFBDE_OFFSET UNITYSDK_OFFSET(0x15E244C0)
#define IAPKKNBHCEJ_MPNLFIIIMGO_OFFSET UNITYSDK_OFFSET(0x15E24E50)
#define IAPKKNBHCEJ_OJCKCHDHPAD_OFFSET UNITYSDK_OFFSET(0x15E24AA0)
#define IAPKKNBHCEJ_PEFMFFMMCAI_OFFSET UNITYSDK_OFFSET(0x15E24260)

	class IAPKKNBHCEJ : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_FGJCNBDADNG()
		{
			return (::System::String**)UnitySDK::FromName("", "IAPKKNBHCEJ")->GetStaticField(0x428A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAPKKNBHCEJ_CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::UnityEngine::TextFormatFlag>* FFHNGNCIHLE(::System::String* a1)
		{
			return ((::Il2CppArray<::UnityEngine::TextFormatFlag>*(*)(::System::String*))((::PBYTE)hIl2Cpp + IAPKKNBHCEJ_FFHNGNCIHLE_OFFSET))(a1);
		}

		static ::System::Int32 PEFMFFMMCAI(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + IAPKKNBHCEJ_PEFMFFMMCAI_OFFSET))(a1, a2);
		}

		static ::System::String* OJCKCHDHPAD(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + IAPKKNBHCEJ_OJCKCHDHPAD_OFFSET))(a1);
		}

		static ::System::Boolean KKNKOLKFBDE(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::TextFormatFlag>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::TextFormatFlag>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + IAPKKNBHCEJ_KKNKOLKFBDE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::String* MPNLFIIIMGO(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + IAPKKNBHCEJ_MPNLFIIIMGO_OFFSET))(a1);
		}

		static ::System::String* HENEMEPAGLE(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + IAPKKNBHCEJ_HENEMEPAGLE_OFFSET))(a1, a2);
		}

	};
