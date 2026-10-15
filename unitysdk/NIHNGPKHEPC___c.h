#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NIHNGPKHEPC;
namespace System { class Object; }

#define NIHNGPKHEPC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB32F20)
#define NIHNGPKHEPC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB32F60)
#define NIHNGPKHEPC___C___CCTOR_B__123_0_OFFSET UNITYSDK_OFFSET(0x1EB32F70)

inline static constexpr unsigned int NIHNGPKHEPC___c_TypeDefinitionIndex = 29134;

	class NIHNGPKHEPC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64050);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIHNGPKHEPC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHNGPKHEPC___C_CTOR_OFFSET))(this);
		}

		::NIHNGPKHEPC* __cctor_b__123_0()
		{
			return ((::NIHNGPKHEPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIHNGPKHEPC___C___CCTOR_B__123_0_OFFSET))(this);
		}

	};
