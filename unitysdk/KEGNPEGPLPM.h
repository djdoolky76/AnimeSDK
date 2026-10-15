#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KJCHLFOFENJ;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class VCameraOverrideShakeV2; }
namespace RPG::GameCore { class VCameraShakeV2; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KEGNPEGPLPM_CTOR_OFFSET UNITYSDK_OFFSET(0xB372210)
#define KEGNPEGPLPM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB372250)
#define KEGNPEGPLPM_EALGGCNBLDN_OFFSET UNITYSDK_OFFSET(0xB3739E0)
#define KEGNPEGPLPM_FGMBBDNAKJB_OFFSET UNITYSDK_OFFSET(0xB372DC0)
#define KEGNPEGPLPM_IGKBJCNJGMF_OFFSET UNITYSDK_OFFSET(0xB372CD0)
#define KEGNPEGPLPM_JAPPEMNCJMK_OFFSET UNITYSDK_OFFSET(0xB372A00)
#define KEGNPEGPLPM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB372380)
#define KEGNPEGPLPM_MCGPBDMBBDD_OFFSET UNITYSDK_OFFSET(0xB372C20)
#define KEGNPEGPLPM_OFCMDOGNOEP_OFFSET UNITYSDK_OFFSET(0xB372530)
#define KEGNPEGPLPM_PBFOFDPFCPH_OFFSET UNITYSDK_OFFSET(0xB373990)
#define KEGNPEGPLPM_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB3722A0)

inline static constexpr unsigned int KEGNPEGPLPM_TypeDefinitionIndex = 69645;

	class KEGNPEGPLPM : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::KJCHLFOFENJ*>* DHJKALAEADF; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEGNPEGPLPM_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEGNPEGPLPM_DISPOSE_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEGNPEGPLPM_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KEGNPEGPLPM_JLANKNHFKCN_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::VCameraShakeV2* OFCMDOGNOEP(::RPG::GameCore::VCameraShakeV2* a1, ::RPG::GameCore::VCameraOverrideShakeV2* a2)
		{
			return ((::RPG::GameCore::VCameraShakeV2*(*)(::RPG::GameCore::VCameraShakeV2*, ::RPG::GameCore::VCameraOverrideShakeV2*))((::PBYTE)hIl2Cpp + KEGNPEGPLPM_OFCMDOGNOEP_OFFSET))(a1, a2);
		}

		::KJCHLFOFENJ* JAPPEMNCJMK(::RPG::GameCore::VCameraShakeV2* a1, ::RPG::GameCore::VCameraOverrideShakeV2* a2, ::RPG::GameCore::GameEntity* a3, ::System::String* a4)
		{
			return ((::KJCHLFOFENJ*(*)(::PVOID, ::RPG::GameCore::VCameraShakeV2*, ::RPG::GameCore::VCameraOverrideShakeV2*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + KEGNPEGPLPM_JAPPEMNCJMK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MCGPBDMBBDD(::KJCHLFOFENJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJCHLFOFENJ*))((::PBYTE)hIl2Cpp + KEGNPEGPLPM_MCGPBDMBBDD_OFFSET))(this, a1);
		}

		::System::Void IGKBJCNJGMF(::KJCHLFOFENJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJCHLFOFENJ*))((::PBYTE)hIl2Cpp + KEGNPEGPLPM_IGKBJCNJGMF_OFFSET))(this, a1);
		}

		::System::Void FGMBBDNAKJB(::System::Object* a1, ::UnityEngine::Vector3 a2, ::System::Object* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Vector3, ::System::Object*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KEGNPEGPLPM_FGMBBDNAKJB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Int32 PBFOFDPFCPH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEGNPEGPLPM_PBFOFDPFCPH_OFFSET))(this);
		}

		::System::Nullable_1<::System::Single> EALGGCNBLDN(::System::Nullable_1<::System::Single> a1, ::System::Nullable_1<::System::Single> a2)
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::System::Nullable_1<::System::Single>, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + KEGNPEGPLPM_EALGGCNBLDN_OFFSET))(this, a1, a2);
		}

	};
