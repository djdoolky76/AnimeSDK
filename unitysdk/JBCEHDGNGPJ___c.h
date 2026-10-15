#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBCEHDGNGPJ;
namespace System { class Object; }

#define JBCEHDGNGPJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6C50D0)
#define JBCEHDGNGPJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C5110)
#define JBCEHDGNGPJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E6C5120)

inline static constexpr unsigned int JBCEHDGNGPJ___c_TypeDefinitionIndex = 26512;

	class JBCEHDGNGPJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57B20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBCEHDGNGPJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBCEHDGNGPJ___C_CTOR_OFFSET))(this);
		}

		::JBCEHDGNGPJ* __cctor_b__28_0()
		{
			return ((::JBCEHDGNGPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBCEHDGNGPJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
