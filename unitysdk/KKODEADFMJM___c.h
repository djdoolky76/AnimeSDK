#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKODEADFMJM;
namespace System { class Object; }

#define KKODEADFMJM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E84EBF0)
#define KKODEADFMJM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E84EC20)
#define KKODEADFMJM___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E84EC30)

inline static constexpr unsigned int KKODEADFMJM___c_TypeDefinitionIndex = 33953;

	class KKODEADFMJM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1C4D0);
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
