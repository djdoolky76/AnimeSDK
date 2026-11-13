#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
class GEDMHFPPBHN;
class ICCCNAJCCLE;
namespace RPG::Client { class BattleAvatarNihiluxCustomUIData; }
namespace System { class String; }

#define ICCCNAJCCLE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x188C9AE0)
#define ICCCNAJCCLE_CTOR_OFFSET UNITYSDK_OFFSET(0x188C9B90)
#define ICCCNAJCCLE_GET_DUMMYINVERSEDINDEX_OFFSET UNITYSDK_OFFSET(0x188C9C80)
#define ICCCNAJCCLE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x188C9C20)
#define ICCCNAJCCLE_GET_NODEID_OFFSET UNITYSDK_OFFSET(0x188C9C00)
#define ICCCNAJCCLE_JMCDPBLNMLO_OFFSET UNITYSDK_OFFSET(0x188C9C40)
#define ICCCNAJCCLE_MCAMMPHKDBG_OFFSET UNITYSDK_OFFSET(0x188C9BA0)
#define ICCCNAJCCLE_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x188C9C30)
#define ICCCNAJCCLE_SET_NODEID_OFFSET UNITYSDK_OFFSET(0x188C9C10)

inline static constexpr unsigned int ICCCNAJCCLE_TypeDefinitionIndex = 74227;

	class ICCCNAJCCLE : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::System::UInt32 _NodeID_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCCNAJCCLE_CTOR_OFFSET))(this);
		}

		static ::ICCCNAJCCLE* BPLPBPMEODA(::GEDMHFPPBHN* a1, ::RPG::Client::BattleAvatarNihiluxCustomUIData* a2)
		{
			return ((::ICCCNAJCCLE*(*)(::GEDMHFPPBHN*, ::RPG::Client::BattleAvatarNihiluxCustomUIData*))((::PBYTE)hIl2Cpp + ICCCNAJCCLE_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		static ::ICCCNAJCCLE* MCAMMPHKDBG(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::ICCCNAJCCLE*(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + ICCCNAJCCLE_MCAMMPHKDBG_OFFSET))(a1, a2);
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

		::System::Nullable_1<::System::Int32> get_DummyInversedIndex()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCCNAJCCLE_GET_DUMMYINVERSEDINDEX_OFFSET))(this);
		}

	};
