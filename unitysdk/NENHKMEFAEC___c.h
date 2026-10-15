#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NENHKMEFAEC;
namespace System { class Object; }

#define NENHKMEFAEC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAD1990)
#define NENHKMEFAEC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD19D0)
#define NENHKMEFAEC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAD19E0)

inline static constexpr unsigned int NENHKMEFAEC___c_TypeDefinitionIndex = 31271;

	class NENHKMEFAEC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x62D70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NENHKMEFAEC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NENHKMEFAEC___C_CTOR_OFFSET))(this);
		}

		::NENHKMEFAEC* __cctor_b__28_0()
		{
			return ((::NENHKMEFAEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NENHKMEFAEC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
