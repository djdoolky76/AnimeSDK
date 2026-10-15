#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMDAIKOHCAE;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MEPPNFLLMEN_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB8E22D0)
#define MEPPNFLLMEN_CTOR_OFFSET UNITYSDK_OFFSET(0xB8E22C0)
#define MEPPNFLLMEN_GET_GRAPHDESC_OFFSET UNITYSDK_OFFSET(0xB8E22A0)
#define MEPPNFLLMEN_GET_WAYPOINTS_OFFSET UNITYSDK_OFFSET(0xB8E2280)
#define MEPPNFLLMEN_SET_GRAPHDESC_OFFSET UNITYSDK_OFFSET(0xB8E22B0)
#define MEPPNFLLMEN_SET_WAYPOINTS_OFFSET UNITYSDK_OFFSET(0xB8E2290)

inline static constexpr unsigned int MEPPNFLLMEN_TypeDefinitionIndex = 58969;

	class MEPPNFLLMEN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::JMDAIKOHCAE*>* _Waypoints_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::Il2CppArray<::System::UInt32>*>* _GraphDesc_k__BackingField; // 0x18
		::System::Void _ctor(::System::Collections::Generic::List_1<::JMDAIKOHCAE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::JMDAIKOHCAE*>*))((::PBYTE)hIl2Cpp + MEPPNFLLMEN_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Collections::Generic::List_1<::JMDAIKOHCAE*>* a1, ::System::Collections::Generic::List_1<::Il2CppArray<::System::UInt32>*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::JMDAIKOHCAE*>*, ::System::Collections::Generic::List_1<::Il2CppArray<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + MEPPNFLLMEN_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::JMDAIKOHCAE*>* get_Waypoints()
		{
			return ((::System::Collections::Generic::List_1<::JMDAIKOHCAE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPPNFLLMEN_GET_WAYPOINTS_OFFSET))(this);
		}

		::System::Void set_Waypoints(::System::Collections::Generic::List_1<::JMDAIKOHCAE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::JMDAIKOHCAE*>*))((::PBYTE)hIl2Cpp + MEPPNFLLMEN_SET_WAYPOINTS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Il2CppArray<::System::UInt32>*>* get_GraphDesc()
		{
			return ((::System::Collections::Generic::List_1<::Il2CppArray<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPPNFLLMEN_GET_GRAPHDESC_OFFSET))(this);
		}

		::System::Void set_GraphDesc(::System::Collections::Generic::List_1<::Il2CppArray<::System::UInt32>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Il2CppArray<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + MEPPNFLLMEN_SET_GRAPHDESC_OFFSET))(this, a1);
		}

	};
