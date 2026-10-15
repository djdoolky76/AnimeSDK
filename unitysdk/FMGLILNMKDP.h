#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FMGLILNMKDP_AnimatedItem;
namespace RPG::Client { class TransformLoopAnim; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define FMGLILNMKDP_CCTOR_OFFSET UNITYSDK_OFFSET(0x15855FB0)
#define FMGLILNMKDP_CTOR_OFFSET UNITYSDK_OFFSET(0x15855F80)
#define FMGLILNMKDP_GONFDGFMNCJ_OFFSET UNITYSDK_OFFSET(0x15855890)
#define FMGLILNMKDP_HAOBJNHJFGM_OFFSET UNITYSDK_OFFSET(0x15855090)
#define FMGLILNMKDP_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x15854310)
#define FMGLILNMKDP_JDAGFHEPMHF_OFFSET UNITYSDK_OFFSET(0x15854910)
#define FMGLILNMKDP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x158540C0)
#define FMGLILNMKDP_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x15854270)
#define FMGLILNMKDP_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0x15855AC0)
#define FMGLILNMKDP_OKKLJMBPFOG_OFFSET UNITYSDK_OFFSET(0x15854EA0)
#define FMGLILNMKDP_OLMFHCLLBNN_OFFSET UNITYSDK_OFFSET(0x15855EC0)
#define FMGLILNMKDP_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x15854150)
#define FMGLILNMKDP_PNIEFOONFOP_OFFSET UNITYSDK_OFFSET(0x15854230)
#define FMGLILNMKDP_TICK_OFFSET UNITYSDK_OFFSET(0x15854560)

inline static constexpr unsigned int FMGLILNMKDP_TypeDefinitionIndex = 70331;

	class FMGLILNMKDP : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Single DADEEMLDLNC; // 0x38
		::System::Single HDHPNOOMAGE; // 0x3C
		::UnityEngine::Quaternion AIIALNAMCLJ; // 0x40
		::System::Single JBJNJAIMFGD; // 0x50
		::UnityEngine::Vector3 BCJIIOELICG; // 0x54
		::System::Boolean GFGGJHIEPMN; // 0x60
		static ::System::Collections::Generic::List_1<::UnityEngine::Collider*>** StaticGet_LPKKNEBFMFF()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Collider*>**)UnitySDK::FromName("", "FMGLILNMKDP")->GetStaticField(0x568C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGLILNMKDP_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMGLILNMKDP_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGLILNMKDP_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGLILNMKDP_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGLILNMKDP_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FMGLILNMKDP_TICK_OFFSET))(this, a1);
		}

		::System::Void JDAGFHEPMHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGLILNMKDP_JDAGFHEPMHF_OFFSET))(this);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGLILNMKDP_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGLILNMKDP_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void GONFDGFMNCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGLILNMKDP_GONFDGFMNCJ_OFFSET))(this);
		}

		::System::Void OKKLJMBPFOG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FMGLILNMKDP_OKKLJMBPFOG_OFFSET))(this, a1);
		}

		::System::Void HAOBJNHJFGM(::FMGLILNMKDP_AnimatedItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMGLILNMKDP_AnimatedItem*))((::PBYTE)hIl2Cpp + FMGLILNMKDP_HAOBJNHJFGM_OFFSET))(this, a1);
		}

		::System::Void OLMFHCLLBNN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FMGLILNMKDP_OLMFHCLLBNN_OFFSET))(this, a1);
		}

		::RPG::Client::TransformLoopAnim* PNIEFOONFOP()
		{
			return ((::RPG::Client::TransformLoopAnim*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGLILNMKDP_PNIEFOONFOP_OFFSET))(this);
		}

	};
