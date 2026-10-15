#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KEGNPEGPLPM;
class KJCHLFOFENJ;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::GameCore { class VCameraShakeV2; }
namespace RPGTools::Timeline { class VirtualCameraNoiseConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define PHBPBBJDFIH_AIPAFEDHKCD_OFFSET UNITYSDK_OFFSET(0xC230FF0)
#define PHBPBBJDFIH_ANBNPNBGBAG_OFFSET UNITYSDK_OFFSET(0xC230560)
#define PHBPBBJDFIH_BFGJGBJAOKN_OFFSET UNITYSDK_OFFSET(0xC230500)
#define PHBPBBJDFIH_BPHMDCICCHH_OFFSET UNITYSDK_OFFSET(0xC2302C0)
#define PHBPBBJDFIH_CCTOR_OFFSET UNITYSDK_OFFSET(0xC231710)
#define PHBPBBJDFIH_CTOR_OFFSET UNITYSDK_OFFSET(0xC231650)
#define PHBPBBJDFIH_DCLDPIDGBKA_OFFSET UNITYSDK_OFFSET(0xC230630)
#define PHBPBBJDFIH_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xC2305D0)
#define PHBPBBJDFIH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC22FDE0)
#define PHBPBBJDFIH_EKLFBNNKOIK_OFFSET UNITYSDK_OFFSET(0xC230080)
#define PHBPBBJDFIH_GEGJELIHEIN_OFFSET UNITYSDK_OFFSET(0xC230C90)
#define PHBPBBJDFIH_LKECFMIIOHJ_OFFSET UNITYSDK_OFFSET(0xC2303F0)
#define PHBPBBJDFIH_NAHKINCNECJ_OFFSET UNITYSDK_OFFSET(0xC230110)
#define PHBPBBJDFIH_OOEIJAMGAGE_OFFSET UNITYSDK_OFFSET(0xC22FEF0)
#define PHBPBBJDFIH_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xC22FE30)

inline static constexpr unsigned int PHBPBBJDFIH_TypeDefinitionIndex = 60703;

	class PHBPBBJDFIH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::KJCHLFOFENJ*>* GFEGDMAMPBF; // 0x10
		::KEGNPEGPLPM* DIOOIEHBNHJ; // 0x18
		::UnityEngine::Transform* GMPKDNDENLK; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* BCKPDLCEFHH; // 0x28
		::RPGTools::Timeline::VirtualCameraNoiseConfig* IPINEPCDFDO; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::KJCHLFOFENJ*>* MAIFJIALPLJ; // 0x38
		::System::Nullable_1<::System::Single> DLFPFLOAGGG; // 0x40
		::UnityEngine::Vector3 JHLJODHMEMP; // 0x48
		::UnityEngine::Vector3 LOMMNBIANJO; // 0x54
		::System::Nullable_1<::System::Single> OFABLKBBNHC; // 0x60
		static ::System::Int32* StaticGet_OELILMHMLIG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "PHBPBBJDFIH")->GetStaticField(0x15AA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBPBBJDFIH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHBPBBJDFIH_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBPBBJDFIH_DISPOSE_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBPBBJDFIH_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void BPHMDCICCHH(::System::String* a1, ::KJCHLFOFENJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::KJCHLFOFENJ*))((::PBYTE)hIl2Cpp + PHBPBBJDFIH_BPHMDCICCHH_OFFSET))(this, a1, a2);
		}

		::System::Boolean LKECFMIIOHJ(::System::String* a1, ::KJCHLFOFENJ* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::KJCHLFOFENJ*))((::PBYTE)hIl2Cpp + PHBPBBJDFIH_LKECFMIIOHJ_OFFSET))(this, a1, a2);
		}

		::System::Void OOEIJAMGAGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBPBBJDFIH_OOEIJAMGAGE_OFFSET))(this);
		}

		::System::Void BFGJGBJAOKN(::KEGNPEGPLPM* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KEGNPEGPLPM*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + PHBPBBJDFIH_BFGJGBJAOKN_OFFSET))(this, a1, a2);
		}

		::System::Void EKLFBNNKOIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBPBBJDFIH_EKLFBNNKOIK_OFFSET))(this);
		}

		::KJCHLFOFENJ* ANBNPNBGBAG(::RPG::GameCore::VCameraShakeV2* a1)
		{
			return ((::KJCHLFOFENJ*(*)(::PVOID, ::RPG::GameCore::VCameraShakeV2*))((::PBYTE)hIl2Cpp + PHBPBBJDFIH_ANBNPNBGBAG_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PHBPBBJDFIH_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void DCLDPIDGBKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PHBPBBJDFIH_DCLDPIDGBKA_OFFSET))(this, a1);
		}

		::System::Void GEGJELIHEIN(::RPGTools::Timeline::VirtualCameraNoiseConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::VirtualCameraNoiseConfig*))((::PBYTE)hIl2Cpp + PHBPBBJDFIH_GEGJELIHEIN_OFFSET))(this, a1);
		}

		::System::Void AIPAFEDHKCD(::Cinemachine::CinemachineVirtualCamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + PHBPBBJDFIH_AIPAFEDHKCD_OFFSET))(this, a1);
		}

		::System::Void NAHKINCNECJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBPBBJDFIH_NAHKINCNECJ_OFFSET))(this);
		}

	};
