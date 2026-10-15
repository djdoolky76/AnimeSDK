#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBCHOKFHHIH;
namespace System { class Object; }

#define KBCHOKFHHIH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7BD050)
#define KBCHOKFHHIH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7BD090)
#define KBCHOKFHHIH___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E7BD0A0)

inline static constexpr unsigned int KBCHOKFHHIH___c_TypeDefinitionIndex = 25741;

	class KBCHOKFHHIH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xD5C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBCHOKFHHIH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCHOKFHHIH___C_CTOR_OFFSET))(this);
		}

		::KBCHOKFHHIH* __cctor_b__53_0()
		{
			return ((::KBCHOKFHHIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCHOKFHHIH___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
