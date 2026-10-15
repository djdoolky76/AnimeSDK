#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OEBBNFANHLK;
namespace System { class Object; }

#define OEBBNFANHLK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE234C0)
#define OEBBNFANHLK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE23500)
#define OEBBNFANHLK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DE23510)

inline static constexpr unsigned int OEBBNFANHLK___c_TypeDefinitionIndex = 25581;

	class OEBBNFANHLK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14460);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEBBNFANHLK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBBNFANHLK___C_CTOR_OFFSET))(this);
		}

		::OEBBNFANHLK* __cctor_b__28_0()
		{
			return ((::OEBBNFANHLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBBNFANHLK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
