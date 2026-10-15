#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGINHECHMPM;
namespace System { class Object; }

#define PGINHECHMPM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF04D10)
#define PGINHECHMPM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF04D50)
#define PGINHECHMPM___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DF04D60)

inline static constexpr unsigned int PGINHECHMPM___c_TypeDefinitionIndex = 33334;

	class PGINHECHMPM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33010);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGINHECHMPM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGINHECHMPM___C_CTOR_OFFSET))(this);
		}

		::PGINHECHMPM* __cctor_b__18_0()
		{
			return ((::PGINHECHMPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGINHECHMPM___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
