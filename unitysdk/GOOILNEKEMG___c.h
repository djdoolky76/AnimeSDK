#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOOILNEKEMG;
namespace System { class Object; }

#define GOOILNEKEMG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F807100)
#define GOOILNEKEMG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F807140)
#define GOOILNEKEMG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F807150)

inline static constexpr unsigned int GOOILNEKEMG___c_TypeDefinitionIndex = 34654;

	class GOOILNEKEMG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D4E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOILNEKEMG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOILNEKEMG___C_CTOR_OFFSET))(this);
		}

		::GOOILNEKEMG* __cctor_b__23_0()
		{
			return ((::GOOILNEKEMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOILNEKEMG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
