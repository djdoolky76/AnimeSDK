#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FIMBJCONBAE;
namespace System { class Object; }

#define FIMBJCONBAE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E39AFE0)
#define FIMBJCONBAE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E39B020)
#define FIMBJCONBAE___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E39B030)

inline static constexpr unsigned int FIMBJCONBAE___c_TypeDefinitionIndex = 25599;

	class FIMBJCONBAE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIMBJCONBAE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMBJCONBAE___C_CTOR_OFFSET))(this);
		}

		::FIMBJCONBAE* __cctor_b__53_0()
		{
			return ((::FIMBJCONBAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMBJCONBAE___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
