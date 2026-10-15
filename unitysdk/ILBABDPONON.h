#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPMNMMGLHI.h"
#include "unitysdk/DNFDBKCPBNM.h"
class CHEJAGNIKMJ;
class HEOOJBGLBCF;
namespace RPG::Client::Promises { class IPromise; }

#define ILBABDPONON_ACCAONHAHHE_OFFSET UNITYSDK_OFFSET(0x164A7730)
#define ILBABDPONON_ADJKAFJMGKE_OFFSET UNITYSDK_OFFSET(0x164A7970)
#define ILBABDPONON_BIDDGGLKMIH_OFFSET UNITYSDK_OFFSET(0x164A76D0)
#define ILBABDPONON_CTOR_OFFSET UNITYSDK_OFFSET(0x164A76C0)
#define ILBABDPONON_DKOAEFPLBHH_OFFSET UNITYSDK_OFFSET(0x164A78F0)
#define ILBABDPONON__FLIPISMARKED_B__3_0_OFFSET UNITYSDK_OFFSET(0x164A79C0)

	class ILBABDPONON : public ::BHPMNMMGLHI
	{
	public:
		::CHEJAGNIKMJ* LEGMJMPBGHH; // 0x20
		::System::Void _ctor(::CHEJAGNIKMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHEJAGNIKMJ*))((::PBYTE)hIl2Cpp + ILBABDPONON_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean BIDDGGLKMIH(::DNFDBKCPBNM a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + ILBABDPONON_BIDDGGLKMIH_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* ACCAONHAHHE(::DNFDBKCPBNM a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + ILBABDPONON_ACCAONHAHHE_OFFSET))(this, a1);
		}

		::System::Boolean DKOAEFPLBHH(::DNFDBKCPBNM a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + ILBABDPONON_DKOAEFPLBHH_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* ADJKAFJMGKE(::DNFDBKCPBNM a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + ILBABDPONON_ADJKAFJMGKE_OFFSET))(this, a1);
		}

		::System::Void _FlipIsMarked_b__3_0(::HEOOJBGLBCF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEOOJBGLBCF*))((::PBYTE)hIl2Cpp + ILBABDPONON__FLIPISMARKED_B__3_0_OFFSET))(this, a1);
		}

	};
