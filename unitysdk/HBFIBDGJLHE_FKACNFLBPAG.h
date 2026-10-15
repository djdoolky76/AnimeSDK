#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBFIBDGJLHE;
class HBFIBDGJLHE_OCJKOIKBNIN;
namespace System { class Object; }

#define HBFIBDGJLHE_FKACNFLBPAG_BMOAOMAMPDD_1_OFFSET UNITYSDK_OFFSET(0x15BFD650)
#define HBFIBDGJLHE_FKACNFLBPAG_BMOAOMAMPDD_OFFSET UNITYSDK_OFFSET(0x15BFD4C0)
#define HBFIBDGJLHE_FKACNFLBPAG_CTOR_OFFSET UNITYSDK_OFFSET(0x15BF3FD0)
#define HBFIBDGJLHE_FKACNFLBPAG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BF5E30)
#define HBFIBDGJLHE_FKACNFLBPAG_GET_INTERSECTIONS_OFFSET UNITYSDK_OFFSET(0x15BFD400)
#define HBFIBDGJLHE_FKACNFLBPAG_GET_ISCLOSEINTERSECTION_OFFSET UNITYSDK_OFFSET(0x15BFD420)
#define HBFIBDGJLHE_FKACNFLBPAG_GET_PROXY_OFFSET UNITYSDK_OFFSET(0x15BFD3E0)
#define HBFIBDGJLHE_FKACNFLBPAG_NAHACLBAHKB_OFFSET UNITYSDK_OFFSET(0x15BFD440)
#define HBFIBDGJLHE_FKACNFLBPAG_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15BF8510)
#define HBFIBDGJLHE_FKACNFLBPAG_SET_INTERSECTIONS_OFFSET UNITYSDK_OFFSET(0x15BFD410)
#define HBFIBDGJLHE_FKACNFLBPAG_SET_ISCLOSEINTERSECTION_OFFSET UNITYSDK_OFFSET(0x15BFD430)
#define HBFIBDGJLHE_FKACNFLBPAG_SET_PROXY_OFFSET UNITYSDK_OFFSET(0x15BFD3F0)

inline static constexpr unsigned int HBFIBDGJLHE_FKACNFLBPAG_TypeDefinitionIndex = 82178;

	class HBFIBDGJLHE_FKACNFLBPAG : public ::System::Object
	{
	public:
		::HBFIBDGJLHE* _Proxy_k__BackingField; // 0x10
		::Il2CppArray<::System::Object*>* _Intersections_k__BackingField; // 0x18
		::System::Boolean _IsCloseIntersection_k__BackingField; // 0x20
		::System::Void _ctor(::HBFIBDGJLHE* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_FKACNFLBPAG_CTOR_OFFSET))(this, a1, a2);
		}

		::HBFIBDGJLHE* get_Proxy()
		{
			return ((::HBFIBDGJLHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_FKACNFLBPAG_GET_PROXY_OFFSET))(this);
		}

		::System::Void set_Proxy(::HBFIBDGJLHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_FKACNFLBPAG_SET_PROXY_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* get_Intersections()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_FKACNFLBPAG_GET_INTERSECTIONS_OFFSET))(this);
		}

		::System::Void set_Intersections(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_FKACNFLBPAG_SET_INTERSECTIONS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCloseIntersection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_FKACNFLBPAG_GET_ISCLOSEINTERSECTION_OFFSET))(this);
		}

		::System::Void set_IsCloseIntersection(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_FKACNFLBPAG_SET_ISCLOSEINTERSECTION_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_FKACNFLBPAG_DISPOSE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_FKACNFLBPAG_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void NAHACLBAHKB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_FKACNFLBPAG_NAHACLBAHKB_OFFSET))(this, a1);
		}

		::System::Boolean BMOAOMAMPDD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_FKACNFLBPAG_BMOAOMAMPDD_OFFSET))(this);
		}

		static ::System::Boolean BMOAOMAMPDD_1(::HBFIBDGJLHE_OCJKOIKBNIN* a1)
		{
			return ((::System::Boolean(*)(::HBFIBDGJLHE_OCJKOIKBNIN*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_FKACNFLBPAG_BMOAOMAMPDD_1_OFFSET))(a1);
		}

	};
