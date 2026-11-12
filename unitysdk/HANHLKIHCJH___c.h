#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HANHLKIHCJH;
namespace System { class Object; }

#define HANHLKIHCJH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F81EDF0)
#define HANHLKIHCJH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F81EE30)
#define HANHLKIHCJH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F81EE40)

inline static constexpr unsigned int HANHLKIHCJH___c_TypeDefinitionIndex = 30829;

	class HANHLKIHCJH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F680);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HANHLKIHCJH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HANHLKIHCJH___C_CTOR_OFFSET))(this);
		}

		::HANHLKIHCJH* __cctor_b__23_0()
		{
			return ((::HANHLKIHCJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HANHLKIHCJH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
