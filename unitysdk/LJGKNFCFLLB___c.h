#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJGKNFCFLLB;
namespace System { class Object; }

#define LJGKNFCFLLB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9536E0)
#define LJGKNFCFLLB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E953720)
#define LJGKNFCFLLB___C___CCTOR_B__72_0_OFFSET UNITYSDK_OFFSET(0x1E953730)

inline static constexpr unsigned int LJGKNFCFLLB___c_TypeDefinitionIndex = 34412;

	class LJGKNFCFLLB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x387D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJGKNFCFLLB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGKNFCFLLB___C_CTOR_OFFSET))(this);
		}

		::LJGKNFCFLLB* __cctor_b__72_0()
		{
			return ((::LJGKNFCFLLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGKNFCFLLB___C___CCTOR_B__72_0_OFFSET))(this);
		}

	};
