#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCGHBANLLOH;
namespace System { class Object; }

#define OCGHBANLLOH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDE6440)
#define OCGHBANLLOH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDE6470)
#define OCGHBANLLOH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DDE6480)

inline static constexpr unsigned int OCGHBANLLOH___c_TypeDefinitionIndex = 27468;

	class OCGHBANLLOH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x114D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCGHBANLLOH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGHBANLLOH___C_CTOR_OFFSET))(this);
		}

		::OCGHBANLLOH* __cctor_b__28_0()
		{
			return ((::OCGHBANLLOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGHBANLLOH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
