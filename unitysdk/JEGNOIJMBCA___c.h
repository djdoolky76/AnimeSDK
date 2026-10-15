#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEGNOIJMBCA;
namespace System { class Object; }

#define JEGNOIJMBCA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6ED170)
#define JEGNOIJMBCA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6ED1B0)
#define JEGNOIJMBCA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E6ED1C0)

inline static constexpr unsigned int JEGNOIJMBCA___c_TypeDefinitionIndex = 30319;

	class JEGNOIJMBCA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C600);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEGNOIJMBCA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGNOIJMBCA___C_CTOR_OFFSET))(this);
		}

		::JEGNOIJMBCA* __cctor_b__23_0()
		{
			return ((::JEGNOIJMBCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGNOIJMBCA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
