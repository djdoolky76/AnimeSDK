#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFBPKIGNIAO;
namespace System { class Object; }

#define FFBPKIGNIAO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F651A20)
#define FFBPKIGNIAO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F651A50)
#define FFBPKIGNIAO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F651A60)

inline static constexpr unsigned int FFBPKIGNIAO___c_TypeDefinitionIndex = 35969;

	class FFBPKIGNIAO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B800);
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
