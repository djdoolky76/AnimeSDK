#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LENDBHPIOJK;
namespace System { class Object; }

#define LENDBHPIOJK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9374E0)
#define LENDBHPIOJK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E937520)
#define LENDBHPIOJK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E937530)

inline static constexpr unsigned int LENDBHPIOJK___c_TypeDefinitionIndex = 26413;

	class LENDBHPIOJK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39A40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LENDBHPIOJK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LENDBHPIOJK___C_CTOR_OFFSET))(this);
		}

		::LENDBHPIOJK* __cctor_b__23_0()
		{
			return ((::LENDBHPIOJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LENDBHPIOJK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
