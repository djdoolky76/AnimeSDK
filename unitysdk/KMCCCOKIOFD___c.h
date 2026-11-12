#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMCCCOKIOFD;
namespace System { class Object; }

#define KMCCCOKIOFD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBAFA00)
#define KMCCCOKIOFD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBAFA40)
#define KMCCCOKIOFD___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1FBAFA50)

inline static constexpr unsigned int KMCCCOKIOFD___c_TypeDefinitionIndex = 35927;

	class KMCCCOKIOFD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A350);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMCCCOKIOFD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCCCOKIOFD___C_CTOR_OFFSET))(this);
		}

		::KMCCCOKIOFD* __cctor_b__43_0()
		{
			return ((::KMCCCOKIOFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCCCOKIOFD___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
