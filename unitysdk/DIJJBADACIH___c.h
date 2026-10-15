#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIJJBADACIH;
namespace System { class Object; }

#define DIJJBADACIH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1C1310)
#define DIJJBADACIH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C1340)
#define DIJJBADACIH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1C1350)

	class DIJJBADACIH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x367B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIJJBADACIH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJJBADACIH___C_CTOR_OFFSET))(this);
		}

		::DIJJBADACIH* __cctor_b__28_0()
		{
			return ((::DIJJBADACIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJJBADACIH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
