#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOLAHHGIFHA;
namespace System { class Object; }

#define JOLAHHGIFHA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E778AA0)
#define JOLAHHGIFHA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E778AD0)
#define JOLAHHGIFHA___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1E778AE0)

inline static constexpr unsigned int JOLAHHGIFHA___c_TypeDefinitionIndex = 25889;

	class JOLAHHGIFHA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68BE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOLAHHGIFHA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLAHHGIFHA___C_CTOR_OFFSET))(this);
		}

		::JOLAHHGIFHA* __cctor_b__58_0()
		{
			return ((::JOLAHHGIFHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLAHHGIFHA___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
