#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNEJEHOOFGI;
namespace System { class Object; }

#define KNEJEHOOFGI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E875180)
#define KNEJEHOOFGI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8751C0)
#define KNEJEHOOFGI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E8751D0)

inline static constexpr unsigned int KNEJEHOOFGI___c_TypeDefinitionIndex = 32917;

	class KNEJEHOOFGI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1FDE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNEJEHOOFGI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNEJEHOOFGI___C_CTOR_OFFSET))(this);
		}

		::KNEJEHOOFGI* __cctor_b__28_0()
		{
			return ((::KNEJEHOOFGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNEJEHOOFGI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
