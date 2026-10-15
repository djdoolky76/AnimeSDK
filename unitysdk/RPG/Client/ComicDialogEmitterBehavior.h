#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Color.h"
namespace RPG::Client { class ComicDialogEmitterMonoPlugin; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class TMP_FontAsset; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_AAIICKEIKCI_OFFSET UNITYSDK_OFFSET(0xCBA20F0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xCBA2900)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xCB9F390)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xCBA28D0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_DHOIGJLGNJE_OFFSET UNITYSDK_OFFSET(0xCB9CBD0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_FKKCKPIMHJO_OFFSET UNITYSDK_OFFSET(0xCBA27C0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_GDFLDFDEALE_OFFSET UNITYSDK_OFFSET(0xCBA2180)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xCB9ECE0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_GJMGIGIHGCC_OFFSET UNITYSDK_OFFSET(0xCB9FF50)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_IAPIKCOAEMG_OFFSET UNITYSDK_OFFSET(0xCBA01A0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_IMCPFMAHOBP_OFFSET UNITYSDK_OFFSET(0xCB9D9B0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xCB9F530)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xCB9D650)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCB9CB20)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_MDDMOALLNAK_OFFSET UNITYSDK_OFFSET(0xCBA0830)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xCB9F330)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_MGCKLJJPMGF_OFFSET UNITYSDK_OFFSET(0xCBA1F50)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xCB9F650)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xCB9F5A0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xCB9CDA0)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xCB9F610)
#define RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xCB9F740)

namespace RPG::Client
{
	inline static constexpr unsigned int ComicDialogEmitterBehavior_TypeDefinitionIndex = 70876;

	class ComicDialogEmitterBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Boolean _IsVisiable; // 0x38
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::System::Object*>* _SimulateAgents; // 0x40
		::System::Int32 _CurrentIndex; // 0x48
		::System::Single _Timer; // 0x4C
		::System::Int32 _StaticEmojiCounter; // 0x50
		::System::Int32 _TextCounter; // 0x54
		::System::Int32 _BackboardCounter; // 0x58
		::System::Byte _padding1[0x4];
		::UnityEngine::MaterialPropertyBlock* _TextMPB; // 0x60
		::UnityEngine::MaterialPropertyBlock* _BackboardMPB; // 0x68
		::Il2CppArray<::UnityEngine::Matrix4x4>* _TextMatrixList; // 0x70
		::Il2CppArray<::UnityEngine::Matrix4x4>* _BackboardMatrixList; // 0x78
		::Il2CppArray<::UnityEngine::Vector4>* _TextCustomDatas; // 0x80
		::Il2CppArray<::UnityEngine::Vector4>* _BackboardCustomDatas; // 0x88
		::Il2CppArray<::System::Boolean>* _DialogDisplayBuffer; // 0x90
		::UnityEngine::Vector3 _CameraPos; // 0x98
		::System::Byte _padding2[0x4];
		::TMPro::TMP_FontAsset* _FontAsset; // 0xA8
		::System::Boolean _IfPreviewAudio; // 0xB0
		::System::Byte _padding3[0x3];
		::UnityEngine::Vector3 _PlayerPos; // 0xB4
		::UnityEngine::Bounds _PatternBounds; // 0xC0
		static ::System::Int32* StaticGet__CustomDataID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "ComicDialogEmitterBehavior")->GetStaticField(0x5D20);
		}

		// static const ::System::Object _MaxTextCount; // 0x0
		// static const ::System::Object _MaxBackboardCount; // 0x0
		// static const ::System::Object _NormalTextSize; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::RPG::Client::ComicDialogEmitterMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::ComicDialogEmitterMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

		::System::Void IMCPFMAHOBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_IMCPFMAHOBP_OFFSET))(this);
		}

		::System::Void MDDMOALLNAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_MDDMOALLNAK_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void DHOIGJLGNJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_DHOIGJLGNJE_OFFSET))(this);
		}

		::System::Boolean MGCKLJJPMGF(::System::Char a1, ::TMPro::TMP_FontAsset* a2, ::UnityEngine::Vector4 a3, ::UnityEngine::Vector4 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::TMPro::TMP_FontAsset*, ::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_MGCKLJJPMGF_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector4 AAIICKEIKCI(::System::Single a1, ::System::UInt32 a2)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_AAIICKEIKCI_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector4 GDFLDFDEALE(::UnityEngine::Vector4 a1, ::UnityEngine::Color a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_GDFLDFDEALE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IAPIKCOAEMG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_IAPIKCOAEMG_OFFSET))(this, a1);
		}

		::System::Void FKKCKPIMHJO(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_FKKCKPIMHJO_OFFSET))(this, a1, a2);
		}

		::System::Void GJMGIGIHGCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDIALOGEMITTERBEHAVIOR_GJMGIGIHGCC_OFFSET))(this);
		}

	};
}
