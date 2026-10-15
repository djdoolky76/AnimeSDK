#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJJMGKHEBFH;
namespace System { class Object; }

#define AJJMGKHEBFH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3C3B80)
#define AJJMGKHEBFH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C3BC0)
#define AJJMGKHEBFH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3C3BD0)

inline static constexpr unsigned int AJJMGKHEBFH___c_TypeDefinitionIndex = 28509;

	class AJJMGKHEBFH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35AF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJJMGKHEBFH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJMGKHEBFH___C_CTOR_OFFSET))(this);
		}

		::AJJMGKHEBFH* __cctor_b__28_0()
		{
			return ((::AJJMGKHEBFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJMGKHEBFH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
