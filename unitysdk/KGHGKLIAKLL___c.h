#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGHGKLIAKLL;
namespace System { class Object; }

#define KGHGKLIAKLL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB51A30)
#define KGHGKLIAKLL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB51A70)
#define KGHGKLIAKLL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FB51A80)

inline static constexpr unsigned int KGHGKLIAKLL___c_TypeDefinitionIndex = 34712;

	class KGHGKLIAKLL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF5D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGHGKLIAKLL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHGKLIAKLL___C_CTOR_OFFSET))(this);
		}

		::KGHGKLIAKLL* __cctor_b__28_0()
		{
			return ((::KGHGKLIAKLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHGKLIAKLL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
