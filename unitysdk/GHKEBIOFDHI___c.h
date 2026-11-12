#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHKEBIOFDHI;
namespace System { class Object; }

#define GHKEBIOFDHI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F77DA60)
#define GHKEBIOFDHI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F77DAA0)
#define GHKEBIOFDHI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F77DAB0)

inline static constexpr unsigned int GHKEBIOFDHI___c_TypeDefinitionIndex = 30040;

	class GHKEBIOFDHI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x102C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHKEBIOFDHI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKEBIOFDHI___C_CTOR_OFFSET))(this);
		}

		::GHKEBIOFDHI* __cctor_b__33_0()
		{
			return ((::GHKEBIOFDHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKEBIOFDHI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
