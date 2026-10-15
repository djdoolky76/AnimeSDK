#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCKICCFJELB;
namespace System { class Object; }

#define DCKICCFJELB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1742A0)
#define DCKICCFJELB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1742E0)
#define DCKICCFJELB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1742F0)

inline static constexpr unsigned int DCKICCFJELB___c_TypeDefinitionIndex = 30034;

	class DCKICCFJELB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2CA80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCKICCFJELB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKICCFJELB___C_CTOR_OFFSET))(this);
		}

		::DCKICCFJELB* __cctor_b__28_0()
		{
			return ((::DCKICCFJELB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKICCFJELB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
