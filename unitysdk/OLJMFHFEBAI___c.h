#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OLJMFHFEBAI;
namespace System { class Object; }

#define OLJMFHFEBAI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD66D00)
#define OLJMFHFEBAI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD66D40)
#define OLJMFHFEBAI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FD66D50)

inline static constexpr unsigned int OLJMFHFEBAI___c_TypeDefinitionIndex = 35911;

	class OLJMFHFEBAI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x20CE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLJMFHFEBAI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJMFHFEBAI___C_CTOR_OFFSET))(this);
		}

		::OLJMFHFEBAI* __cctor_b__23_0()
		{
			return ((::OLJMFHFEBAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJMFHFEBAI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
