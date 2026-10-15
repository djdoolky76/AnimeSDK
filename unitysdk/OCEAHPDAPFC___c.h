#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCEAHPDAPFC;
namespace System { class Object; }

#define OCEAHPDAPFC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDE4A60)
#define OCEAHPDAPFC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDE4A90)
#define OCEAHPDAPFC___C___CCTOR_B__76_0_OFFSET UNITYSDK_OFFSET(0x1DDE4AA0)

inline static constexpr unsigned int OCEAHPDAPFC___c_TypeDefinitionIndex = 30305;

	class OCEAHPDAPFC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x111E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCEAHPDAPFC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEAHPDAPFC___C_CTOR_OFFSET))(this);
		}

		::OCEAHPDAPFC* __cctor_b__76_0()
		{
			return ((::OCEAHPDAPFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEAHPDAPFC___C___CCTOR_B__76_0_OFFSET))(this);
		}

	};
