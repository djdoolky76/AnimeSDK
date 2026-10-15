#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class NodeIndexItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }

#define RPG_CLIENT_BINDERINDEX_CCTOR_OFFSET UNITYSDK_OFFSET(0xC87E460)
#define RPG_CLIENT_BINDERINDEX_CTOR_OFFSET UNITYSDK_OFFSET(0xC87E420)
#define RPG_CLIENT_BINDERINDEX_GETFILENAME_OFFSET UNITYSDK_OFFSET(0xC87E3B0)
#define RPG_CLIENT_BINDERINDEX_GETPLAINCOMPONENTBYINDEX_OFFSET UNITYSDK_OFFSET(0xC87E180)
#define RPG_CLIENT_BINDERINDEX_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xC87E130)
#define RPG_CLIENT_BINDERINDEX_INDEXVALID_OFFSET UNITYSDK_OFFSET(0xC87E0D0)

namespace RPG::Client
{
	inline static constexpr unsigned int BinderIndex_TypeDefinitionIndex = 72507;

	class BinderIndex : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::NodeIndexItem*>* binderIndexes; // 0x18
		::System::String* OutputFileName; // 0x20
		static ::System::Boolean* StaticGet_BinderIndexOpen()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "BinderIndex")->GetStaticField(0x4D30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BINDERINDEX_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BINDERINDEX_CCTOR_OFFSET))();
		}

		::System::Boolean IndexValid(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BINDERINDEX_INDEXVALID_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BINDERINDEX_GET_COUNT_OFFSET))(this);
		}

		::UnityEngine::Component* GetPlainComponentByIndex(::System::Int32 a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BINDERINDEX_GETPLAINCOMPONENTBYINDEX_OFFSET))(this, a1);
		}

		::System::String* GetFileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BINDERINDEX_GETFILENAME_OFFSET))(this);
		}

	};
}
