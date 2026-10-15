#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG { class ThreadProfileMarker; }
namespace RPG { class ThreadStatProfiler; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_THREADPROFILEMARKER_BEGIN_OFFSET UNITYSDK_OFFSET(0x1EBBCBC0)
#define RPG_THREADPROFILEMARKER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBBD2E0)
#define RPG_THREADPROFILEMARKER_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBBCBB0)
#define RPG_THREADPROFILEMARKER_END_OFFSET UNITYSDK_OFFSET(0x1EBBD100)
#define RPG_THREADPROFILEMARKER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1EBBD2D0)

namespace RPG
{
	inline static constexpr unsigned int ThreadProfileMarker_TypeDefinitionIndex = 35158;

	class ThreadProfileMarker : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		static ::System::Collections::Generic::List_1<::RPG::ThreadProfileMarker*>** StaticGet_AllMarkers()
		{
			return (::System::Collections::Generic::List_1<::RPG::ThreadProfileMarker*>**)UnitySDK::FromName("RPG", "ThreadProfileMarker")->GetStaticField(0x890);
		}

		static ::RPG::ThreadStatProfiler** StaticGet_ThreadStat()
		{
			return (::RPG::ThreadStatProfiler**)UnitySDK::FromName("RPG", "ThreadProfileMarker")->GetStaticField(0x0);
		}

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_THREADPROFILEMARKER_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_THREADPROFILEMARKER_CCTOR_OFFSET))();
		}

		::System::Void Begin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_THREADPROFILEMARKER_BEGIN_OFFSET))(this);
		}

		::System::Void End()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_THREADPROFILEMARKER_END_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_THREADPROFILEMARKER_GET_NAME_OFFSET))(this);
		}

	};
}
