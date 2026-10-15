#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELDONCLGHPO;
namespace System { class Object; }

#define ELDONCLGHPO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A0520)
#define ELDONCLGHPO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A0550)
#define ELDONCLGHPO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E2A0560)

inline static constexpr unsigned int ELDONCLGHPO___c_TypeDefinitionIndex = 33755;

	class ELDONCLGHPO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x511E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELDONCLGHPO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDONCLGHPO___C_CTOR_OFFSET))(this);
		}

		::ELDONCLGHPO* __cctor_b__18_0()
		{
			return ((::ELDONCLGHPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELDONCLGHPO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
