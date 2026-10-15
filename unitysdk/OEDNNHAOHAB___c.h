#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OEDNNHAOHAB;
namespace System { class Object; }

#define OEDNNHAOHAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDFC070)
#define OEDNNHAOHAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDFC0B0)
#define OEDNNHAOHAB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DDFC0C0)

inline static constexpr unsigned int OEDNNHAOHAB___c_TypeDefinitionIndex = 32651;

	class OEDNNHAOHAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13620);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEDNNHAOHAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDNNHAOHAB___C_CTOR_OFFSET))(this);
		}

		::OEDNNHAOHAB* __cctor_b__23_0()
		{
			return ((::OEDNNHAOHAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDNNHAOHAB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
