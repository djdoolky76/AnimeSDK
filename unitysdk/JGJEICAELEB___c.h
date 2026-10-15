#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGJEICAELEB;
namespace System { class Object; }

#define JGJEICAELEB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E70D4D0)
#define JGJEICAELEB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E70D500)
#define JGJEICAELEB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E70D510)

inline static constexpr unsigned int JGJEICAELEB___c_TypeDefinitionIndex = 33713;

	class JGJEICAELEB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E650);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGJEICAELEB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJEICAELEB___C_CTOR_OFFSET))(this);
		}

		::JGJEICAELEB* __cctor_b__28_0()
		{
			return ((::JGJEICAELEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJEICAELEB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
