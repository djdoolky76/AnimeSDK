#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJAKBKOEEPC;
namespace System { class Object; }

#define EJAKBKOEEPC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E281FB0)
#define EJAKBKOEEPC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E281FF0)
#define EJAKBKOEEPC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E282000)

inline static constexpr unsigned int EJAKBKOEEPC___c_TypeDefinitionIndex = 28876;

	class EJAKBKOEEPC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B610);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJAKBKOEEPC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJAKBKOEEPC___C_CTOR_OFFSET))(this);
		}

		::EJAKBKOEEPC* __cctor_b__23_0()
		{
			return ((::EJAKBKOEEPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJAKBKOEEPC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
