#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBFIBDGJLHE_HBDKCJIBNMJ_EOperation.h"
#include "unitysdk/System/Object.h"
class HBFIBDGJLHE;
class HBFIBDGJLHE_CLJBENNGCID;
namespace System { class Object; }

#define HBFIBDGJLHE_HBDKCJIBNMJ_BAAKENCNCDN_OFFSET UNITYSDK_OFFSET(0x1C1636E0)
#define HBFIBDGJLHE_HBDKCJIBNMJ_CGAFPILEHPM_OFFSET UNITYSDK_OFFSET(0x1C16BDE0)
#define HBFIBDGJLHE_HBDKCJIBNMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C160A80)
#define HBFIBDGJLHE_HBDKCJIBNMJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C1610E0)
#define HBFIBDGJLHE_HBDKCJIBNMJ_GET_PROXY_OFFSET UNITYSDK_OFFSET(0x1C16BD50)
#define HBFIBDGJLHE_HBDKCJIBNMJ_OLIJLBMJFBA_OFFSET UNITYSDK_OFFSET(0x1C16BD70)
#define HBFIBDGJLHE_HBDKCJIBNMJ_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1C163A70)
#define HBFIBDGJLHE_HBDKCJIBNMJ_SET_PROXY_OFFSET UNITYSDK_OFFSET(0x1C16BD60)

inline static constexpr unsigned int HBFIBDGJLHE_HBDKCJIBNMJ_TypeDefinitionIndex = 85057;

	class HBFIBDGJLHE_HBDKCJIBNMJ : public ::System::Object
	{
	public:
		::HBFIBDGJLHE_CLJBENNGCID* LFLCIBMBAGG; // 0x10
		::HBFIBDGJLHE* _Proxy_k__BackingField; // 0x18
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
