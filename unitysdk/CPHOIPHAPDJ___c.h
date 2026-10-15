#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPHOIPHAPDJ;
namespace System { class Object; }

#define CPHOIPHAPDJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E13F5B0)
#define CPHOIPHAPDJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E13F5F0)
#define CPHOIPHAPDJ___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E13F600)

inline static constexpr unsigned int CPHOIPHAPDJ___c_TypeDefinitionIndex = 31750;

	class CPHOIPHAPDJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22880);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPHOIPHAPDJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHOIPHAPDJ___C_CTOR_OFFSET))(this);
		}

		::CPHOIPHAPDJ* __cctor_b__38_0()
		{
			return ((::CPHOIPHAPDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHOIPHAPDJ___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
