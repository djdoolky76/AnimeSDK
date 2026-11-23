#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class AA56D45E6B3D8206;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AD9BA2968529B116; }
template <typename T1, typename T2> class F5986F987EB32863;

#define TAPTAP_SDK_UTILS_NET_A5A01F6A29320594_OFFSET UNITYSDK_OFFSET(0x3F058D0)
#define TAPTAP_SDK_UTILS_NET_B3A252695AA65C8A_OFFSET UNITYSDK_OFFSET(0x3F05CA0)
#define TAPTAP_SDK_UTILS_NET_B6EC3AD279816F73_OFFSET UNITYSDK_OFFSET(0x3F063E0)
#define TAPTAP_SDK_UTILS_NET_E7DFBA015166F4F8_OFFSET UNITYSDK_OFFSET(0x3F05D70)
#define TAPTAP_SDK_UTILS_NET_EAC5AB04D64FCE93_OFFSET UNITYSDK_OFFSET(0x3F05640)
#define TAPTAP_SDK_UTILS_NET_EC4F6ADAA4189354_OFFSET UNITYSDK_OFFSET(0x3F062A0)
#define TAPTAP_SDK_UTILS_NET_FB0A61AA4F8E8358_OFFSET UNITYSDK_OFFSET(0x3F05EC0)
#define TAPTAP_SDK_UTILS_NET_FD30A4A0FDD52D2C_OFFSET UNITYSDK_OFFSET(0x3F05A10)
#define TAPTAP_SDK_UTILS_NET__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace TapTap::Sdk::Utils
{
	inline static constexpr unsigned int Net_TypeDefinitionIndex = 20883;

	class Net : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32 FD30A4A0FDD52D2C(::UnityEngine::AD9BA2968529B116* A12EE491614174A2)
		{
			return ((::System::Int32(*)(::UnityEngine::AD9BA2968529B116*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET_FD30A4A0FDD52D2C_OFFSET))(A12EE491614174A2);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET__CTOR_OFFSET))(this);
		}

		static ::System::String* EAC5AB04D64FCE93(::F5986F987EB32863<::System::String*, ::System::String*>* B54A9D568B1729E1)
		{
			return ((::System::String*(*)(::F5986F987EB32863<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET_EAC5AB04D64FCE93_OFFSET))(B54A9D568B1729E1);
		}

		::System::Collections::IEnumerator* B6EC3AD279816F73(::System::String* B960AC235824C6C8, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* EE4A79A31452E9BF, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* A7B7EBA251E4CE37, ::System::Action_1<::System::String*>* A66BE8A990D20F23, ::System::Action_2<::System::Int32, ::System::String*>* B75B344B9779CE84)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_1<::System::String*>*, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET_B6EC3AD279816F73_OFFSET))(this, B960AC235824C6C8, EE4A79A31452E9BF, A7B7EBA251E4CE37, A66BE8A990D20F23, B75B344B9779CE84);
		}

		::System::Collections::IEnumerator* B3A252695AA65C8A(::System::String* B960AC235824C6C8, ::System::String* A7F13B1CB9B44C48, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* EE4A79A31452E9BF, ::System::Action_1<::System::String*>* A66BE8A990D20F23, ::System::Action_2<::System::Int32, ::System::String*>* B75B344B9779CE84)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_1<::System::String*>*, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET_B3A252695AA65C8A_OFFSET))(this, B960AC235824C6C8, A7F13B1CB9B44C48, EE4A79A31452E9BF, A66BE8A990D20F23, B75B344B9779CE84);
		}

		::System::Void A5A01F6A29320594(::System::String* B960AC235824C6C8, ::System::String* A7F13B1CB9B44C48, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* EE4A79A31452E9BF, ::System::Action_1<::System::String*>* A66BE8A990D20F23, ::System::Action_2<::System::Int32, ::System::String*>* B75B344B9779CE84)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_1<::System::String*>*, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET_A5A01F6A29320594_OFFSET))(this, B960AC235824C6C8, A7F13B1CB9B44C48, EE4A79A31452E9BF, A66BE8A990D20F23, B75B344B9779CE84);
		}

		static ::System::Void FB0A61AA4F8E8358(::System::String* B960AC235824C6C8, ::System::String*& A19818E4276A0C23, ::AA56D45E6B3D8206*& F3C7F141D348DA1D)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*&, ::AA56D45E6B3D8206*&))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET_FB0A61AA4F8E8358_OFFSET))(B960AC235824C6C8, A19818E4276A0C23, F3C7F141D348DA1D);
		}

		::System::Void EC4F6ADAA4189354(::System::String* B960AC235824C6C8, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* EE4A79A31452E9BF, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* A7B7EBA251E4CE37, ::System::Action_1<::System::String*>* A66BE8A990D20F23, ::System::Action_2<::System::Int32, ::System::String*>* B75B344B9779CE84)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Action_1<::System::String*>*, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET_EC4F6ADAA4189354_OFFSET))(this, B960AC235824C6C8, EE4A79A31452E9BF, A7B7EBA251E4CE37, A66BE8A990D20F23, B75B344B9779CE84);
		}

		static ::System::Int32 E7DFBA015166F4F8(::System::String* A23D38871B6E24C1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET_E7DFBA015166F4F8_OFFSET))(A23D38871B6E24C1);
		}
	};
}
