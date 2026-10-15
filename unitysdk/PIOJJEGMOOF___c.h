#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIOJJEGMOOF;
namespace System { class Object; }

#define PIOJJEGMOOF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF72B80)
#define PIOJJEGMOOF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF72BC0)
#define PIOJJEGMOOF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF72BD0)

inline static constexpr unsigned int PIOJJEGMOOF___c_TypeDefinitionIndex = 29937;

	class PIOJJEGMOOF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45800);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIOJJEGMOOF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOJJEGMOOF___C_CTOR_OFFSET))(this);
		}

		::PIOJJEGMOOF* __cctor_b__23_0()
		{
			return ((::PIOJJEGMOOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOJJEGMOOF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
