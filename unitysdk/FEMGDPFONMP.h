#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
class DLCPHCINDJF;
class FEMGDPFONMP;
class GEDMHFPPBHN;
class PHKFMKDHNBO;
namespace System { class String; }

#define FEMGDPFONMP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1571A080)
#define FEMGDPFONMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1571A100)
#define FEMGDPFONMP_GET_DUMMYINVERSEDINDEX_OFFSET UNITYSDK_OFFSET(0x1571A290)
#define FEMGDPFONMP_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1571A1C0)
#define FEMGDPFONMP_GET_NODEID_OFFSET UNITYSDK_OFFSET(0x1571A1A0)
#define FEMGDPFONMP_JMCDPBLNMLO_OFFSET UNITYSDK_OFFSET(0x1571A240)
#define FEMGDPFONMP_NFBOEEFMOON_OFFSET UNITYSDK_OFFSET(0x1571A110)
#define FEMGDPFONMP_SET_DUMMYINVERSEDINDEX_OFFSET UNITYSDK_OFFSET(0x1571A2A0)
#define FEMGDPFONMP_SET_NODEID_OFFSET UNITYSDK_OFFSET(0x1571A1B0)

inline static constexpr unsigned int FEMGDPFONMP_TypeDefinitionIndex = 72162;

	class FEMGDPFONMP : public ::System::Object
	{
	public:
		::DLCPHCINDJF* EEHODNKAAMH; // 0x10
		::System::Nullable_1<::System::Int32> _DummyInversedIndex_k__BackingField; // 0x18
		::System::UInt32 _NodeID_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMGDPFONMP_CTOR_OFFSET))(this);
		}

		static ::FEMGDPFONMP* BPLPBPMEODA(::GEDMHFPPBHN* a1)
		{
			return ((::FEMGDPFONMP*(*)(::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + FEMGDPFONMP_BPLPBPMEODA_OFFSET))(a1);
		}

		static ::FEMGDPFONMP* NFBOEEFMOON(::PHKFMKDHNBO* a1, ::System::Int32 a2)
		{
			return ((::FEMGDPFONMP*(*)(::PHKFMKDHNBO*, ::System::Int32))((::PBYTE)hIl2Cpp + FEMGDPFONMP_NFBOEEFMOON_OFFSET))(a1, a2);
		}

		::System::UInt32 get_NodeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMGDPFONMP_GET_NODEID_OFFSET))(this);
		}

		::System::Void set_NodeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FEMGDPFONMP_SET_NODEID_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMGDPFONMP_GET_ICONPATH_OFFSET))(this);
		}

		::System::Boolean JMCDPBLNMLO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMGDPFONMP_JMCDPBLNMLO_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> get_DummyInversedIndex()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMGDPFONMP_GET_DUMMYINVERSEDINDEX_OFFSET))(this);
		}

		::System::Void set_DummyInversedIndex(::System::Nullable_1<::System::Int32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + FEMGDPFONMP_SET_DUMMYINVERSEDINDEX_OFFSET))(this, a1);
		}

	};
