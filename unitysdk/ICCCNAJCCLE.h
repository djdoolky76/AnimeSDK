#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEDMHFPPBHN;
class ICCCNAJCCLE;
namespace System { class Nullable; }
namespace System { class String; }

#define ICCCNAJCCLE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15E4C4D0)
#define ICCCNAJCCLE_CTOR_OFFSET UNITYSDK_OFFSET(0x15E4C570)
#define ICCCNAJCCLE_GET_DUMMYINVERSEDINDEX_OFFSET UNITYSDK_OFFSET(0x15E4C600)
#define ICCCNAJCCLE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x15E4C5A0)
#define ICCCNAJCCLE_GET_NODEID_OFFSET UNITYSDK_OFFSET(0x15E4C580)
#define ICCCNAJCCLE_JMCDPBLNMLO_OFFSET UNITYSDK_OFFSET(0x15E4C5C0)
#define ICCCNAJCCLE_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x15E4C5B0)
#define ICCCNAJCCLE_SET_NODEID_OFFSET UNITYSDK_OFFSET(0x15E4C590)

inline static constexpr unsigned int ICCCNAJCCLE_TypeDefinitionIndex = 72164;

	class ICCCNAJCCLE : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::System::UInt32 _NodeID_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCCNAJCCLE_CTOR_OFFSET))(this);
		}

		static ::ICCCNAJCCLE* BPLPBPMEODA(::GEDMHFPPBHN* a1)
		{
			return ((::ICCCNAJCCLE*(*)(::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + ICCCNAJCCLE_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::UInt32 get_NodeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCCNAJCCLE_GET_NODEID_OFFSET))(this);
		}

		::System::Void set_NodeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ICCCNAJCCLE_SET_NODEID_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCCNAJCCLE_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICCCNAJCCLE_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::Boolean JMCDPBLNMLO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCCNAJCCLE_JMCDPBLNMLO_OFFSET))(this);
		}

		::System::Nullable* get_DummyInversedIndex()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCCNAJCCLE_GET_DUMMYINVERSEDINDEX_OFFSET))(this);
		}

	};
