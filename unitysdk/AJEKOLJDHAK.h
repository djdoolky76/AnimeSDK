#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ViewCacheType.h"
#include "unitysdk/System/Object.h"
class IKMOKCKMNMC;
namespace RPG::Client { template <typename T> class SimpleLRU_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define AJEKOLJDHAK_CTOR_OFFSET UNITYSDK_OFFSET(0x12CB4DA0)
#define AJEKOLJDHAK_DGEBFEOHIEO_OFFSET UNITYSDK_OFFSET(0x12CB5720)
#define AJEKOLJDHAK_GAMOPMAJJDJ_OFFSET UNITYSDK_OFFSET(0x12CB4E50)
#define AJEKOLJDHAK_GGMJACDAALA_OFFSET UNITYSDK_OFFSET(0x12CB5620)
#define AJEKOLJDHAK_HNIIHOBECAP_OFFSET UNITYSDK_OFFSET(0x12CB52C0)
#define AJEKOLJDHAK_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x12CB5840)
#define AJEKOLJDHAK_KJPCHLKHCHG_OFFSET UNITYSDK_OFFSET(0x12CB53B0)
#define AJEKOLJDHAK_LBEEFCEMLNO_OFFSET UNITYSDK_OFFSET(0x12CB5170)

inline static constexpr unsigned int AJEKOLJDHAK_TypeDefinitionIndex = 73192;

	class AJEKOLJDHAK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::IKMOKCKMNMC*>* EFOFFBLGOCB; // 0x10
		::RPG::Client::SimpleLRU_1<::IKMOKCKMNMC*>* DINIBPLLNNG; // 0x18
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AJEKOLJDHAK_CTOR_OFFSET))(this, a1);
		}

		::IKMOKCKMNMC* GAMOPMAJJDJ(::RPG::Client::ViewCacheType a1, ::System::String* a2)
		{
			return ((::IKMOKCKMNMC*(*)(::PVOID, ::RPG::Client::ViewCacheType, ::System::String*))((::PBYTE)hIl2Cpp + AJEKOLJDHAK_GAMOPMAJJDJ_OFFSET))(this, a1, a2);
		}

		::System::Void LBEEFCEMLNO(::RPG::Client::ViewCacheType a1, ::IKMOKCKMNMC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ViewCacheType, ::IKMOKCKMNMC*))((::PBYTE)hIl2Cpp + AJEKOLJDHAK_LBEEFCEMLNO_OFFSET))(this, a1, a2);
		}

		::System::Boolean KJPCHLKHCHG(::RPG::Client::ViewCacheType a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ViewCacheType, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AJEKOLJDHAK_KJPCHLKHCHG_OFFSET))(this, a1, a2);
		}

		::System::Void GGMJACDAALA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJEKOLJDHAK_GGMJACDAALA_OFFSET))(this);
		}

		::System::Void DGEBFEOHIEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJEKOLJDHAK_DGEBFEOHIEO_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJEKOLJDHAK_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void HNIIHOBECAP(::IKMOKCKMNMC* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::IKMOKCKMNMC*, ::System::Boolean))((::PBYTE)hIl2Cpp + AJEKOLJDHAK_HNIIHOBECAP_OFFSET))(this, a1, a2);
		}

	};
