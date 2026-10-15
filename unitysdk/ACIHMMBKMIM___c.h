#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACIHMMBKMIM;
namespace System { class Object; }

#define ACIHMMBKMIM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDB0BE0)
#define ACIHMMBKMIM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDB0C20)
#define ACIHMMBKMIM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DDB0C30)

inline static constexpr unsigned int ACIHMMBKMIM___c_TypeDefinitionIndex = 30473;

	class ACIHMMBKMIM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x328A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACIHMMBKMIM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACIHMMBKMIM___C_CTOR_OFFSET))(this);
		}

		::ACIHMMBKMIM* __cctor_b__28_0()
		{
			return ((::ACIHMMBKMIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACIHMMBKMIM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
