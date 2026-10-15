#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMCDLJJFGKE;
namespace System { class Object; }

#define LMCDLJJFGKE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9752D0)
#define LMCDLJJFGKE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E975310)
#define LMCDLJJFGKE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E975320)

inline static constexpr unsigned int LMCDLJJFGKE___c_TypeDefinitionIndex = 33216;

	class LMCDLJJFGKE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D660);
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
