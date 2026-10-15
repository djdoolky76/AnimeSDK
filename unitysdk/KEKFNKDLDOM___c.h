#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KEKFNKDLDOM;
namespace System { class Object; }

#define KEKFNKDLDOM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E80E270)
#define KEKFNKDLDOM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E80E2B0)
#define KEKFNKDLDOM___C___CCTOR_B__32_0_OFFSET UNITYSDK_OFFSET(0x1E80E2C0)

inline static constexpr unsigned int KEKFNKDLDOM___c_TypeDefinitionIndex = 32166;

	class KEKFNKDLDOM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12BF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEKFNKDLDOM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEKFNKDLDOM___C_CTOR_OFFSET))(this);
		}

		::KEKFNKDLDOM* __cctor_b__32_0()
		{
			return ((::KEKFNKDLDOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEKFNKDLDOM___C___CCTOR_B__32_0_OFFSET))(this);
		}

	};
