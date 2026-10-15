#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TypeCode.h"
namespace System { class EventHandler; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace System::Reflection { class PropertyInfo; }

#define KBMHMEDBPFA_ADD_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1EC4E0F0)
#define KBMHMEDBPFA_ADD__VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1EC4E180)
#define KBMHMEDBPFA_AGNAJNLKFFH_OFFSET UNITYSDK_OFFSET(0x1EC4DDB0)
#define KBMHMEDBPFA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC3F730)
#define KBMHMEDBPFA_DLMPDGJHPPC_OFFSET UNITYSDK_OFFSET(0x1EC4D9B0)
#define KBMHMEDBPFA_DMACGPACJMM_OFFSET UNITYSDK_OFFSET(0x1EC4E2D0)
#define KBMHMEDBPFA_FHAPPCADGCE_OFFSET UNITYSDK_OFFSET(0x1EC4DF30)
#define KBMHMEDBPFA_IOIFPHAMFDF_OFFSET UNITYSDK_OFFSET(0x1EC4DEF0)
#define KBMHMEDBPFA_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1EC4DCF0)
#define KBMHMEDBPFA_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0x1EC4E010)
#define KBMHMEDBPFA_REMOVE_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1EC4E1E0)
#define KBMHMEDBPFA_REMOVE__VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1EC4E270)

inline static constexpr unsigned int KBMHMEDBPFA_TypeDefinitionIndex = 44065;

	class KBMHMEDBPFA : public ::System::Object
	{
	public:
		::System::Object* BPKKKMOCFIP; // 0x10
		::System::EventHandler* _ValueChanged; // 0x18
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
