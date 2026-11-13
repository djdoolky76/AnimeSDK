#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGMDJIENFFH;
namespace System { class Object; }

#define JGMDJIENFFH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x204A5D80)
#define JGMDJIENFFH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x204A5DB0)
#define JGMDJIENFFH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x204A5DC0)

inline static constexpr unsigned int JGMDJIENFFH___c_TypeDefinitionIndex = 34638;

	class JGMDJIENFFH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x604D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGMDJIENFFH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGMDJIENFFH___C_CTOR_OFFSET))(this);
		}

		::JGMDJIENFFH* __cctor_b__28_0()
		{
			return ((::JGMDJIENFFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGMDJIENFFH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
