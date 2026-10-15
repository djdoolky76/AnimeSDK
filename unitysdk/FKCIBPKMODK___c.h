#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKCIBPKMODK;
namespace System { class Object; }

#define FKCIBPKMODK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3AC830)
#define FKCIBPKMODK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3AC870)
#define FKCIBPKMODK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3AC880)

inline static constexpr unsigned int FKCIBPKMODK___c_TypeDefinitionIndex = 29717;

	class FKCIBPKMODK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x61140);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKCIBPKMODK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCIBPKMODK___C_CTOR_OFFSET))(this);
		}

		::FKCIBPKMODK* __cctor_b__28_0()
		{
			return ((::FKCIBPKMODK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKCIBPKMODK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
