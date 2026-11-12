#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAFMJGEGIDG;
namespace System { class Object; }

#define EAFMJGEGIDG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F508400)
#define EAFMJGEGIDG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F508440)
#define EAFMJGEGIDG___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1F508450)

inline static constexpr unsigned int EAFMJGEGIDG___c_TypeDefinitionIndex = 29480;

	class EAFMJGEGIDG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45A20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAFMJGEGIDG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFMJGEGIDG___C_CTOR_OFFSET))(this);
		}

		::EAFMJGEGIDG* __cctor_b__63_0()
		{
			return ((::EAFMJGEGIDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFMJGEGIDG___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
