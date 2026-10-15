#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLDIHADJKJF;
namespace System { class Object; }

#define BLDIHADJKJF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF307F0)
#define BLDIHADJKJF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF30830)
#define BLDIHADJKJF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF30840)

inline static constexpr unsigned int BLDIHADJKJF___c_TypeDefinitionIndex = 31772;

	class BLDIHADJKJF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B140);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLDIHADJKJF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDIHADJKJF___C_CTOR_OFFSET))(this);
		}

		::BLDIHADJKJF* __cctor_b__28_0()
		{
			return ((::BLDIHADJKJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDIHADJKJF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
