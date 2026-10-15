#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFDJNEOHCLB;
namespace System { class Object; }

#define AFDJNEOHCLB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E115800)
#define AFDJNEOHCLB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E115830)
#define AFDJNEOHCLB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E115840)

inline static constexpr unsigned int AFDJNEOHCLB___c_TypeDefinitionIndex = 27041;

	class AFDJNEOHCLB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2E300);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFDJNEOHCLB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFDJNEOHCLB___C_CTOR_OFFSET))(this);
		}

		::AFDJNEOHCLB* __cctor_b__33_0()
		{
			return ((::AFDJNEOHCLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFDJNEOHCLB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
