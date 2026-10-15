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

#define FMGLILNMKDP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1584A290)
#define FMGLILNMKDP_CTOR_OFFSET UNITYSDK_OFFSET(0x1584A260)
#define FMGLILNMKDP_GONFDGFMNCJ_OFFSET UNITYSDK_OFFSET(0x15849B70)
#define FMGLILNMKDP_HAOBJNHJFGM_OFFSET UNITYSDK_OFFSET(0x15849370)
#define FMGLILNMKDP_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x158485F0)
#define FMGLILNMKDP_JDAGFHEPMHF_OFFSET UNITYSDK_OFFSET(0x15848BF0)
#define FMGLILNMKDP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x158483A0)
#define FMGLILNMKDP_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x15848550)
#define FMGLILNMKDP_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0x15849DA0)
#define FMGLILNMKDP_OKKLJMBPFOG_OFFSET UNITYSDK_OFFSET(0x15849180)
#define FMGLILNMKDP_OLMFHCLLBNN_OFFSET UNITYSDK_OFFSET(0x1584A1A0)
#define FMGLILNMKDP_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x15848430)
#define FMGLILNMKDP_PNIEFOONFOP_OFFSET UNITYSDK_OFFSET(0x15848510)
#define FMGLILNMKDP_TICK_OFFSET UNITYSDK_OFFSET(0x15848840)

inline static constexpr unsigned int FMGLILNMKDP_TypeDefinitionIndex = 70331;

	class FMGLILNMKDP : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Single HDHPNOOMAGE; // 0x38
		::UnityEngine::Quaternion AIIALNAMCLJ; // 0x3C
		::System::Single DADEEMLDLNC; // 0x4C
		::System::Boolean GFGGJHIEPMN; // 0x50
		::System::Byte _padding0[0x3];
		::System::Single JBJNJAIMFGD; // 0x54
		::UnityEngine::Vector3 BCJIIOELICG; // 0x58
		static ::System::Collections::Generic::List_1<::UnityEngine::Collider*>** StaticGet_LPKKNEBFMFF()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Collider*>**)UnitySDK::FromName("", "FMGLILNMKDP")->GetStaticField(0x4FFE0);
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
