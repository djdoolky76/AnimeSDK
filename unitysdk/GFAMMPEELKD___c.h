#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFAMMPEELKD;
namespace System { class Object; }

#define GFAMMPEELKD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E432910)
#define GFAMMPEELKD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E432950)
#define GFAMMPEELKD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E432960)

inline static constexpr unsigned int GFAMMPEELKD___c_TypeDefinitionIndex = 33769;

	class GFAMMPEELKD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFAMMPEELKD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFAMMPEELKD___C_CTOR_OFFSET))(this);
		}

		::GFAMMPEELKD* __cctor_b__33_0()
		{
			return ((::GFAMMPEELKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFAMMPEELKD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
