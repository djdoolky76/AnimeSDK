#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGNBPKBCHAB;
namespace System { class Object; }

#define KGNBPKBCHAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB54980)
#define KGNBPKBCHAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB549B0)
#define KGNBPKBCHAB___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FB549C0)

inline static constexpr unsigned int KGNBPKBCHAB___c_TypeDefinitionIndex = 35994;

	class KGNBPKBCHAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF980);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGNBPKBCHAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNBPKBCHAB___C_CTOR_OFFSET))(this);
		}

		::KGNBPKBCHAB* __cctor_b__18_0()
		{
			return ((::KGNBPKBCHAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNBPKBCHAB___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
