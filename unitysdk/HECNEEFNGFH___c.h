#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HECNEEFNGFH;
namespace System { class Object; }

#define HECNEEFNGFH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E52A7C0)
#define HECNEEFNGFH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E52A800)
#define HECNEEFNGFH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E52A810)

inline static constexpr unsigned int HECNEEFNGFH___c_TypeDefinitionIndex = 33843;

	class HECNEEFNGFH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2CD50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HECNEEFNGFH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HECNEEFNGFH___C_CTOR_OFFSET))(this);
		}

		::HECNEEFNGFH* __cctor_b__28_0()
		{
			return ((::HECNEEFNGFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HECNEEFNGFH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
