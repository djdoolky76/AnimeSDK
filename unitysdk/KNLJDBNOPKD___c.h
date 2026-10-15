#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNLJDBNOPKD;
namespace System { class Object; }

#define KNLJDBNOPKD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8A6CE0)
#define KNLJDBNOPKD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A6D20)
#define KNLJDBNOPKD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8A6D30)

inline static constexpr unsigned int KNLJDBNOPKD___c_TypeDefinitionIndex = 28458;

	class KNLJDBNOPKD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x248E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNLJDBNOPKD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLJDBNOPKD___C_CTOR_OFFSET))(this);
		}

		::KNLJDBNOPKD* __cctor_b__23_0()
		{
			return ((::KNLJDBNOPKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLJDBNOPKD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
