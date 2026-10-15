#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHODCLCAIIP;
namespace System { class Object; }

#define KHODCLCAIIP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E820A00)
#define KHODCLCAIIP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E820A40)
#define KHODCLCAIIP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E820A50)

inline static constexpr unsigned int KHODCLCAIIP___c_TypeDefinitionIndex = 29816;

	class KHODCLCAIIP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16BF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHODCLCAIIP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHODCLCAIIP___C_CTOR_OFFSET))(this);
		}

		::KHODCLCAIIP* __cctor_b__23_0()
		{
			return ((::KHODCLCAIIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHODCLCAIIP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
