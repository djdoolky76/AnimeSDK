#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBFIBDGJLHE_HBDKCJIBNMJ_EOperation.h"
#include "unitysdk/System/Object.h"
class HBFIBDGJLHE;
class HBFIBDGJLHE_CLJBENNGCID;
namespace System { class Object; }

#define HBFIBDGJLHE_HBDKCJIBNMJ_BAAKENCNCDN_OFFSET UNITYSDK_OFFSET(0x16B39C80)
#define HBFIBDGJLHE_HBDKCJIBNMJ_CGAFPILEHPM_OFFSET UNITYSDK_OFFSET(0x16B42360)
#define HBFIBDGJLHE_HBDKCJIBNMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16B36FD0)
#define HBFIBDGJLHE_HBDKCJIBNMJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16B37640)
#define HBFIBDGJLHE_HBDKCJIBNMJ_GET_PROXY_OFFSET UNITYSDK_OFFSET(0x16B422D0)
#define HBFIBDGJLHE_HBDKCJIBNMJ_OLIJLBMJFBA_OFFSET UNITYSDK_OFFSET(0x16B422F0)
#define HBFIBDGJLHE_HBDKCJIBNMJ_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x16B3A010)
#define HBFIBDGJLHE_HBDKCJIBNMJ_SET_PROXY_OFFSET UNITYSDK_OFFSET(0x16B422E0)

inline static constexpr unsigned int HBFIBDGJLHE_HBDKCJIBNMJ_TypeDefinitionIndex = 85058;

	class HBFIBDGJLHE_HBDKCJIBNMJ : public ::System::Object
	{
	public:
		::HBFIBDGJLHE* _Proxy_k__BackingField; // 0x10
		::HBFIBDGJLHE_CLJBENNGCID* LFLCIBMBAGG; // 0x18
		::Il2CppArray<::System::Object*>* PGFIFEIKHIL; // 0x20
		::HBFIBDGJLHE_HBDKCJIBNMJ_EOperation FPAHLFBBNMK; // 0x28
		::System::Void _ctor(::HBFIBDGJLHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_HBDKCJIBNMJ_CTOR_OFFSET))(this, a1);
		}

		::HBFIBDGJLHE* get_Proxy()
		{
			return ((::HBFIBDGJLHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_HBDKCJIBNMJ_GET_PROXY_OFFSET))(this);
		}

		::System::Void set_Proxy(::HBFIBDGJLHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_HBDKCJIBNMJ_SET_PROXY_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* OLIJLBMJFBA()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_HBDKCJIBNMJ_OLIJLBMJFBA_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_HBDKCJIBNMJ_DISPOSE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_HBDKCJIBNMJ_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void BAAKENCNCDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_HBDKCJIBNMJ_BAAKENCNCDN_OFFSET))(this);
		}

		::System::Void CGAFPILEHPM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_HBDKCJIBNMJ_CGAFPILEHPM_OFFSET))(this, a1);
		}

	};
