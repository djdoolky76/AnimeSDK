#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOMGBEHABNJ;
namespace System { class Object; }

#define JOMGBEHABNJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FADBB50)
#define JOMGBEHABNJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FADBB80)
#define JOMGBEHABNJ___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FADBB90)

inline static constexpr unsigned int JOMGBEHABNJ___c_TypeDefinitionIndex = 35148;

	class JOMGBEHABNJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58E10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOMGBEHABNJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMGBEHABNJ___C_CTOR_OFFSET))(this);
		}

		::JOMGBEHABNJ* __cctor_b__18_0()
		{
			return ((::JOMGBEHABNJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMGBEHABNJ___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
