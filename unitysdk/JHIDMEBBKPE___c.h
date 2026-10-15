#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JHIDMEBBKPE;
namespace System { class Object; }

#define JHIDMEBBKPE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E747600)
#define JHIDMEBBKPE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E747640)
#define JHIDMEBBKPE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E747650)

inline static constexpr unsigned int JHIDMEBBKPE___c_TypeDefinitionIndex = 31210;

	class JHIDMEBBKPE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x612A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHIDMEBBKPE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDMEBBKPE___C_CTOR_OFFSET))(this);
		}

		::JHIDMEBBKPE* __cctor_b__23_0()
		{
			return ((::JHIDMEBBKPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDMEBBKPE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
