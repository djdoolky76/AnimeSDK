#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLBJPLGJBFF;
namespace System { class Object; }

#define JLBJPLGJBFF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAA3BB0)
#define JLBJPLGJBFF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAA3BF0)
#define JLBJPLGJBFF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FAA3C00)

inline static constexpr unsigned int JLBJPLGJBFF___c_TypeDefinitionIndex = 28338;

	class JLBJPLGJBFF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x522F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLBJPLGJBFF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBJPLGJBFF___C_CTOR_OFFSET))(this);
		}

		::JLBJPLGJBFF* __cctor_b__18_0()
		{
			return ((::JLBJPLGJBFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBJPLGJBFF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
