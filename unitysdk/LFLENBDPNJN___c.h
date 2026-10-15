#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFLENBDPNJN;
namespace System { class Object; }

#define LFLENBDPNJN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E944C00)
#define LFLENBDPNJN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E944C40)
#define LFLENBDPNJN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E944C50)

inline static constexpr unsigned int LFLENBDPNJN___c_TypeDefinitionIndex = 25642;

	class LFLENBDPNJN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C480);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFLENBDPNJN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLENBDPNJN___C_CTOR_OFFSET))(this);
		}

		::LFLENBDPNJN* __cctor_b__28_0()
		{
			return ((::LFLENBDPNJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLENBDPNJN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
