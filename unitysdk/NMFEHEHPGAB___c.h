#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMFEHEHPGAB;
namespace System { class Object; }

#define NMFEHEHPGAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB47F00)
#define NMFEHEHPGAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB47F40)
#define NMFEHEHPGAB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EB47F50)

inline static constexpr unsigned int NMFEHEHPGAB___c_TypeDefinitionIndex = 28911;

	class NMFEHEHPGAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6A960);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMFEHEHPGAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMFEHEHPGAB___C_CTOR_OFFSET))(this);
		}

		::NMFEHEHPGAB* __cctor_b__33_0()
		{
			return ((::NMFEHEHPGAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMFEHEHPGAB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
