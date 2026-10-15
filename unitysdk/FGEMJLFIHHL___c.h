#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGEMJLFIHHL;
namespace System { class Object; }

#define FGEMJLFIHHL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E34DDD0)
#define FGEMJLFIHHL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E34DE10)
#define FGEMJLFIHHL___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E34DE20)

inline static constexpr unsigned int FGEMJLFIHHL___c_TypeDefinitionIndex = 28419;

	class FGEMJLFIHHL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55200);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGEMJLFIHHL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGEMJLFIHHL___C_CTOR_OFFSET))(this);
		}

		::FGEMJLFIHHL* __cctor_b__18_0()
		{
			return ((::FGEMJLFIHHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGEMJLFIHHL___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
