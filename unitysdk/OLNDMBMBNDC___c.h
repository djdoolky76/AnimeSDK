#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OLNDMBMBNDC;
namespace System { class Object; }

#define OLNDMBMBNDC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE7D1E0)
#define OLNDMBMBNDC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE7D220)
#define OLNDMBMBNDC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DE7D230)

inline static constexpr unsigned int OLNDMBMBNDC___c_TypeDefinitionIndex = 30325;

	class OLNDMBMBNDC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x211A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLNDMBMBNDC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNDMBMBNDC___C_CTOR_OFFSET))(this);
		}

		::OLNDMBMBNDC* __cctor_b__28_0()
		{
			return ((::OLNDMBMBNDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNDMBMBNDC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
