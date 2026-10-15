#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENGHACADBKI;
namespace System { class Object; }

#define ENGHACADBKI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2C0BF0)
#define ENGHACADBKI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2C0C30)
#define ENGHACADBKI___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E2C0C40)

inline static constexpr unsigned int ENGHACADBKI___c_TypeDefinitionIndex = 34981;

	class ENGHACADBKI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44CB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENGHACADBKI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGHACADBKI___C_CTOR_OFFSET))(this);
		}

		::ENGHACADBKI* __cctor_b__43_0()
		{
			return ((::ENGHACADBKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGHACADBKI___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
