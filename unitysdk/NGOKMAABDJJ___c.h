#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGOKMAABDJJ;
namespace System { class Object; }

#define NGOKMAABDJJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE5A870)
#define NGOKMAABDJJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE5A8B0)
#define NGOKMAABDJJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FE5A8C0)

inline static constexpr unsigned int NGOKMAABDJJ___c_TypeDefinitionIndex = 34278;

	class NGOKMAABDJJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6A8D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGOKMAABDJJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOKMAABDJJ___C_CTOR_OFFSET))(this);
		}

		::NGOKMAABDJJ* __cctor_b__23_0()
		{
			return ((::NGOKMAABDJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOKMAABDJJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
