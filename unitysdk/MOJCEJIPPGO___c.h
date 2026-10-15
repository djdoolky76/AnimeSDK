#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOJCEJIPPGO;
namespace System { class Object; }

#define MOJCEJIPPGO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA7FD70)
#define MOJCEJIPPGO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA7FDB0)
#define MOJCEJIPPGO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EA7FDC0)

inline static constexpr unsigned int MOJCEJIPPGO___c_TypeDefinitionIndex = 31685;

	class MOJCEJIPPGO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5AD10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOJCEJIPPGO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJCEJIPPGO___C_CTOR_OFFSET))(this);
		}

		::MOJCEJIPPGO* __cctor_b__18_0()
		{
			return ((::MOJCEJIPPGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJCEJIPPGO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
