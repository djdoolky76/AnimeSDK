#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMECHIFGKAD;
namespace System { class Object; }

#define NMECHIFGKAD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB43A20)
#define NMECHIFGKAD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB43A50)
#define NMECHIFGKAD___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1EB43A60)

inline static constexpr unsigned int NMECHIFGKAD___c_TypeDefinitionIndex = 29674;

	class NMECHIFGKAD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6A4C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMECHIFGKAD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMECHIFGKAD___C_CTOR_OFFSET))(this);
		}

		::NMECHIFGKAD* __cctor_b__43_0()
		{
			return ((::NMECHIFGKAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMECHIFGKAD___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
