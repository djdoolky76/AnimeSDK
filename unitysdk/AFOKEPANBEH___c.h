#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFOKEPANBEH;
namespace System { class Object; }

#define AFOKEPANBEH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E11C9E0)
#define AFOKEPANBEH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E11CA20)
#define AFOKEPANBEH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E11CA30)

inline static constexpr unsigned int AFOKEPANBEH___c_TypeDefinitionIndex = 28047;

	class AFOKEPANBEH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2F060);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFOKEPANBEH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOKEPANBEH___C_CTOR_OFFSET))(this);
		}

		::AFOKEPANBEH* __cctor_b__28_0()
		{
			return ((::AFOKEPANBEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOKEPANBEH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
