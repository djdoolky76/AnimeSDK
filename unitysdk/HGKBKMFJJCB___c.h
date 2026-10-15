#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGKBKMFJJCB;
namespace System { class Object; }

#define HGKBKMFJJCB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E54F3C0)
#define HGKBKMFJJCB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E54F400)
#define HGKBKMFJJCB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E54F410)

inline static constexpr unsigned int HGKBKMFJJCB___c_TypeDefinitionIndex = 32486;

	class HGKBKMFJJCB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x312C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGKBKMFJJCB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKBKMFJJCB___C_CTOR_OFFSET))(this);
		}

		::HGKBKMFJJCB* __cctor_b__23_0()
		{
			return ((::HGKBKMFJJCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKBKMFJJCB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
