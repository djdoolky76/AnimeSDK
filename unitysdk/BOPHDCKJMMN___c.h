#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOPHDCKJMMN;
namespace System { class Object; }

#define BOPHDCKJMMN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E012160)
#define BOPHDCKJMMN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0121A0)
#define BOPHDCKJMMN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0121B0)

inline static constexpr unsigned int BOPHDCKJMMN___c_TypeDefinitionIndex = 29198;

	class BOPHDCKJMMN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E740);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOPHDCKJMMN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPHDCKJMMN___C_CTOR_OFFSET))(this);
		}

		::BOPHDCKJMMN* __cctor_b__28_0()
		{
			return ((::BOPHDCKJMMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPHDCKJMMN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
