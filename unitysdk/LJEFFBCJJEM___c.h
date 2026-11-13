#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJEFFBCJJEM;
namespace System { class Object; }

#define LJEFFBCJJEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F97B9B0)
#define LJEFFBCJJEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F97B9F0)
#define LJEFFBCJJEM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F97BA00)

inline static constexpr unsigned int LJEFFBCJJEM___c_TypeDefinitionIndex = 36048;

	class LJEFFBCJJEM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C1A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJEFFBCJJEM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEFFBCJJEM___C_CTOR_OFFSET))(this);
		}

		::LJEFFBCJJEM* __cctor_b__23_0()
		{
			return ((::LJEFFBCJJEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEFFBCJJEM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
