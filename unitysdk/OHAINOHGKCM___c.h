#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHAINOHGKCM;
namespace System { class Object; }

#define OHAINOHGKCM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCDC3A0)
#define OHAINOHGKCM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCDC3E0)
#define OHAINOHGKCM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FCDC3F0)

inline static constexpr unsigned int OHAINOHGKCM___c_TypeDefinitionIndex = 30270;

	class OHAINOHGKCM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16770);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHAINOHGKCM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHAINOHGKCM___C_CTOR_OFFSET))(this);
		}

		::OHAINOHGKCM* __cctor_b__23_0()
		{
			return ((::OHAINOHGKCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHAINOHGKCM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
