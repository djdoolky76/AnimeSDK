#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBGHCHPONOH;
namespace System { class Object; }

#define DBGHCHPONOH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E15C090)
#define DBGHCHPONOH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E15C0D0)
#define DBGHCHPONOH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E15C0E0)

inline static constexpr unsigned int DBGHCHPONOH___c_TypeDefinitionIndex = 34872;

	class DBGHCHPONOH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25DB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBGHCHPONOH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGHCHPONOH___C_CTOR_OFFSET))(this);
		}

		::DBGHCHPONOH* __cctor_b__23_0()
		{
			return ((::DBGHCHPONOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGHCHPONOH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
