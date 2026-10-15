#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIIPJFDNPAH;
namespace System { class Object; }

#define OIIPJFDNPAH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE43300)
#define OIIPJFDNPAH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE43330)
#define OIIPJFDNPAH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DE43340)

inline static constexpr unsigned int OIIPJFDNPAH___c_TypeDefinitionIndex = 27842;

	class OIIPJFDNPAH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1AB10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIIPJFDNPAH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIPJFDNPAH___C_CTOR_OFFSET))(this);
		}

		::OIIPJFDNPAH* __cctor_b__33_0()
		{
			return ((::OIIPJFDNPAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIIPJFDNPAH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
