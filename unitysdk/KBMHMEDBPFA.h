#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TypeCode.h"
namespace System { class EventHandler; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace System::Reflection { class PropertyInfo; }

#define KBMHMEDBPFA_ADD_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1E537C80)
#define KBMHMEDBPFA_ADD__VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1E537D10)
#define KBMHMEDBPFA_AGNAJNLKFFH_OFFSET UNITYSDK_OFFSET(0x1E537940)
#define KBMHMEDBPFA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E529270)
#define KBMHMEDBPFA_DLMPDGJHPPC_OFFSET UNITYSDK_OFFSET(0x1E537540)
#define KBMHMEDBPFA_DMACGPACJMM_OFFSET UNITYSDK_OFFSET(0x1E537E60)
#define KBMHMEDBPFA_FHAPPCADGCE_OFFSET UNITYSDK_OFFSET(0x1E537AC0)
#define KBMHMEDBPFA_IOIFPHAMFDF_OFFSET UNITYSDK_OFFSET(0x1E537A80)
#define KBMHMEDBPFA_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1E537880)
#define KBMHMEDBPFA_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0x1E537BA0)
#define KBMHMEDBPFA_REMOVE_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1E537D70)
#define KBMHMEDBPFA_REMOVE__VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1E537E00)

inline static constexpr unsigned int KBMHMEDBPFA_TypeDefinitionIndex = 45140;

	class KBMHMEDBPFA : public ::System::Object
	{
	public:
		::System::EventHandler* _ValueChanged; // 0x10
		::System::Object* BPKKKMOCFIP; // 0x18
		::System::Reflection::PropertyInfo* MELADKPKCEE; // 0x20
		::System::Void _ctor(::System::Object* a1, ::System::Reflection::PropertyInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + KBMHMEDBPFA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Type* JBIOGKPHKKC()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMHMEDBPFA_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::TypeCode AGNAJNLKFFH()
		{
			return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMHMEDBPFA_AGNAJNLKFFH_OFFSET))(this);
		}

		::System::Object* IOIFPHAMFDF()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMHMEDBPFA_IOIFPHAMFDF_OFFSET))(this);
		}

		::System::Void FHAPPCADGCE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KBMHMEDBPFA_FHAPPCADGCE_OFFSET))(this, a1);
		}

		::System::Object* MNGGAOFNGIP()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMHMEDBPFA_MNGGAOFNGIP_OFFSET))(this);
		}

		::System::Void add_ValueChanged(::System::EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + KBMHMEDBPFA_ADD_VALUECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_ValueChanged(::System::EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + KBMHMEDBPFA_REMOVE_VALUECHANGED_OFFSET))(this, a1);
		}

		::System::Void DLMPDGJHPPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMHMEDBPFA_DLMPDGJHPPC_OFFSET))(this);
		}

		::System::Void DMACGPACJMM(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + KBMHMEDBPFA_DMACGPACJMM_OFFSET))(this, a1, a2);
		}

		::System::Void add__ValueChanged(::System::EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + KBMHMEDBPFA_ADD__VALUECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove__ValueChanged(::System::EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + KBMHMEDBPFA_REMOVE__VALUECHANGED_OFFSET))(this, a1);
		}

	};
