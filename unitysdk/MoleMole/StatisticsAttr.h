#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class PropertyInfo; }

#define MOLEMOLE_STATISTICSATTR_BKPAPNANDLO_OFFSET UNITYSDK_OFFSET(0x1A095050)
#define MOLEMOLE_STATISTICSATTR_BMDFICAEOFL_1_OFFSET UNITYSDK_OFFSET(0x1A095620)
#define MOLEMOLE_STATISTICSATTR_BMDFICAEOFL_OFFSET UNITYSDK_OFFSET(0x1A095C80)
#define MOLEMOLE_STATISTICSATTR_DBKLGKHLHEH_OFFSET UNITYSDK_OFFSET(0x1A095BA0)
#define MOLEMOLE_STATISTICSATTR_DGEIGGBPEFE_OFFSET UNITYSDK_OFFSET(0x1A095B50)
#define MOLEMOLE_STATISTICSATTR_EGNBMOEJDMB_1_OFFSET UNITYSDK_OFFSET(0x1A095360)
#define MOLEMOLE_STATISTICSATTR_EGNBMOEJDMB_OFFSET UNITYSDK_OFFSET(0x1A096720)
#define MOLEMOLE_STATISTICSATTR_ENFOCOKOIAE_OFFSET UNITYSDK_OFFSET(0x1A095E10)
#define MOLEMOLE_STATISTICSATTR_FBPEPHFGDFL_OFFSET UNITYSDK_OFFSET(0x1A097340)
#define MOLEMOLE_STATISTICSATTR_FFJIPOFEEDF_1_OFFSET UNITYSDK_OFFSET(0x1A095E80)
#define MOLEMOLE_STATISTICSATTR_FFJIPOFEEDF_OFFSET UNITYSDK_OFFSET(0x1A095790)
#define MOLEMOLE_STATISTICSATTR_HDLGEDBNEIP_OFFSET UNITYSDK_OFFSET(0x1A095920)
#define MOLEMOLE_STATISTICSATTR_JLDLJJFCNKC_1_OFFSET UNITYSDK_OFFSET(0x1A0971C0)
#define MOLEMOLE_STATISTICSATTR_JLDLJJFCNKC_OFFSET UNITYSDK_OFFSET(0x1A0954E0)
#define MOLEMOLE_STATISTICSATTR_JOICLMOKKGE_OFFSET UNITYSDK_OFFSET(0x1A0968D0)
#define MOLEMOLE_STATISTICSATTR_LNCNCBMFACN_OFFSET UNITYSDK_OFFSET(0x1A096EA0)
#define MOLEMOLE_STATISTICSATTR_LPIEFHFCLPM_OFFSET UNITYSDK_OFFSET(0x1A096C40)
#define MOLEMOLE_STATISTICSATTR_MHIFHNADBGA_OFFSET UNITYSDK_OFFSET(0x1A0958D0)
#define MOLEMOLE_STATISTICSATTR_NCIEGHMDMPI_OFFSET UNITYSDK_OFFSET(0x1A096010)
#define MOLEMOLE_STATISTICSATTR_NCJBGLGNOKE_OFFSET UNITYSDK_OFFSET(0x1A0966D0)
#define MOLEMOLE_STATISTICSATTR_PIBBOAFLHPA_OFFSET UNITYSDK_OFFSET(0x1A097390)
#define MOLEMOLE_STATISTICSATTR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A094F30)
#define MOLEMOLE_STATISTICSATTR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A094D30)

namespace MoleMole
{
	inline static constexpr unsigned int StatisticsAttr_TypeDefinitionIndex = 43451;

