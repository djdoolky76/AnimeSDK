#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAJGLHCCNED;
namespace System { class Object; }

#define LAJGLHCCNED___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8CEC90)
#define LAJGLHCCNED___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8CECD0)
#define LAJGLHCCNED___C___CCTOR_B__88_0_OFFSET UNITYSDK_OFFSET(0x1E8CECE0)

	class LAJGLHCCNED___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2F230);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAJGLHCCNED___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJGLHCCNED___C_CTOR_OFFSET))(this);
		}

		::LAJGLHCCNED* __cctor_b__88_0()
		{
			return ((::LAJGLHCCNED*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJGLHCCNED___C___CCTOR_B__88_0_OFFSET))(this);
		}

	};
