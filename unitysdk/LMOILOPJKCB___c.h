#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMOILOPJKCB;
namespace System { class Object; }

#define LMOILOPJKCB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E980420)
#define LMOILOPJKCB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E980460)
#define LMOILOPJKCB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E980470)

inline static constexpr unsigned int LMOILOPJKCB___c_TypeDefinitionIndex = 31559;

	class LMOILOPJKCB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3EF60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMOILOPJKCB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOILOPJKCB___C_CTOR_OFFSET))(this);
		}

		::LMOILOPJKCB* __cctor_b__23_0()
		{
			return ((::LMOILOPJKCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOILOPJKCB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
