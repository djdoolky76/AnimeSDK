#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBGDEFLFLMI;
namespace System { class Object; }

#define NBGDEFLFLMI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE0D760)
#define NBGDEFLFLMI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE0D7A0)
#define NBGDEFLFLMI___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FE0D7B0)

inline static constexpr unsigned int NBGDEFLFLMI___c_TypeDefinitionIndex = 29864;

	class NBGDEFLFLMI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x67A00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBGDEFLFLMI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGDEFLFLMI___C_CTOR_OFFSET))(this);
		}

		::NBGDEFLFLMI* __cctor_b__38_0()
		{
			return ((::NBGDEFLFLMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGDEFLFLMI___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
