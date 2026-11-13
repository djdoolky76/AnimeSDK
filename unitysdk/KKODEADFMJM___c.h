#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKODEADFMJM;
namespace System { class Object; }

#define KKODEADFMJM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFED9C0)
#define KKODEADFMJM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FFED9F0)
#define KKODEADFMJM___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1FFEDA00)

inline static constexpr unsigned int KKODEADFMJM___c_TypeDefinitionIndex = 34868;

	class KKODEADFMJM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17E00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKODEADFMJM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKODEADFMJM___C_CTOR_OFFSET))(this);
		}

		::KKODEADFMJM* __cctor_b__43_0()
		{
			return ((::KKODEADFMJM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKODEADFMJM___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
