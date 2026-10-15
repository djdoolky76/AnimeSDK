#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACABKOGJAEG;
namespace System { class Object; }

#define ACABKOGJAEG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDA94E0)
#define ACABKOGJAEG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDA9520)
#define ACABKOGJAEG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DDA9530)

inline static constexpr unsigned int ACABKOGJAEG___c_TypeDefinitionIndex = 26067;

	class ACABKOGJAEG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31E70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACABKOGJAEG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACABKOGJAEG___C_CTOR_OFFSET))(this);
		}

		::ACABKOGJAEG* __cctor_b__28_0()
		{
			return ((::ACABKOGJAEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACABKOGJAEG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
