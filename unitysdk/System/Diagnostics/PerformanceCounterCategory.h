#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/PerformanceCounterCategoryType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Diagnostics { class CounterCreationDataCollection; }
namespace System::Diagnostics { class InstanceDataCollectionCollection; }
namespace System::Diagnostics { class PerformanceCounter; }

#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_COUNTEREXISTS_1_OFFSET UNITYSDK_OFFSET(0x1EC4CFC0)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_COUNTEREXISTS_2_OFFSET UNITYSDK_OFFSET(0x1EC4D000)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_COUNTEREXISTS_OFFSET UNITYSDK_OFFSET(0x1EC4CF80)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1EC4D080)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_CREATE_2_OFFSET UNITYSDK_OFFSET(0x1EC4D0C0)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_CREATE_3_OFFSET UNITYSDK_OFFSET(0x1EC4D100)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_CREATE_OFFSET UNITYSDK_OFFSET(0x1EC4D040)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_DELETE_OFFSET UNITYSDK_OFFSET(0x1EC4D140)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_EXISTS_1_OFFSET UNITYSDK_OFFSET(0x1EC4D1C0)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_EXISTS_OFFSET UNITYSDK_OFFSET(0x1EC4D180)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_GETCATEGORIES_1_OFFSET UNITYSDK_OFFSET(0x1EC4D240)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_GETCATEGORIES_OFFSET UNITYSDK_OFFSET(0x1EC4D200)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_GETCOUNTERS_1_OFFSET UNITYSDK_OFFSET(0x1EC4D2C0)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_GETCOUNTERS_OFFSET UNITYSDK_OFFSET(0x1EC4D280)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_GETINSTANCENAMES_OFFSET UNITYSDK_OFFSET(0x1EC4D300)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_GET_CATEGORYHELP_OFFSET UNITYSDK_OFFSET(0x1EC4CE00)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_GET_CATEGORYNAME_OFFSET UNITYSDK_OFFSET(0x1EC4CE40)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_GET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x1EC4CEC0)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_GET_MACHINENAME_OFFSET UNITYSDK_OFFSET(0x1EC4CF00)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_INSTANCEEXISTS_1_OFFSET UNITYSDK_OFFSET(0x1EC4D380)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_INSTANCEEXISTS_2_OFFSET UNITYSDK_OFFSET(0x1EC4D3C0)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_INSTANCEEXISTS_OFFSET UNITYSDK_OFFSET(0x1EC4D340)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_READCATEGORY_OFFSET UNITYSDK_OFFSET(0x1EC4D400)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_SET_CATEGORYNAME_OFFSET UNITYSDK_OFFSET(0x1EC4CE80)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_SET_MACHINENAME_OFFSET UNITYSDK_OFFSET(0x1EC4CF40)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EC4CD80)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1EC4CDC0)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC4CD40)

namespace System::Diagnostics
{
	inline static constexpr unsigned int PerformanceCounterCategory_TypeDefinitionIndex = 4180;

