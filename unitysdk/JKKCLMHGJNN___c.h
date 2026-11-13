#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JKKCLMHGJNN;
namespace System { class Object; }

#define JKKCLMHGJNN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF3F3F0)
#define JKKCLMHGJNN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF3F430)
#define JKKCLMHGJNN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FF3F440)

inline static constexpr unsigned int JKKCLMHGJNN___c_TypeDefinitionIndex = 35372;

	class JKKCLMHGJNN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x620E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKKCLMHGJNN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKCLMHGJNN___C_CTOR_OFFSET))(this);
		}

		::JKKCLMHGJNN* __cctor_b__23_0()
		{
			return ((::JKKCLMHGJNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKCLMHGJNN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
