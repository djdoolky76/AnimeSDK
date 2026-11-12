#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEFCEGFBOAF;
namespace System { class Object; }

#define JEFCEGFBOAF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA27380)
#define JEFCEGFBOAF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA273B0)
#define JEFCEGFBOAF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FA273C0)

inline static constexpr unsigned int JEFCEGFBOAF___c_TypeDefinitionIndex = 26958;

	class JEFCEGFBOAF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEFCEGFBOAF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEFCEGFBOAF___C_CTOR_OFFSET))(this);
		}

		::JEFCEGFBOAF* __cctor_b__33_0()
		{
			return ((::JEFCEGFBOAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEFCEGFBOAF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
