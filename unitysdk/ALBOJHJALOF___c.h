#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALBOJHJALOF;
namespace System { class Object; }

#define ALBOJHJALOF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20644EF0)
#define ALBOJHJALOF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20644F30)
#define ALBOJHJALOF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x20644F40)

inline static constexpr unsigned int ALBOJHJALOF___c_TypeDefinitionIndex = 31833;

	class ALBOJHJALOF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35390);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALBOJHJALOF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBOJHJALOF___C_CTOR_OFFSET))(this);
		}

		::ALBOJHJALOF* __cctor_b__33_0()
		{
			return ((::ALBOJHJALOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBOJHJALOF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
