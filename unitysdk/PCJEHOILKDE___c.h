#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PCJEHOILKDE;
namespace System { class Object; }

#define PCJEHOILKDE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1D4510)
#define PCJEHOILKDE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1D4550)
#define PCJEHOILKDE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F1D4560)

inline static constexpr unsigned int PCJEHOILKDE___c_TypeDefinitionIndex = 27112;

	class PCJEHOILKDE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2DBE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCJEHOILKDE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCJEHOILKDE___C_CTOR_OFFSET))(this);
		}

		::PCJEHOILKDE* __cctor_b__23_0()
		{
			return ((::PCJEHOILKDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCJEHOILKDE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
