#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJJHBNBIJFE;
class LJJHBNBIJFE_JGAENLBNJMM;
namespace System { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define LJJHBNBIJFE_CTOR_OFFSET UNITYSDK_OFFSET(0xBFB66A0)
#define LJJHBNBIJFE_GET_CAPTIONS_OFFSET UNITYSDK_OFFSET(0xBFB6A60)
#define LJJHBNBIJFE_GET_LOOPSLOT_OFFSET UNITYSDK_OFFSET(0xBFB6A40)
#define LJJHBNBIJFE_GET_MASKIMAGE_OFFSET UNITYSDK_OFFSET(0xBFB6A50)
#define LJJHBNBIJFE_GET_STARTENDSLOT_OFFSET UNITYSDK_OFFSET(0xBFB6A30)
#define LJJHBNBIJFE_KPDBCKOLDGF_OFFSET UNITYSDK_OFFSET(0xBFB66C0)

inline static constexpr unsigned int LJJHBNBIJFE_TypeDefinitionIndex = 74940;

	class LJJHBNBIJFE : public ::System::Object
	{
	public:
		::UnityEngine::UI::Image* _MaskImage_k__BackingField; // 0x10
		::LJJHBNBIJFE_JGAENLBNJMM* _LoopSlot_k__BackingField; // 0x18
		::LJJHBNBIJFE_JGAENLBNJMM* _StartEndSlot_k__BackingField; // 0x20
		::Il2CppArray<::System::Object*>* _Captions_k__BackingField; // 0x28
		::System::Void _ctor(::LJJHBNBIJFE_JGAENLBNJMM* a1, ::LJJHBNBIJFE_JGAENLBNJMM* a2, ::UnityEngine::UI::Image* a3, ::Il2CppArray<::System::Object*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::LJJHBNBIJFE_JGAENLBNJMM*, ::LJJHBNBIJFE_JGAENLBNJMM*, ::UnityEngine::UI::Image*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + LJJHBNBIJFE_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::LJJHBNBIJFE* KPDBCKOLDGF(::UnityEngine::Transform* a1)
		{
			return ((::LJJHBNBIJFE*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + LJJHBNBIJFE_KPDBCKOLDGF_OFFSET))(a1);
		}

		::LJJHBNBIJFE_JGAENLBNJMM* get_StartEndSlot()
		{
			return ((::LJJHBNBIJFE_JGAENLBNJMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJHBNBIJFE_GET_STARTENDSLOT_OFFSET))(this);
		}

		::LJJHBNBIJFE_JGAENLBNJMM* get_LoopSlot()
		{
			return ((::LJJHBNBIJFE_JGAENLBNJMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJHBNBIJFE_GET_LOOPSLOT_OFFSET))(this);
		}

		::UnityEngine::UI::Image* get_MaskImage()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJHBNBIJFE_GET_MASKIMAGE_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_Captions()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJHBNBIJFE_GET_CAPTIONS_OFFSET))(this);
		}

	};
