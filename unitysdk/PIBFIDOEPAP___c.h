#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIBFIDOEPAP;
namespace System { class Object; }

#define PIBFIDOEPAP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20262150)
#define PIBFIDOEPAP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20262190)
#define PIBFIDOEPAP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x202621A0)

inline static constexpr unsigned int PIBFIDOEPAP___c_TypeDefinitionIndex = 29462;

	class PIBFIDOEPAP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3AF50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIBFIDOEPAP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBFIDOEPAP___C_CTOR_OFFSET))(this);
		}

		::PIBFIDOEPAP* __cctor_b__28_0()
		{
			return ((::PIBFIDOEPAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBFIDOEPAP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
