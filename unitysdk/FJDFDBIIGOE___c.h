#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJDFDBIIGOE;
namespace System { class Object; }

#define FJDFDBIIGOE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E39F870)
#define FJDFDBIIGOE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E39F8B0)
#define FJDFDBIIGOE___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E39F8C0)

inline static constexpr unsigned int FJDFDBIIGOE___c_TypeDefinitionIndex = 30369;

	class FJDFDBIIGOE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60610);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJDFDBIIGOE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDFDBIIGOE___C_CTOR_OFFSET))(this);
		}

		::FJDFDBIIGOE* __cctor_b__48_0()
		{
			return ((::FJDFDBIIGOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDFDBIIGOE___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
