#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONBLLGHELOB;
namespace System { class Object; }

#define ONBLLGHELOB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE94D40)
#define ONBLLGHELOB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE94D70)
#define ONBLLGHELOB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DE94D80)

inline static constexpr unsigned int ONBLLGHELOB___c_TypeDefinitionIndex = 29766;

	class ONBLLGHELOB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24050);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONBLLGHELOB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONBLLGHELOB___C_CTOR_OFFSET))(this);
		}

		::ONBLLGHELOB* __cctor_b__28_0()
		{
			return ((::ONBLLGHELOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONBLLGHELOB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
