#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFCJIPKABEF;
namespace System { class Object; }

#define GFCJIPKABEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20074DE0)
#define GFCJIPKABEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20074E20)
#define GFCJIPKABEF___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x20074E30)

inline static constexpr unsigned int GFCJIPKABEF___c_TypeDefinitionIndex = 35601;

	class GFCJIPKABEF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xA310);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFCJIPKABEF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCJIPKABEF___C_CTOR_OFFSET))(this);
		}

		::GFCJIPKABEF* __cctor_b__43_0()
		{
			return ((::GFCJIPKABEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCJIPKABEF___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
