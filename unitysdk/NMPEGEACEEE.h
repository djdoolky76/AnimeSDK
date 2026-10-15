#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/UnityEngine/Rect.h"
namespace RPG::Client { class InverseMask; }
namespace RPG::GameCore { class ShowTutorialMask; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define NMPEGEACEEE_CIAHKPODCOO_OFFSET UNITYSDK_OFFSET(0xBC950A0)
#define NMPEGEACEEE_CTOR_OFFSET UNITYSDK_OFFSET(0xBC94420)
#define NMPEGEACEEE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC94440)
#define NMPEGEACEEE_DOCGPEGDFOM_OFFSET UNITYSDK_OFFSET(0xBC949B0)
#define NMPEGEACEEE_EHLDEOCIHAM_OFFSET UNITYSDK_OFFSET(0xBC94A80)
#define NMPEGEACEEE_KFGAHPFJHHM_OFFSET UNITYSDK_OFFSET(0xBC94FE0)
#define NMPEGEACEEE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC944E0)
#define NMPEGEACEEE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC94C30)
#define NMPEGEACEEE_PAPJPCLCAHC_OFFSET UNITYSDK_OFFSET(0xBC94B10)
#define NMPEGEACEEE_TICK_OFFSET UNITYSDK_OFFSET(0xBC94C80)

	class NMPEGEACEEE : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::InverseMask* AHFPLGOENNH; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::ShowTutorialMask* OFKGLJOAMLD; // 0x28
		::System::Single EHLMEPDCBBC; // 0x30
		::System::Int32 POHBPGJFONJ; // 0x34
		::UnityEngine::Rect PKLIOOJEGJO; // 0x38
		::System::Single DJKKCALPBJE; // 0x48
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowTutorialMask* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowTutorialMask*))((::PBYTE)hIl2Cpp + NMPEGEACEEE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMPEGEACEEE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMPEGEACEEE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMPEGEACEEE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NMPEGEACEEE_TICK_OFFSET))(this, a1);
		}

		::System::Void DOCGPEGDFOM(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + NMPEGEACEEE_DOCGPEGDFOM_OFFSET))(this, a1, a2);
		}

		::System::Void EHLDEOCIHAM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NMPEGEACEEE_EHLDEOCIHAM_OFFSET))(this, a1);
		}

		::System::Boolean CIAHKPODCOO(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NMPEGEACEEE_CIAHKPODCOO_OFFSET))(this, a1);
		}

		::System::Void PAPJPCLCAHC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NMPEGEACEEE_PAPJPCLCAHC_OFFSET))(this, a1);
		}

		::System::Boolean KFGAHPFJHHM(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NMPEGEACEEE_KFGAHPFJHHM_OFFSET))(this, a1, a2);
		}

	};
