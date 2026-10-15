#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Rect.h"
class LPHOEFFEOBD;
class PKABGPKKMHL;
class PKABGPKKMHL_FPOIPMGLHBF;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define PKABGPKKMHL_FPOIPMGLHBF_CTOR_OFFSET UNITYSDK_OFFSET(0xC2A52C0)
#define PKABGPKKMHL_FPOIPMGLHBF_FIPDBFMPEKH_OFFSET UNITYSDK_OFFSET(0xC2A6440)
#define PKABGPKKMHL_FPOIPMGLHBF_NAGADEEMABM_OFFSET UNITYSDK_OFFSET(0xC2A6AC0)
#define PKABGPKKMHL_FPOIPMGLHBF_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC2A7900)
#define PKABGPKKMHL_FPOIPMGLHBF_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xC2A54F0)

inline static constexpr unsigned int PKABGPKKMHL_FPOIPMGLHBF_TypeDefinitionIndex = 73853;

	class PKABGPKKMHL_FPOIPMGLHBF : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::LPHOEFFEOBD*, ::System::Int32>* CODINANPDLG; // 0x10
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::LPHOEFFEOBD*>*>* PMBENGEOJLN; // 0x18
		::System::Single PLBAAHBFELH; // 0x20
		::System::Single EJHOLDPPAEE; // 0x24
		::System::Single ADHEMNOPMIM; // 0x28
		::System::Int32 FANAHCMOOMJ; // 0x2C
		::System::Single EMNAKHEHDPG; // 0x30
		::System::Void _ctor(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PKABGPKKMHL_FPOIPMGLHBF_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean PAGKOAEOLKA(::System::Single a1, ::PKABGPKKMHL* a2, ::System::Collections::Generic::HashSet_1<::System::Int32>* a3, ::UnityEngine::GameObject* a4, ::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>* a5, ::PKABGPKKMHL_FPOIPMGLHBF* a6, ::PKABGPKKMHL_FPOIPMGLHBF* a7)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::PKABGPKKMHL*, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::UnityEngine::GameObject*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>*, ::PKABGPKKMHL_FPOIPMGLHBF*, ::PKABGPKKMHL_FPOIPMGLHBF*))((::PBYTE)hIl2Cpp + PKABGPKKMHL_FPOIPMGLHBF_PAGKOAEOLKA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void FIPDBFMPEKH(::LPHOEFFEOBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPHOEFFEOBD*))((::PBYTE)hIl2Cpp + PKABGPKKMHL_FPOIPMGLHBF_FIPDBFMPEKH_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKABGPKKMHL_FPOIPMGLHBF_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Boolean NAGADEEMABM(::LPHOEFFEOBD* a1, ::System::Int32 a2, ::System::Nullable_1<::UnityEngine::Rect> a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHOEFFEOBD*, ::System::Int32, ::System::Nullable_1<::UnityEngine::Rect>))((::PBYTE)hIl2Cpp + PKABGPKKMHL_FPOIPMGLHBF_NAGADEEMABM_OFFSET))(this, a1, a2, a3);
		}

	};
