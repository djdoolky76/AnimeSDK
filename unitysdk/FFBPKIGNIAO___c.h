#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFBPKIGNIAO;
namespace System { class Object; }

#define FFBPKIGNIAO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20547500)
#define FFBPKIGNIAO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20547530)
#define FFBPKIGNIAO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x20547540)

inline static constexpr unsigned int FFBPKIGNIAO___c_TypeDefinitionIndex = 35969;

	class FFBPKIGNIAO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B9C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFBPKIGNIAO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBPKIGNIAO___C_CTOR_OFFSET))(this);
		}

		::FFBPKIGNIAO* __cctor_b__18_0()
		{
			return ((::FFBPKIGNIAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBPKIGNIAO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
