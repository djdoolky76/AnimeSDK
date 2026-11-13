#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class POCJJMEJDGG;
namespace System { class Object; }

#define POCJJMEJDGG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCBDF00)
#define POCJJMEJDGG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCBDF40)
#define POCJJMEJDGG___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1FCBDF50)

inline static constexpr unsigned int POCJJMEJDGG___c_TypeDefinitionIndex = 27953;

	class POCJJMEJDGG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4F9F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POCJJMEJDGG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POCJJMEJDGG___C_CTOR_OFFSET))(this);
		}

		::POCJJMEJDGG* __cctor_b__53_0()
		{
			return ((::POCJJMEJDGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + POCJJMEJDGG___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
