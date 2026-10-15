#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KEJANPDMOIL;
namespace System { class Object; }

#define KEJANPDMOIL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7DF090)
#define KEJANPDMOIL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DF0D0)
#define KEJANPDMOIL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7DF0E0)

inline static constexpr unsigned int KEJANPDMOIL___c_TypeDefinitionIndex = 34146;

	class KEJANPDMOIL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x119A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEJANPDMOIL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJANPDMOIL___C_CTOR_OFFSET))(this);
		}

		::KEJANPDMOIL* __cctor_b__23_0()
		{
			return ((::KEJANPDMOIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJANPDMOIL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
