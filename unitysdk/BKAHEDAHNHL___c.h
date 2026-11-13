#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKAHEDAHNHL;
namespace System { class Object; }

#define BKAHEDAHNHL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAD7CA0)
#define BKAHEDAHNHL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAD7CD0)
#define BKAHEDAHNHL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FAD7CE0)

inline static constexpr unsigned int BKAHEDAHNHL___c_TypeDefinitionIndex = 31793;

	class BKAHEDAHNHL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55BD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKAHEDAHNHL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKAHEDAHNHL___C_CTOR_OFFSET))(this);
		}

		::BKAHEDAHNHL* __cctor_b__28_0()
		{
			return ((::BKAHEDAHNHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKAHEDAHNHL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