	class PerformanceCounterCategory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* categoryName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY__CTOR_1_OFFSET))(this, categoryName);
		}

		::System::Void _ctor_2(::System::String* categoryName, ::System::String* machineName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY__CTOR_2_OFFSET))(this, categoryName, machineName);
		}

		::System::String* get_CategoryHelp()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_GET_CATEGORYHELP_OFFSET))(this);
		}

		::System::String* get_CategoryName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_GET_CATEGORYNAME_OFFSET))(this);
		}

		::System::Void set_CategoryName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_SET_CATEGORYNAME_OFFSET))(this, value);
		}

		::System::Diagnostics::PerformanceCounterCategoryType get_CategoryType()
		{
			return ((::System::Diagnostics::PerformanceCounterCategoryType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_GET_CATEGORYTYPE_OFFSET))(this);
		}

		::System::String* get_MachineName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_GET_MACHINENAME_OFFSET))(this);
		}

		::System::Void set_MachineName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_SET_MACHINENAME_OFFSET))(this, value);
		}

		::System::Boolean CounterExists(::System::String* counterName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_COUNTEREXISTS_OFFSET))(this, counterName);
		}

		static ::System::Boolean CounterExists_1(::System::String* counterName, ::System::String* categoryName)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_COUNTEREXISTS_1_OFFSET))(counterName, categoryName);
		}

		static ::System::Boolean CounterExists_2(::System::String* counterName, ::System::String* categoryName, ::System::String* machineName)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_COUNTEREXISTS_2_OFFSET))(counterName, categoryName, machineName);
		}

		static ::System::Diagnostics::PerformanceCounterCategory* Create(::System::String* categoryName, ::System::String* categoryHelp, ::System::Diagnostics::CounterCreationDataCollection* counterData)
		{
			return ((::System::Diagnostics::PerformanceCounterCategory*(*)(::System::String*, ::System::String*, ::System::Diagnostics::CounterCreationDataCollection*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_CREATE_OFFSET))(categoryName, categoryHelp, counterData);
		}

		static ::System::Diagnostics::PerformanceCounterCategory* Create_1(::System::String* categoryName, ::System::String* categoryHelp, ::System::Diagnostics::PerformanceCounterCategoryType categoryType, ::System::Diagnostics::CounterCreationDataCollection* counterData)
		{
			return ((::System::Diagnostics::PerformanceCounterCategory*(*)(::System::String*, ::System::String*, ::System::Diagnostics::PerformanceCounterCategoryType, ::System::Diagnostics::CounterCreationDataCollection*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_CREATE_1_OFFSET))(categoryName, categoryHelp, categoryType, counterData);
		}

		static ::System::Diagnostics::PerformanceCounterCategory* Create_2(::System::String* categoryName, ::System::String* categoryHelp, ::System::Diagnostics::PerformanceCounterCategoryType categoryType, ::System::String* counterName, ::System::String* counterHelp)
		{
			return ((::System::Diagnostics::PerformanceCounterCategory*(*)(::System::String*, ::System::String*, ::System::Diagnostics::PerformanceCounterCategoryType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_CREATE_2_OFFSET))(categoryName, categoryHelp, categoryType, counterName, counterHelp);
		}

		static ::System::Diagnostics::PerformanceCounterCategory* Create_3(::System::String* categoryName, ::System::String* categoryHelp, ::System::String* counterName, ::System::String* counterHelp)
		{
			return ((::System::Diagnostics::PerformanceCounterCategory*(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_CREATE_3_OFFSET))(categoryName, categoryHelp, counterName, counterHelp);
		}

		static ::System::Void Delete(::System::String* categoryName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_DELETE_OFFSET))(categoryName);
		}

		static ::System::Boolean Exists(::System::String* categoryName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_EXISTS_OFFSET))(categoryName);
		}

		static ::System::Boolean Exists_1(::System::String* categoryName, ::System::String* machineName)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_EXISTS_1_OFFSET))(categoryName, machineName);
		}

		static ::Il2CppArray<::System::Diagnostics::PerformanceCounterCategory*>* GetCategories()
		{
			return ((::Il2CppArray<::System::Diagnostics::PerformanceCounterCategory*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_GETCATEGORIES_OFFSET))();
		}

		static ::Il2CppArray<::System::Diagnostics::PerformanceCounterCategory*>* GetCategories_1(::System::String* machineName)
		{
			return ((::Il2CppArray<::System::Diagnostics::PerformanceCounterCategory*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_GETCATEGORIES_1_OFFSET))(machineName);
		}

		::Il2CppArray<::System::Diagnostics::PerformanceCounter*>* GetCounters()
		{
			return ((::Il2CppArray<::System::Diagnostics::PerformanceCounter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_GETCOUNTERS_OFFSET))(this);
		}

		::Il2CppArray<::System::Diagnostics::PerformanceCounter*>* GetCounters_1(::System::String* instanceName)
		{
			return ((::Il2CppArray<::System::Diagnostics::PerformanceCounter*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_GETCOUNTERS_1_OFFSET))(this, instanceName);
		}

		::Il2CppArray<::System::String*>* GetInstanceNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_GETINSTANCENAMES_OFFSET))(this);
		}

		::System::Boolean InstanceExists(::System::String* instanceName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_INSTANCEEXISTS_OFFSET))(this, instanceName);
		}

		static ::System::Boolean InstanceExists_1(::System::String* instanceName, ::System::String* categoryName)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_INSTANCEEXISTS_1_OFFSET))(instanceName, categoryName);
		}

		static ::System::Boolean InstanceExists_2(::System::String* instanceName, ::System::String* categoryName, ::System::String* machineName)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_INSTANCEEXISTS_2_OFFSET))(instanceName, categoryName, machineName);
		}

		::System::Diagnostics::InstanceDataCollectionCollection* ReadCategory()
		{
			return ((::System::Diagnostics::InstanceDataCollectionCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERCATEGORY_READCATEGORY_OFFSET))(this);
		}
	};
}
