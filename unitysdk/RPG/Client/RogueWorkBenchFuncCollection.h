#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APKENKIDMGC;
namespace RPG::Client { class RogueWorkBenchFuncItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION_CTOR_OFFSET UNITYSDK_OFFSET(0xEACE020)
#define RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION_GET_FUNCITEMS_OFFSET UNITYSDK_OFFSET(0xEACE000)
#define RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION_GET_PROPENTITYID_OFFSET UNITYSDK_OFFSET(0xEACDFE0)
#define RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION_SET_FUNCITEMS_OFFSET UNITYSDK_OFFSET(0xEACE010)
#define RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION_SET_PROPENTITYID_OFFSET UNITYSDK_OFFSET(0xEACDFF0)
#define RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION__GETFUNCLISTINMAGICROGUE_OFFSET UNITYSDK_OFFSET(0xEACE920)
#define RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION__GETFUNCLISTINTOURNROGUE_OFFSET UNITYSDK_OFFSET(0xEACE8A0)
#define RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION__SORTITEMS_OFFSET UNITYSDK_OFFSET(0xEACE590)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueWorkBenchFuncCollection_TypeDefinitionIndex = 69284;

	class RogueWorkBenchFuncCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueWorkBenchFuncItem*>* _FuncItems_k__BackingField; // 0x10
		::System::UInt32 _PropEntityID_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::APKENKIDMGC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::APKENKIDMGC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_PropEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION_GET_PROPENTITYID_OFFSET))(this);
		}

		::System::Void set_PropEntityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION_SET_PROPENTITYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueWorkBenchFuncItem*>* get_FuncItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueWorkBenchFuncItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION_GET_FUNCITEMS_OFFSET))(this);
		}

		::System::Void set_FuncItems(::System::Collections::Generic::List_1<::RPG::Client::RogueWorkBenchFuncItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueWorkBenchFuncItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION_SET_FUNCITEMS_OFFSET))(this, a1);
		}

		::System::Void _SortItems(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION__SORTITEMS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* _GetFuncListInTournRogue(::System::UInt32 a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION__GETFUNCLISTINTOURNROGUE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* _GetFuncListInMagicRogue(::System::UInt32 a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHFUNCCOLLECTION__GETFUNCLISTINMAGICROGUE_OFFSET))(this, a1);
		}

	};
}
