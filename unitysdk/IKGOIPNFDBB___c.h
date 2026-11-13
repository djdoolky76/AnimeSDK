#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKGOIPNFDBB;
namespace System { class Object; }

#define IKGOIPNFDBB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20066A90)
#define IKGOIPNFDBB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20066AD0)
#define IKGOIPNFDBB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20066AE0)

inline static constexpr unsigned int IKGOIPNFDBB___c_TypeDefinitionIndex = 29789;

	class IKGOIPNFDBB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A3C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKGOIPNFDBB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGOIPNFDBB___C_CTOR_OFFSET))(this);
		}

		::IKGOIPNFDBB* __cctor_b__23_0()
		{
			return ((::IKGOIPNFDBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGOIPNFDBB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
