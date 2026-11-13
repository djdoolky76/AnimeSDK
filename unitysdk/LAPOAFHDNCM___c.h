#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAPOAFHDNCM;
namespace System { class Object; }

#define LAPOAFHDNCM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20391760)
#define LAPOAFHDNCM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x203917A0)
#define LAPOAFHDNCM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x203917B0)

inline static constexpr unsigned int LAPOAFHDNCM___c_TypeDefinitionIndex = 30256;

	class LAPOAFHDNCM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x286F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAPOAFHDNCM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPOAFHDNCM___C_CTOR_OFFSET))(this);
		}

		::LAPOAFHDNCM* __cctor_b__23_0()
		{
			return ((::LAPOAFHDNCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPOAFHDNCM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
