#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGFHEGJKHFO;
namespace System { class Object; }

#define DGFHEGJKHFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1ACC80)
#define DGFHEGJKHFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1ACCC0)
#define DGFHEGJKHFO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1ACCD0)

inline static constexpr unsigned int DGFHEGJKHFO___c_TypeDefinitionIndex = 30321;

	class DGFHEGJKHFO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x341F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGFHEGJKHFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGFHEGJKHFO___C_CTOR_OFFSET))(this);
		}

		::DGFHEGJKHFO* __cctor_b__23_0()
		{
			return ((::DGFHEGJKHFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGFHEGJKHFO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
