#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LELCKJPOPAO.h"
#include "unitysdk/System/DateTime.h"
namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }
namespace System { class Object; }
namespace System { class String; }

namespace RPG::GameCore
{
	template <typename T>
	class ConfigDataPool_1 : public ::LELCKJPOPAO
	{
	public:
		::PVOID _Data; // 0x0
		::System::UInt32 _Size; // 0x0
		::System::UInt32 _DataStartOffset; // 0x0
		::System::String* _PoolId; // 0x0
		::System::DateTime _LastAccessTime; // 0x0
		::System::Int32 _Accessed; // 0x0
		::Collections::Pooled::PooledDictionary_2<::System::UInt32, ::System::String*>* _StringCache; // 0x0
		::Collections::Pooled::PooledDictionary_2<::System::UInt32, ::System::Object*>* _OriginalCache; // 0x0
		::Collections::Pooled::PooledDictionary_2<::System::UInt32, ::System::String*>* _PendingStringCache; // 0x0
		::Collections::Pooled::PooledDictionary_2<::System::UInt32, ::System::Object*>* _PendingOriginalCache; // 0x0
	};
}
