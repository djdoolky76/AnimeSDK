#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIBFIDOEPAP;
namespace System { class Object; }

#define PIBFIDOEPAP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF41430)
#define PIBFIDOEPAP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF41470)
#define PIBFIDOEPAP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF41480)

inline static constexpr unsigned int PIBFIDOEPAP___c_TypeDefinitionIndex = 28872;

	class PIBFIDOEPAP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x408A0);
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
