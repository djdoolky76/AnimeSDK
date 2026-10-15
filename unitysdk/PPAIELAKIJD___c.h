#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPAIELAKIJD;
namespace System { class Object; }

#define PPAIELAKIJD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFD3BB0)
#define PPAIELAKIJD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFD3BF0)
#define PPAIELAKIJD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DFD3C00)

inline static constexpr unsigned int PPAIELAKIJD___c_TypeDefinitionIndex = 31776;

	class PPAIELAKIJD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43640);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPAIELAKIJD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPAIELAKIJD___C_CTOR_OFFSET))(this);
		}

		::PPAIELAKIJD* __cctor_b__28_0()
		{
			return ((::PPAIELAKIJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPAIELAKIJD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
