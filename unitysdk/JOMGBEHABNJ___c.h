#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOMGBEHABNJ;
namespace System { class Object; }

#define JOMGBEHABNJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E77E230)
#define JOMGBEHABNJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E77E260)
#define JOMGBEHABNJ___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E77E270)

inline static constexpr unsigned int JOMGBEHABNJ___c_TypeDefinitionIndex = 34220;

	class JOMGBEHABNJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x690A0);
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
