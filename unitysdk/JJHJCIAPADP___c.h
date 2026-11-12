#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJHJCIAPADP;
namespace System { class Object; }

#define JJHJCIAPADP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA89CD0)
#define JJHJCIAPADP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA89D10)
#define JJHJCIAPADP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FA89D20)

inline static constexpr unsigned int JJHJCIAPADP___c_TypeDefinitionIndex = 26021;

	class JJHJCIAPADP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJHJCIAPADP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHJCIAPADP___C_CTOR_OFFSET))(this);
		}

		::JJHJCIAPADP* __cctor_b__28_0()
		{
			return ((::JJHJCIAPADP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJHJCIAPADP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
