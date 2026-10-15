#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFCBKJEFKPG;
namespace System { class Object; }

#define AFCBKJEFKPG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0E6BD0)
#define AFCBKJEFKPG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0E6C10)
#define AFCBKJEFKPG___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E0E6C20)

inline static constexpr unsigned int AFCBKJEFKPG___c_TypeDefinitionIndex = 29169;

	class AFCBKJEFKPG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34FE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFCBKJEFKPG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCBKJEFKPG___C_CTOR_OFFSET))(this);
		}

		::AFCBKJEFKPG* __cctor_b__53_0()
		{
			return ((::AFCBKJEFKPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCBKJEFKPG___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
