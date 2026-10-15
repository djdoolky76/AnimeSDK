#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEBPFBNCALB.h"
class GJBADDEBBEP;
class HHIJNKNJPMG_CAJKKBEDMGL;
namespace System { class Action; }
namespace System { class Object; }

#define HHIJNKNJPMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C559530)
#define HHIJNKNJPMG_GABAPPOGHGG_OFFSET UNITYSDK_OFFSET(0x1C559850)
#define HHIJNKNJPMG_GET_PREDICATEAGGREGATOR_OFFSET UNITYSDK_OFFSET(0x1C559520)
#define HHIJNKNJPMG_JGHDBJLBEEG_1_OFFSET UNITYSDK_OFFSET(0x1C559710)
#define HHIJNKNJPMG_JGHDBJLBEEG_OFFSET UNITYSDK_OFFSET(0x1C559640)
#define HHIJNKNJPMG_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x1C559780)

inline static constexpr unsigned int HHIJNKNJPMG_TypeDefinitionIndex = 41847;

	class HHIJNKNJPMG : public ::JEBPFBNCALB
	{
	public:
		::GJBADDEBBEP* _PredicateAggregator_k__BackingField; // 0x28
		::System::Void _ctor(::GJBADDEBBEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJBADDEBBEP*))((::PBYTE)hIl2Cpp + HHIJNKNJPMG_CTOR_OFFSET))(this, a1);
		}

		::GJBADDEBBEP* get_PredicateAggregator()
		{
			return ((::GJBADDEBBEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHIJNKNJPMG_GET_PREDICATEAGGREGATOR_OFFSET))(this);
		}

		::System::Action* JGHDBJLBEEG(::System::Object* a1)
		{
			return ((::System::Action*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HHIJNKNJPMG_JGHDBJLBEEG_OFFSET))(this, a1);
		}

		::System::Action* JGHDBJLBEEG_1(::HHIJNKNJPMG_CAJKKBEDMGL* a1)
		{
			return ((::System::Action*(*)(::PVOID, ::HHIJNKNJPMG_CAJKKBEDMGL*))((::PBYTE)hIl2Cpp + HHIJNKNJPMG_JGHDBJLBEEG_1_OFFSET))(this, a1);
		}

		::System::Void GABAPPOGHGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHIJNKNJPMG_GABAPPOGHGG_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHIJNKNJPMG_KANMCJHEFJJ_OFFSET))(this);
		}

	};
