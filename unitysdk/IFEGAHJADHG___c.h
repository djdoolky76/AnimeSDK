#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFEGAHJADHG;
namespace System { class Object; }

#define IFEGAHJADHG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E645D50)
#define IFEGAHJADHG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E645D90)
#define IFEGAHJADHG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E645DA0)

inline static constexpr unsigned int IFEGAHJADHG___c_TypeDefinitionIndex = 27764;

	class IFEGAHJADHG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A2E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFEGAHJADHG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEGAHJADHG___C_CTOR_OFFSET))(this);
		}

		::IFEGAHJADHG* __cctor_b__23_0()
		{
			return ((::IFEGAHJADHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEGAHJADHG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
