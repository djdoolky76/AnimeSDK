#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBNCBEPCAPF;
namespace System { class Object; }

#define IBNCBEPCAPF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20125690)
#define IBNCBEPCAPF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x201256D0)
#define IBNCBEPCAPF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x201256E0)

inline static constexpr unsigned int IBNCBEPCAPF___c_TypeDefinitionIndex = 35810;

	class IBNCBEPCAPF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x471E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBNCBEPCAPF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNCBEPCAPF___C_CTOR_OFFSET))(this);
		}

		::IBNCBEPCAPF* __cctor_b__18_0()
		{
			return ((::IBNCBEPCAPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNCBEPCAPF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
