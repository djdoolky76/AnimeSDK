#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFMMFBMOBEG;
namespace System { class Object; }

#define FFMMFBMOBEG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3783C0)
#define FFMMFBMOBEG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E378400)
#define FFMMFBMOBEG___C___CCTOR_B__64_0_OFFSET UNITYSDK_OFFSET(0x1E378410)

inline static constexpr unsigned int FFMMFBMOBEG___c_TypeDefinitionIndex = 34862;

	class FFMMFBMOBEG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E0A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFMMFBMOBEG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMMFBMOBEG___C_CTOR_OFFSET))(this);
		}

		::FFMMFBMOBEG* __cctor_b__64_0()
		{
			return ((::FFMMFBMOBEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMMFBMOBEG___C___CCTOR_B__64_0_OFFSET))(this);
		}

	};
