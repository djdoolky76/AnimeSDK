#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TypeCode.h"
namespace System { class EventHandler; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class PropertyInfo; }
namespace UnityEngine::Events { class UnityEventBase; }

#define JJCGFKPGNFE_ADD_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1FF2AA00)
#define JJCGFKPGNFE_ADD__VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1FF2AA90)
#define JJCGFKPGNFE_AGNAJNLKFFH_OFFSET UNITYSDK_OFFSET(0x1FF2A6C0)
#define JJCGFKPGNFE_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF1D330)
#define JJCGFKPGNFE_DJMOOLAIGEO_OFFSET UNITYSDK_OFFSET(0x1FF2A800)
#define JJCGFKPGNFE_FHAPPCADGCE_OFFSET UNITYSDK_OFFSET(0x1FF2A840)
#define JJCGFKPGNFE_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1FF2A600)
#define JJCGFKPGNFE_MJBOHMOEPAO_OFFSET UNITYSDK_OFFSET(0x1FF2ABE0)
#define JJCGFKPGNFE_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0x1FF2A920)
#define JJCGFKPGNFE_REMOVE_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1FF2AAF0)
#define JJCGFKPGNFE_REMOVE__VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1FF2AB80)
#define JJCGFKPGNFE___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1FF2AC70)
#define JJCGFKPGNFE___CTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0x1FF2AD70)

inline static constexpr unsigned int JJCGFKPGNFE_TypeDefinitionIndex = 45150;

	class JJCGFKPGNFE : public ::System::Object
	{
	public:
		::System::Object* OJAHLJGABMJ; // 0x10
		::System::Reflection::PropertyInfo* MELADKPKCEE; // 0x18
		::System::EventHandler* _ValueChanged; // 0x20
		::System::Void _ctor(::System::Object* a1, ::System::Reflection::PropertyInfo* a2, ::UnityEngine::Events::UnityEventBase* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Reflection::PropertyInfo*, ::UnityEngine::Events::UnityEventBase*))((::PBYTE)hIl2Cpp + JJCGFKPGNFE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Type* JBIOGKPHKKC()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJCGFKPGNFE_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::TypeCode AGNAJNLKFFH()
		{
			return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + JJCGFKPGNFE_AGNAJNLKFFH_OFFSET))(this);
		}

		::System::Object* DJMOOLAIGEO()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJCGFKPGNFE_DJMOOLAIGEO_OFFSET))(this);
		}

		::System::Void FHAPPCADGCE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JJCGFKPGNFE_FHAPPCADGCE_OFFSET))(this, a1);
		}

		::System::Object* MNGGAOFNGIP()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJCGFKPGNFE_MNGGAOFNGIP_OFFSET))(this);
		}

		::System::Void add_ValueChanged(::System::EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + JJCGFKPGNFE_ADD_VALUECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_ValueChanged(::System::EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + JJCGFKPGNFE_REMOVE_VALUECHANGED_OFFSET))(this, a1);
		}

		::System::Void MJBOHMOEPAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJCGFKPGNFE_MJBOHMOEPAO_OFFSET))(this);
		}

		::System::Void add__ValueChanged(::System::EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + JJCGFKPGNFE_ADD__VALUECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove__ValueChanged(::System::EventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + JJCGFKPGNFE_REMOVE__VALUECHANGED_OFFSET))(this, a1);
		}

		::System::Void __ctor_b__0_0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JJCGFKPGNFE___CTOR_B__0_0_OFFSET))(this, a1);
		}

		::System::Void __ctor_b__0_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JJCGFKPGNFE___CTOR_B__0_1_OFFSET))(this, a1);
		}

	};
