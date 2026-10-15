#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NALOLCLOBMG;
namespace System { class Object; }

#define NALOLCLOBMG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAC6D50)
#define NALOLCLOBMG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC6D90)
#define NALOLCLOBMG___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EAC6DA0)

inline static constexpr unsigned int NALOLCLOBMG___c_TypeDefinitionIndex = 27948;

	class NALOLCLOBMG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C9D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NALOLCLOBMG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NALOLCLOBMG___C_CTOR_OFFSET))(this);
		}

		::NALOLCLOBMG* __cctor_b__38_0()
		{
			return ((::NALOLCLOBMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NALOLCLOBMG___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
