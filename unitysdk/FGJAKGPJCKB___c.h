#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGJAKGPJCKB;
namespace System { class Object; }

#define FGJAKGPJCKB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E353C20)
#define FGJAKGPJCKB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E353C60)
#define FGJAKGPJCKB___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E353C70)

inline static constexpr unsigned int FGJAKGPJCKB___c_TypeDefinitionIndex = 28571;

	class FGJAKGPJCKB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGJAKGPJCKB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGJAKGPJCKB___C_CTOR_OFFSET))(this);
		}

		::FGJAKGPJCKB* __cctor_b__53_0()
		{
			return ((::FGJAKGPJCKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGJAKGPJCKB___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
