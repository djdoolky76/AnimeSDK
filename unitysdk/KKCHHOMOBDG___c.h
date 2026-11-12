#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKCHHOMOBDG;
namespace System { class Object; }

#define KKCHHOMOBDG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB91E60)
#define KKCHHOMOBDG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB91EA0)
#define KKCHHOMOBDG___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FB91EB0)

inline static constexpr unsigned int KKCHHOMOBDG___c_TypeDefinitionIndex = 33192;

	class KKCHHOMOBDG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x169B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKCHHOMOBDG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCHHOMOBDG___C_CTOR_OFFSET))(this);
		}

		::KKCHHOMOBDG* __cctor_b__38_0()
		{
			return ((::KKCHHOMOBDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCHHOMOBDG___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
