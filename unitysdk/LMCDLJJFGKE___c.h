#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMCDLJJFGKE;
namespace System { class Object; }

#define LMCDLJJFGKE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCC5D50)
#define LMCDLJJFGKE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCC5D90)
#define LMCDLJJFGKE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FCC5DA0)

inline static constexpr unsigned int LMCDLJJFGKE___c_TypeDefinitionIndex = 34131;

	class LMCDLJJFGKE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMCDLJJFGKE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCDLJJFGKE___C_CTOR_OFFSET))(this);
		}

		::LMCDLJJFGKE* __cctor_b__33_0()
		{
			return ((::LMCDLJJFGKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCDLJJFGKE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
