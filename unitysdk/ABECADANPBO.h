#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace System { class String; }

#define ABECADANPBO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C8777B0)
#define ABECADANPBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C877810)
#define ABECADANPBO_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0x1C877600)

	class ABECADANPBO : public ::System::Object
	{
	public:
		::RPG::PoolDictionary_2<::System::String*, ::System::UInt32>* BGDHPALMHEL; // 0x10
		::System::UInt32 ALHKDENIFKH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABECADANPBO_CTOR_OFFSET))(this);
		}

		::System::Void NHPDCPKMNAM(::System::UInt32 a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + ABECADANPBO_NHPDCPKMNAM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABECADANPBO_CLEAR_OFFSET))(this);
		}

	};
