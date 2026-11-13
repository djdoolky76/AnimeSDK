#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PKOMDBGFMBK;
namespace System { class Object; }

#define PKOMDBGFMBK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4A3670)
#define PKOMDBGFMBK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4A36A0)
#define PKOMDBGFMBK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F4A36B0)

inline static constexpr unsigned int PKOMDBGFMBK___c_TypeDefinitionIndex = 31658;

	class PKOMDBGFMBK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x434F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKOMDBGFMBK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOMDBGFMBK___C_CTOR_OFFSET))(this);
		}

		::PKOMDBGFMBK* __cctor_b__28_0()
		{
			return ((::PKOMDBGFMBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOMDBGFMBK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
