#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFLIEGJGOBO;
namespace System { class Object; }

#define KFLIEGJGOBO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E81EAA0)
#define KFLIEGJGOBO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E81EAE0)
#define KFLIEGJGOBO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E81EAF0)

inline static constexpr unsigned int KFLIEGJGOBO___c_TypeDefinitionIndex = 28097;

	class KFLIEGJGOBO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFLIEGJGOBO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLIEGJGOBO___C_CTOR_OFFSET))(this);
		}

		::KFLIEGJGOBO* __cctor_b__23_0()
		{
			return ((::KFLIEGJGOBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLIEGJGOBO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
