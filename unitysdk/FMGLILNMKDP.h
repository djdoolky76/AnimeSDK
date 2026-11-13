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

#define FMGLILNMKDP_CCTOR_OFFSET UNITYSDK_OFFSET(0x17EFB6B0)
#define FMGLILNMKDP_CTOR_OFFSET UNITYSDK_OFFSET(0x17EFB680)
#define FMGLILNMKDP_GONFDGFMNCJ_OFFSET UNITYSDK_OFFSET(0x17EFAF90)
#define FMGLILNMKDP_HAOBJNHJFGM_OFFSET UNITYSDK_OFFSET(0x17EFA790)
#define FMGLILNMKDP_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x17EF9A10)
#define FMGLILNMKDP_JDAGFHEPMHF_OFFSET UNITYSDK_OFFSET(0x17EFA010)
#define FMGLILNMKDP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x17EF97C0)
#define FMGLILNMKDP_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x17EF9970)
#define FMGLILNMKDP_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0x17EFB1C0)
#define FMGLILNMKDP_OKKLJMBPFOG_OFFSET UNITYSDK_OFFSET(0x17EFA5A0)
#define FMGLILNMKDP_OLMFHCLLBNN_OFFSET UNITYSDK_OFFSET(0x17EFB5C0)
#define FMGLILNMKDP_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x17EF9850)
#define FMGLILNMKDP_PNIEFOONFOP_OFFSET UNITYSDK_OFFSET(0x17EF9930)
#define FMGLILNMKDP_TICK_OFFSET UNITYSDK_OFFSET(0x17EF9C60)

inline static constexpr unsigned int FMGLILNMKDP_TypeDefinitionIndex = 72297;

	class FMGLILNMKDP : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Single JBJNJAIMFGD; // 0x38
		::System::Boolean GFGGJHIEPMN; // 0x3C
		::System::Byte _padding0[0x3];
		::System::Single HDHPNOOMAGE; // 0x40
		::UnityEngine::Quaternion AIIALNAMCLJ; // 0x44
		::System::Single DADEEMLDLNC; // 0x54
		::UnityEngine::Vector3 BCJIIOELICG; // 0x58
		static ::System::Collections::Generic::List_1<::UnityEngine::Collider*>** StaticGet_LPKKNEBFMFF()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Collider*>**)UnitySDK::FromName("", "FMGLILNMKDP")->GetStaticField(0x69E60);
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
