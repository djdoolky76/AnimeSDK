#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TapTap/Sdk/UIElement.h"

class E427A58A65B84FA2;
class F9C251CDB04846BC;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace TapTap::Sdk::Utils { class Net; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class RawImage; }
namespace UnityEngine::UI { class Text; }

#define TAPTAP_SDK_QRCODEWINDOW_A16A80EEC26BC2B3_OFFSET UNITYSDK_OFFSET(0x3F095D0)
#define TAPTAP_SDK_QRCODEWINDOW_A2C4BDA57C9016A9_OFFSET UNITYSDK_OFFSET(0x3F08EB0)
#define TAPTAP_SDK_QRCODEWINDOW_A7DC35E57CB21550_OFFSET UNITYSDK_OFFSET(0x3F09F80)
#define TAPTAP_SDK_QRCODEWINDOW_AA441BDB89BD1A4C_OFFSET UNITYSDK_OFFSET(0x3F09530)
#define TAPTAP_SDK_QRCODEWINDOW_AFF20E8C8ACC1F7E_OFFSET UNITYSDK_OFFSET(0x3F07AC0)
#define TAPTAP_SDK_QRCODEWINDOW_B1C0357C32436D24_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define TAPTAP_SDK_QRCODEWINDOW_B3D4811F2FB9073A_OFFSET UNITYSDK_OFFSET(0x3F08370)
#define TAPTAP_SDK_QRCODEWINDOW_B9622FA7D11A7DE7_OFFSET UNITYSDK_OFFSET(0x3F091B0)
#define TAPTAP_SDK_QRCODEWINDOW_B9925553563BDD3B_OFFSET UNITYSDK_OFFSET(0x3F09760)
#define TAPTAP_SDK_QRCODEWINDOW_BD051ECA9748E66F_OFFSET UNITYSDK_OFFSET(0x3F081F0)
#define TAPTAP_SDK_QRCODEWINDOW_BE82561BB432AD1E_OFFSET UNITYSDK_OFFSET(0x3F09690)
#define TAPTAP_SDK_QRCODEWINDOW_BF5FC2764C1100C1_OFFSET UNITYSDK_OFFSET(0x3F09720)
#define TAPTAP_SDK_QRCODEWINDOW_E82076D4CF45B8DD_OFFSET UNITYSDK_OFFSET(0x3F097A0)
#define TAPTAP_SDK_QRCODEWINDOW_F246EDF5E640A16B_OFFSET UNITYSDK_OFFSET(0x3F094D0)
#define TAPTAP_SDK_QRCODEWINDOW_F27E545EDD4E2AF4_OFFSET UNITYSDK_OFFSET(0x3F08150)
#define TAPTAP_SDK_QRCODEWINDOW_F28D42F5A04576E5_OFFSET UNITYSDK_OFFSET(0x3F09D80)
#define TAPTAP_SDK_QRCODEWINDOW_F6493E101167C7C0_OFFSET UNITYSDK_OFFSET(0x3F08730)
#define TAPTAP_SDK_QRCODEWINDOW_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x3F07B30)
#define TAPTAP_SDK_QRCODEWINDOW__CCTOR_OFFSET UNITYSDK_OFFSET(0x3F09E10)
#define TAPTAP_SDK_QRCODEWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0x3F09F60)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int QRCodeWindow_TypeDefinitionIndex = 20909;

	class QRCodeWindow : public ::TapTap::Sdk::UIElement
	{
	public:
		static ::System::String** StaticGet_B39EACAF6EA496CF()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(QRCodeWindow_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::String** StaticGet_FEDD805DA8E5E2AF()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(QRCodeWindow_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::String** StaticGet_EFE293567DFD1E8E()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(QRCodeWindow_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::System::String** StaticGet_EEADCD736F2B2AB0()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(QRCodeWindow_TypeDefinitionIndex)->GetStaticField(0x18);
		}
		static ::System::String** StaticGet_EFBD6264AE34664A()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(QRCodeWindow_TypeDefinitionIndex)->GetStaticField(0x20);
		}
		::UnityEngine::UI::RawImage* QRCodeRawImage; // 0x40
		::UnityEngine::UI::Text* StatusText; // 0x48
		::UnityEngine::UI::Text* SubStatusText; // 0x50
		::UnityEngine::UI::Image* RefreshImage; // 0x58
		::UnityEngine::UI::Button* RefreshButton; // 0x60
		::UnityEngine::UI::Button* CloseButton; // 0x68
		::UnityEngine::UI::Button* LogoButton; // 0x70
		::UnityEngine::UI::Button* Notice2Button; // 0x78
		::UnityEngine::UI::Image* NoticeImage; // 0x80
		::System::String* EFB9AB9A6F4845C2; // 0x88
		::System::String* ECAC81E995D53E1E; // 0x90
		::System::Int64 B7CAF01A381C8C35; // 0x98
		::System::Int64 B6256F37797F0656; // 0xA0
		::System::Int64 E41F73B12D62AAAF; // 0xA8
		::TapTap::Sdk::Utils::Net* A0B66854E7A49B1C; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW__CTOR_OFFSET))(this);
		}

		::System::Void F28D42F5A04576E5(::System::Int32 E22BCD4736CD9DF9, ::System::String* B6018BB9F7294B44)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_F28D42F5A04576E5_OFFSET))(this, E22BCD4736CD9DF9, B6018BB9F7294B44);
		}

		::System::Void A16A80EEC26BC2B3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_A16A80EEC26BC2B3_OFFSET))(this);
		}

		::System::Void A2C4BDA57C9016A9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_A2C4BDA57C9016A9_OFFSET))(this);
		}

		::System::Collections::IEnumerator* AFF20E8C8ACC1F7E()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_AFF20E8C8ACC1F7E_OFFSET))(this);
		}

		::System::String* F6493E101167C7C0(::System::String* BEF6BFE64ED4EDDB, ::System::String* B9D0BF138B9AF554, ::System::String* A98AACBE4DF1FF0B, ::System::String* EA8FABEC6D125B33, ::System::String* A5E13DE10579BB67, ::System::String* FB9B05E817FD65FE, ::System::String* E2A17605F8F19F4D)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_F6493E101167C7C0_OFFSET))(this, BEF6BFE64ED4EDDB, B9D0BF138B9AF554, A98AACBE4DF1FF0B, EA8FABEC6D125B33, A5E13DE10579BB67, FB9B05E817FD65FE, E2A17605F8F19F4D);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* B1C0357C32436D24()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_B1C0357C32436D24_OFFSET))(this);
		}

		::System::Void F27E545EDD4E2AF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_F27E545EDD4E2AF4_OFFSET))(this);
		}

		::System::Void AA441BDB89BD1A4C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_AA441BDB89BD1A4C_OFFSET))(this);
		}

		static ::F9C251CDB04846BC* BD051ECA9748E66F(::F9C251CDB04846BC* B7BBCA45192B1B57)
		{
			return ((::F9C251CDB04846BC*(*)(::F9C251CDB04846BC*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_BD051ECA9748E66F_OFFSET))(B7BBCA45192B1B57);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW__CCTOR_OFFSET))();
		}

		::System::Void BF5FC2764C1100C1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_BF5FC2764C1100C1_OFFSET))(this);
		}

		::System::Void B9622FA7D11A7DE7(::E427A58A65B84FA2* AD4834887E87082A)
		{
			return ((::System::Void(*)(::PVOID, ::E427A58A65B84FA2*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_B9622FA7D11A7DE7_OFFSET))(this, AD4834887E87082A);
		}

		::System::Void B3D4811F2FB9073A(::System::String* E0C0689B1CEBE48C, ::System::Int32 F5EF7E29767E03BF, ::System::Int32 F0961C93719F7B0D)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_B3D4811F2FB9073A_OFFSET))(this, E0C0689B1CEBE48C, F5EF7E29767E03BF, F0961C93719F7B0D);
		}

		::System::Void E82076D4CF45B8DD(::System::String* E82293C0814051A5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_E82076D4CF45B8DD_OFFSET))(this, E82293C0814051A5);
		}

		::System::Void B9925553563BDD3B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_B9925553563BDD3B_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void BE82561BB432AD1E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_BE82561BB432AD1E_OFFSET))(this);
		}

		::System::Void A7DC35E57CB21550(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_A7DC35E57CB21550_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void F246EDF5E640A16B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_QRCODEWINDOW_F246EDF5E640A16B_OFFSET))(this);
		}
	};
}
