#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDAHFLMBAAB;
namespace System { class Object; }

#define HDAHFLMBAAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E518F60)
#define HDAHFLMBAAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E518FA0)
#define HDAHFLMBAAB___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E518FB0)

inline static constexpr unsigned int HDAHFLMBAAB___c_TypeDefinitionIndex = 30828;

	class HDAHFLMBAAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B350);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDAHFLMBAAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDAHFLMBAAB___C_CTOR_OFFSET))(this);
		}

		::HDAHFLMBAAB* __cctor_b__38_0()
		{
			return ((::HDAHFLMBAAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDAHFLMBAAB___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
