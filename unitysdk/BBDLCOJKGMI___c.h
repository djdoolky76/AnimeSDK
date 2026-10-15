#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBDLCOJKGMI;
namespace System { class Object; }

#define BBDLCOJKGMI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7C0BA0)
#define BBDLCOJKGMI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C0BE0)
#define BBDLCOJKGMI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7C0BF0)

inline static constexpr unsigned int BBDLCOJKGMI___c_TypeDefinitionIndex = 27562;

	class BBDLCOJKGMI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x471F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBDLCOJKGMI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDLCOJKGMI___C_CTOR_OFFSET))(this);
		}

		::BBDLCOJKGMI* __cctor_b__23_0()
		{
			return ((::BBDLCOJKGMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDLCOJKGMI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
