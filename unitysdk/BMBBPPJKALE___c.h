#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMBBPPJKALE;
namespace System { class Object; }

#define BMBBPPJKALE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2C1B80)
#define BMBBPPJKALE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2C1BC0)
#define BMBBPPJKALE___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F2C1BD0)

inline static constexpr unsigned int BMBBPPJKALE___c_TypeDefinitionIndex = 30249;

	class BMBBPPJKALE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMBBPPJKALE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBBPPJKALE___C_CTOR_OFFSET))(this);
		}

		::BMBBPPJKALE* __cctor_b__38_0()
		{
			return ((::BMBBPPJKALE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBBPPJKALE___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
