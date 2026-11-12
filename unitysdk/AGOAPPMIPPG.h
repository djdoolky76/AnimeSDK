#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOJOBHMEEIH;
class IGJMHKGCCNE;
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::UI { class Image; }

#define AGOAPPMIPPG_CTOR_OFFSET UNITYSDK_OFFSET(0xF134D00)
#define AGOAPPMIPPG_GET_LOOPSLOT_OFFSET UNITYSDK_OFFSET(0xF134D30)
#define AGOAPPMIPPG_GET_MASKIMAGE_OFFSET UNITYSDK_OFFSET(0xF134D40)
#define AGOAPPMIPPG_GET_MESSENGER_OFFSET UNITYSDK_OFFSET(0xF134D50)
#define AGOAPPMIPPG_GET_STARTENDSLOT_OFFSET UNITYSDK_OFFSET(0xF134D20)
#define AGOAPPMIPPG_OFCLOJDNOHA_OFFSET UNITYSDK_OFFSET(0xF134D60)

inline static constexpr unsigned int AGOAPPMIPPG_TypeDefinitionIndex = 74950;

	class AGOAPPMIPPG : public ::System::Object
	{
	public:
		::BOJOBHMEEIH* _Messenger_k__BackingField; // 0x10
		::IGJMHKGCCNE* _LoopSlot_k__BackingField; // 0x18
		::IGJMHKGCCNE* _StartEndSlot_k__BackingField; // 0x20
		::UnityEngine::UI::Image* _MaskImage_k__BackingField; // 0x28
		::System::Func_1<::System::Boolean>* LEFLPBCAJFL; // 0x30
		// static const ::System::Object MHOAEPIBBFH; // 0x0
		::System::Void _ctor(::IGJMHKGCCNE* a1, ::IGJMHKGCCNE* a2, ::UnityEngine::UI::Image* a3, ::BOJOBHMEEIH* a4, ::System::Func_1<::System::Boolean>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::IGJMHKGCCNE*, ::IGJMHKGCCNE*, ::UnityEngine::UI::Image*, ::BOJOBHMEEIH*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + AGOAPPMIPPG_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::IGJMHKGCCNE* get_StartEndSlot()
		{
			return ((::IGJMHKGCCNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOAPPMIPPG_GET_STARTENDSLOT_OFFSET))(this);
		}

		::IGJMHKGCCNE* get_LoopSlot()
		{
			return ((::IGJMHKGCCNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOAPPMIPPG_GET_LOOPSLOT_OFFSET))(this);
		}

		::UnityEngine::UI::Image* get_MaskImage()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOAPPMIPPG_GET_MASKIMAGE_OFFSET))(this);
		}

		::BOJOBHMEEIH* get_Messenger()
		{
			return ((::BOJOBHMEEIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOAPPMIPPG_GET_MESSENGER_OFFSET))(this);
		}

		::System::Boolean OFCLOJDNOHA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOAPPMIPPG_OFCLOJDNOHA_OFFSET))(this);
		}

	};
