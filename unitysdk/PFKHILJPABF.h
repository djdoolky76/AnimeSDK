#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SwordTrainingPerformanceType.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PFKHILJPABF_CTOR_OFFSET UNITYSDK_OFFSET(0x16D82D80)
#define PFKHILJPABF_GET_PERFORMANCEENDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16D82D40)
#define PFKHILJPABF_GET_PERFORMANCEIDLIST_OFFSET UNITYSDK_OFFSET(0x16D82D00)
#define PFKHILJPABF_GET_SKIPTELEPORT_OFFSET UNITYSDK_OFFSET(0x16D82D60)
#define PFKHILJPABF_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x16D82D20)
#define PFKHILJPABF_SET_PERFORMANCEENDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16D82D50)
#define PFKHILJPABF_SET_PERFORMANCEIDLIST_OFFSET UNITYSDK_OFFSET(0x16D82D10)
#define PFKHILJPABF_SET_SKIPTELEPORT_OFFSET UNITYSDK_OFFSET(0x16D82D70)
#define PFKHILJPABF_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x16D82D30)

inline static constexpr unsigned int PFKHILJPABF_TypeDefinitionIndex = 63400;

	class PFKHILJPABF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _PerformanceIDList_k__BackingField; // 0x10
		::System::Action* _PerformanceEndCallback_k__BackingField; // 0x18
		::System::Boolean _SkipTeleport_k__BackingField; // 0x20
		::System::Byte _padding0[0x3];
		::RPG::Client::SwordTrainingPerformanceType _Type_k__BackingField; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKHILJPABF_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_PerformanceIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKHILJPABF_GET_PERFORMANCEIDLIST_OFFSET))(this);
		}

		::System::Void set_PerformanceIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + PFKHILJPABF_SET_PERFORMANCEIDLIST_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTrainingPerformanceType get_Type()
		{
			return ((::RPG::Client::SwordTrainingPerformanceType(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKHILJPABF_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::SwordTrainingPerformanceType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingPerformanceType))((::PBYTE)hIl2Cpp + PFKHILJPABF_SET_TYPE_OFFSET))(this, a1);
		}

		::System::Action* get_PerformanceEndCallback()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKHILJPABF_GET_PERFORMANCEENDCALLBACK_OFFSET))(this);
		}

		::System::Void set_PerformanceEndCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PFKHILJPABF_SET_PERFORMANCEENDCALLBACK_OFFSET))(this, a1);
		}

		::System::Boolean get_SkipTeleport()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKHILJPABF_GET_SKIPTELEPORT_OFFSET))(this);
		}

		::System::Void set_SkipTeleport(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PFKHILJPABF_SET_SKIPTELEPORT_OFFSET))(this, a1);
		}

	};
