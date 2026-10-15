#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBOBABKFCHI;
namespace System { class Object; }

#define OBOBABKFCHI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBB4B80)
#define OBOBABKFCHI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB4BC0)
#define OBOBABKFCHI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EBB4BD0)

inline static constexpr unsigned int OBOBABKFCHI___c_TypeDefinitionIndex = 34184;

	class OBOBABKFCHI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11060);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBOBABKFCHI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOBABKFCHI___C_CTOR_OFFSET))(this);
		}

		::OBOBABKFCHI* __cctor_b__28_0()
		{
			return ((::OBOBABKFCHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOBABKFCHI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
