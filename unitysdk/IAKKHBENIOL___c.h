#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAKKHBENIOL;
namespace System { class Object; }

#define IAKKHBENIOL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9055C0)
#define IAKKHBENIOL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F905600)
#define IAKKHBENIOL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F905610)

inline static constexpr unsigned int IAKKHBENIOL___c_TypeDefinitionIndex = 27161;

	class IAKKHBENIOL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46590);
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
