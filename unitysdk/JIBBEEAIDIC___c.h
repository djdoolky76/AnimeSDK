#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JIBBEEAIDIC;
namespace System { class Object; }

#define JIBBEEAIDIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA59A10)
#define JIBBEEAIDIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA59A50)
#define JIBBEEAIDIC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FA59A60)

inline static constexpr unsigned int JIBBEEAIDIC___c_TypeDefinitionIndex = 33596;

	class JIBBEEAIDIC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A5E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIBBEEAIDIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIBBEEAIDIC___C_CTOR_OFFSET))(this);
		}

		::JIBBEEAIDIC* __cctor_b__33_0()
		{
			return ((::JIBBEEAIDIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIBBEEAIDIC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
