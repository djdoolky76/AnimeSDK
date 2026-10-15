#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNJCFFIDJFO;
namespace System { class Object; }

#define MNJCFFIDJFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA6DE90)
#define MNJCFFIDJFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA6DED0)
#define MNJCFFIDJFO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA6DEE0)

inline static constexpr unsigned int MNJCFFIDJFO___c_TypeDefinitionIndex = 29650;

	class MNJCFFIDJFO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x599A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNJCFFIDJFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJCFFIDJFO___C_CTOR_OFFSET))(this);
		}

		::MNJCFFIDJFO* __cctor_b__28_0()
		{
			return ((::MNJCFFIDJFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJCFFIDJFO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
