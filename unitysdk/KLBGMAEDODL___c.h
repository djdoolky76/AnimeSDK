#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLBGMAEDODL;
namespace System { class Object; }

#define KLBGMAEDODL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E855E60)
#define KLBGMAEDODL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E855EA0)
#define KLBGMAEDODL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E855EB0)

inline static constexpr unsigned int KLBGMAEDODL___c_TypeDefinitionIndex = 33574;

	class KLBGMAEDODL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLBGMAEDODL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBGMAEDODL___C_CTOR_OFFSET))(this);
		}

		::KLBGMAEDODL* __cctor_b__23_0()
		{
			return ((::KLBGMAEDODL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBGMAEDODL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
