#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAKKHBENIOL;
namespace System { class Object; }

#define IAKKHBENIOL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6084D0)
#define IAKKHBENIOL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E608510)
#define IAKKHBENIOL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E608520)

inline static constexpr unsigned int IAKKHBENIOL___c_TypeDefinitionIndex = 26630;

	class IAKKHBENIOL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3FA50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAKKHBENIOL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKKHBENIOL___C_CTOR_OFFSET))(this);
		}

		::IAKKHBENIOL* __cctor_b__23_0()
		{
			return ((::IAKKHBENIOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKKHBENIOL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
