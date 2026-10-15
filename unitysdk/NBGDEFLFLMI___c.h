#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBGDEFLFLMI;
namespace System { class Object; }

#define NBGDEFLFLMI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAD0DD0)
#define NBGDEFLFLMI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD0E10)
#define NBGDEFLFLMI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAD0E20)

inline static constexpr unsigned int NBGDEFLFLMI___c_TypeDefinitionIndex = 29216;

	class NBGDEFLFLMI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CEE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBGDEFLFLMI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGDEFLFLMI___C_CTOR_OFFSET))(this);
		}

		::NBGDEFLFLMI* __cctor_b__28_0()
		{
			return ((::NBGDEFLFLMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBGDEFLFLMI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
