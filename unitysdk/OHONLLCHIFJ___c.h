#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHONLLCHIFJ;
namespace System { class Object; }

#define OHONLLCHIFJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCE8CA0)
#define OHONLLCHIFJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCE8CE0)
#define OHONLLCHIFJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FCE8CF0)

inline static constexpr unsigned int OHONLLCHIFJ___c_TypeDefinitionIndex = 34487;

	class OHONLLCHIFJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17C80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHONLLCHIFJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHONLLCHIFJ___C_CTOR_OFFSET))(this);
		}

		::OHONLLCHIFJ* __cctor_b__23_0()
		{
			return ((::OHONLLCHIFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHONLLCHIFJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
