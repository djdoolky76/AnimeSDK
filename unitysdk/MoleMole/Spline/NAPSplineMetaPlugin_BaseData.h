#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Spline/NAPSplineMetaPluginBase.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x13F12F50)
#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x13F12F90)
#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_GET_SPLINENAME_OFFSET UNITYSDK_OFFSET(0x13F12FD0)
#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_GET_TAGLIST_OFFSET UNITYSDK_OFFSET(0x13F12FE0)
#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_LOHDLDKDAML_OFFSET UNITYSDK_OFFSET(0x13F13570)
#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_RECORDDATA_1_OFFSET UNITYSDK_OFFSET(0x13F130E0)
#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_RECORDDATA_2_OFFSET UNITYSDK_OFFSET(0x13F131A0)
#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_RECORDDATA_OFFSET UNITYSDK_OFFSET(0x13F12FF0)
#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_REMOVEDATA_1_OFFSET UNITYSDK_OFFSET(0x13F13290)
#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_REMOVEDATA_2_OFFSET UNITYSDK_OFFSET(0x13F133F0)
#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_REMOVEDATA_OFFSET UNITYSDK_OFFSET(0x13F131F0)
#define MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x13F13440)

namespace MoleMole::Spline
{
	inline static constexpr unsigned int NAPSplineMetaPlugin_BaseData_TypeDefinitionIndex = 85245;

	class NAPSplineMetaPlugin_BaseData : public ::MoleMole::Spline::NAPSplineMetaPluginBase
	{
	public:
		::System::String* _FHNJBJFCLKP_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* OAFHDLOHFNG; // 0x40
		::System::Collections::Generic::List_1<::System::String*>* AKDCNICFJGO; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA__CTOR_OFFSET))(this);
		}

		static ::System::String* get_NAME()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_GET_NAME_OFFSET))();
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_SplineName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_GET_SPLINENAME_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::String*>* get_TagList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_GET_TAGLIST_OFFSET))(this);
		}

		::System::Void RecordData(::System::String* KCEIKDDANLF, ::System::String* AELLPLBJELA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_RECORDDATA_OFFSET))(this, KCEIKDDANLF, AELLPLBJELA);
		}

		::System::Void RecordData_1(::System::Collections::Generic::List_1<::System::String*>* NGFEFHPLMHK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_RECORDDATA_1_OFFSET))(this, NGFEFHPLMHK);
		}

		::System::Void RecordData_2(::Foundation::ViewObject::ViewObjectHandle EAPIEMGDDMM)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_RECORDDATA_2_OFFSET))(this, EAPIEMGDDMM);
		}

		::System::Void RemoveData(::System::String* AELLPLBJELA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_REMOVEDATA_OFFSET))(this, AELLPLBJELA);
		}

		::System::Void RemoveData_1(::System::Collections::Generic::List_1<::System::String*>* NGFEFHPLMHK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_REMOVEDATA_1_OFFSET))(this, NGFEFHPLMHK);
		}

		::System::Void RemoveData_2(::Foundation::ViewObject::ViewObjectHandle EAPIEMGDDMM)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_REMOVEDATA_2_OFFSET))(this, EAPIEMGDDMM);
		}

		::System::Void LOHDLDKDAML(::System::String* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPSPLINEMETAPLUGIN_BASEDATA_LOHDLDKDAML_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
