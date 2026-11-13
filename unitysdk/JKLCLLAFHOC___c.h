#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JKLCLLAFHOC;
namespace System { class Object; }

#define JKLCLLAFHOC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE68A40)
#define JKLCLLAFHOC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE68A80)
#define JKLCLLAFHOC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FE68A90)

inline static constexpr unsigned int JKLCLLAFHOC___c_TypeDefinitionIndex = 27820;

	class JKLCLLAFHOC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x62270);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKLCLLAFHOC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLCLLAFHOC___C_CTOR_OFFSET))(this);
		}

		::JKLCLLAFHOC* __cctor_b__28_0()
		{
			return ((::JKLCLLAFHOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLCLLAFHOC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