	class StatisticsAttr : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::FieldInfo*>** StaticGet_fieldInfoCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::FieldInfo*>**)Il2CppClass::FromTypeDefinitionIndex(StatisticsAttr_TypeDefinitionIndex)->GetStaticField(0x4C1E0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::PropertyInfo*>** StaticGet_propertyInfoCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::PropertyInfo*>**)Il2CppClass::FromTypeDefinitionIndex(StatisticsAttr_TypeDefinitionIndex)->GetStaticField(0x4C1E8);
		}
		::System::Boolean muted; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* attrName; // 0x18
		::System::Single attrTotalVal; // 0x20
		::System::Byte _padding1[0x4];
		::System::String* showName; // 0x28
		::System::Single valueRate; // 0x30
		::System::Single duration; // 0x34
		::System::Single showRange; // 0x38
		::System::Single statisticRange; // 0x3C
		::System::Boolean statisticPerFrame; // 0x40
		::System::Byte _padding2[0x3];
		::UnityEngine::Color showColor; // 0x44
		::System::Byte _padding3[0x4];
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* cachedAttrTotalValPerTime; // 0x58
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* attrTotalValPerTimeList; // 0x60
		::System::Single spsLessTotalTime; // 0x68
		::System::Byte _padding4[0x4];
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* spsLessTimePerTimeList; // 0x70
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* cachedPerTimeData; // 0x78
		::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* cachedData; // 0x80
		::System::Single lastTime; // 0x88
		::System::Single totalValDuration; // 0x8C
		::System::Single showTime; // 0x90
		::System::Single totalStatisticRangeVal; // 0x94
		::System::Collections::Generic::Queue_1<::System::Single>* damageQueue; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* scopeValueDic; // 0xA0
		::System::Single maxValueScope; // 0xA8
		::System::Single meanValueScope; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR__CCTOR_OFFSET))();
		}

		::System::Void BKPAPNANDLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_BKPAPNANDLO_OFFSET))(this);
		}

		::System::Single JLDLJJFCNKC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_JLDLJJFCNKC_OFFSET))(this);
		}

		::System::Void HDLGEDBNEIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_HDLGEDBNEIP_OFFSET))(this);
		}

		::System::Single DGEIGGBPEFE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_DGEIGGBPEFE_OFFSET))(this);
		}

		::System::Void DBKLGKHLHEH(::System::Single ALLNOLHHJMD, ::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_DBKLGKHLHEH_OFFSET))(this, ALLNOLHHJMD, PMNLNNGEIFM);
		}

		::System::Single FFJIPOFEEDF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_FFJIPOFEEDF_OFFSET))(this);
		}

		::System::Single BMDFICAEOFL(::System::Single CIIPCCLOHLH, ::System::Single EODDDEDPMHA)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_BMDFICAEOFL_OFFSET))(this, CIIPCCLOHLH, EODDDEDPMHA);
		}

		::System::Void ENFOCOKOIAE(::System::Single LEJPFDOCMHH, ::System::Single JKLKMAMFCMP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_ENFOCOKOIAE_OFFSET))(this, LEJPFDOCMHH, JKLKMAMFCMP);
		}

		::System::Single FFJIPOFEEDF_1(::System::Single CIIPCCLOHLH, ::System::Single EODDDEDPMHA)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_FFJIPOFEEDF_1_OFFSET))(this, CIIPCCLOHLH, EODDDEDPMHA);
		}

		::System::Void NCIEGHMDMPI(::System::Object* JBIIKDOAMGE, ::System::Single ALLNOLHHJMD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_NCIEGHMDMPI_OFFSET))(this, JBIIKDOAMGE, ALLNOLHHJMD);
		}

		::System::Single NCJBGLGNOKE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_NCJBGLGNOKE_OFFSET))(this);
		}

		::System::Single EGNBMOEJDMB(::System::Single CIIPCCLOHLH, ::System::Single EODDDEDPMHA, ::System::Int32 LOCGLOHBPLD)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_EGNBMOEJDMB_OFFSET))(this, CIIPCCLOHLH, EODDDEDPMHA, LOCGLOHBPLD);
		}

		::System::Void JOICLMOKKGE(::System::Single ALLNOLHHJMD, ::System::Boolean PGJJIFNEFEB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_JOICLMOKKGE_OFFSET))(this, ALLNOLHHJMD, PGJJIFNEFEB);
		}

		::System::Single MHIFHNADBGA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_MHIFHNADBGA_OFFSET))(this);
		}

		::System::Void LPIEFHFCLPM(::System::Collections::Generic::List_1<::System::Int32>* JDHNBOMOFOJ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_LPIEFHFCLPM_OFFSET))(this, JDHNBOMOFOJ);
		}

		::System::Single BMDFICAEOFL_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_BMDFICAEOFL_1_OFFSET))(this);
		}

		::System::Void LNCNCBMFACN(::System::Single CIIPCCLOHLH, ::System::Single EODDDEDPMHA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_LNCNCBMFACN_OFFSET))(this, CIIPCCLOHLH, EODDDEDPMHA);
		}

		::System::Single EGNBMOEJDMB_1(::System::Int32 LOCGLOHBPLD)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_EGNBMOEJDMB_1_OFFSET))(this, LOCGLOHBPLD);
		}

		::System::Single FBPEPHFGDFL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_FBPEPHFGDFL_OFFSET))(this);
		}

		::System::Single JLDLJJFCNKC_1(::System::Single CIIPCCLOHLH, ::System::Single EODDDEDPMHA)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_JLDLJJFCNKC_1_OFFSET))(this, CIIPCCLOHLH, EODDDEDPMHA);
		}

		::System::Single PIBBOAFLHPA(::System::Int32 ONPINPGGIFJ)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_STATISTICSATTR_PIBBOAFLHPA_OFFSET))(this, ONPINPGGIFJ);
		}
	};
}
