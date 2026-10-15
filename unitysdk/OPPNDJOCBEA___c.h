#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OPPNDJOCBEA;
namespace System { class Object; }

#define OPPNDJOCBEA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEBB720)
#define OPPNDJOCBEA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEBB760)
#define OPPNDJOCBEA___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1DEBB770)

inline static constexpr unsigned int OPPNDJOCBEA___c_TypeDefinitionIndex = 28342;

	class OPPNDJOCBEA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPPNDJOCBEA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPPNDJOCBEA___C_CTOR_OFFSET))(this);
		}

		::OPPNDJOCBEA* __cctor_b__58_0()
		{
			return ((::OPPNDJOCBEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPPNDJOCBEA___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
