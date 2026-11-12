#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMKMOIGANHN;
namespace System { class Object; }

#define CMKMOIGANHN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3FC6D0)
#define CMKMOIGANHN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3FC700)
#define CMKMOIGANHN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F3FC710)

inline static constexpr unsigned int CMKMOIGANHN___c_TypeDefinitionIndex = 28472;

	class CMKMOIGANHN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19C40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMKMOIGANHN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMKMOIGANHN___C_CTOR_OFFSET))(this);
		}

		::CMKMOIGANHN* __cctor_b__28_0()
		{
			return ((::CMKMOIGANHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMKMOIGANHN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
