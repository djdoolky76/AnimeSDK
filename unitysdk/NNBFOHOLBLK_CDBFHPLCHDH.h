#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class NNBFOHOLBLK;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NNBFOHOLBLK_CDBFHPLCHDH_AWAKE_OFFSET UNITYSDK_OFFSET(0xBC9D2E0)
#define NNBFOHOLBLK_CDBFHPLCHDH_CTOR_OFFSET UNITYSDK_OFFSET(0xBC9D9A0)
#define NNBFOHOLBLK_CDBFHPLCHDH_GET_LISTENCOLLIDERITEMSTR_OFFSET UNITYSDK_OFFSET(0xBC9D4E0)
#define NNBFOHOLBLK_CDBFHPLCHDH_GET_LISTENCOLLIDERITEM_OFFSET UNITYSDK_OFFSET(0xBC9D320)
#define NNBFOHOLBLK_CDBFHPLCHDH_GET_LOADEDCOLLIDERITEMSTR_OFFSET UNITYSDK_OFFSET(0xBC9D700)
#define NNBFOHOLBLK_CDBFHPLCHDH_GET_LOADEDCOLLIDERITEM_OFFSET UNITYSDK_OFFSET(0xBC9D380)

inline static constexpr unsigned int NNBFOHOLBLK_CDBFHPLCHDH_TypeDefinitionIndex = 73869;

	class NNBFOHOLBLK_CDBFHPLCHDH : public ::UnityEngine::MonoBehaviour
	{
	public:
		::NNBFOHOLBLK* OwnerHandler; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNBFOHOLBLK_CDBFHPLCHDH_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNBFOHOLBLK_CDBFHPLCHDH_AWAKE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* get_ListenColliderItem()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNBFOHOLBLK_CDBFHPLCHDH_GET_LISTENCOLLIDERITEM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* get_LoadedColliderItem()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNBFOHOLBLK_CDBFHPLCHDH_GET_LOADEDCOLLIDERITEM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_ListenColliderItemStr()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNBFOHOLBLK_CDBFHPLCHDH_GET_LISTENCOLLIDERITEMSTR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_LoadedColliderItemStr()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNBFOHOLBLK_CDBFHPLCHDH_GET_LOADEDCOLLIDERITEMSTR_OFFSET))(this);
		}

	};
