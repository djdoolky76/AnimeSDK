#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JKPOIHGIFFG;
namespace System { class Object; }

#define JKPOIHGIFFG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E743D30)
#define JKPOIHGIFFG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E743D70)
#define JKPOIHGIFFG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E743D80)

inline static constexpr unsigned int JKPOIHGIFFG___c_TypeDefinitionIndex = 29232;

	class JKPOIHGIFFG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63A30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKPOIHGIFFG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPOIHGIFFG___C_CTOR_OFFSET))(this);
		}

		::JKPOIHGIFFG* __cctor_b__28_0()
		{
			return ((::JKPOIHGIFFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPOIHGIFFG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
