#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LCEICICOGLN;
namespace System { class Object; }

#define LCEICICOGLN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8BE2B0)
#define LCEICICOGLN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8BE2F0)
#define LCEICICOGLN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8BE300)

inline static constexpr unsigned int LCEICICOGLN___c_TypeDefinitionIndex = 33857;

	class LCEICICOGLN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C6E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCEICICOGLN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEICICOGLN___C_CTOR_OFFSET))(this);
		}

		::LCEICICOGLN* __cctor_b__23_0()
		{
			return ((::LCEICICOGLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEICICOGLN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
