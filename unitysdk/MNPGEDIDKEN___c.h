#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNPGEDIDKEN;
namespace System { class Object; }

#define MNPGEDIDKEN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDDE6B0)
#define MNPGEDIDKEN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDDE6F0)
#define MNPGEDIDKEN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FDDE700)

inline static constexpr unsigned int MNPGEDIDKEN___c_TypeDefinitionIndex = 26756;

	class MNPGEDIDKEN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x62380);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNPGEDIDKEN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNPGEDIDKEN___C_CTOR_OFFSET))(this);
		}

		::MNPGEDIDKEN* __cctor_b__23_0()
		{
			return ((::MNPGEDIDKEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNPGEDIDKEN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
