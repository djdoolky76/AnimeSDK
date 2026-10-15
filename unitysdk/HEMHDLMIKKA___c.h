#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HEMHDLMIKKA;
namespace System { class Object; }

#define HEMHDLMIKKA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E52E8E0)
#define HEMHDLMIKKA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E52E920)
#define HEMHDLMIKKA___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E52E930)

inline static constexpr unsigned int HEMHDLMIKKA___c_TypeDefinitionIndex = 32497;

	class HEMHDLMIKKA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEMHDLMIKKA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMHDLMIKKA___C_CTOR_OFFSET))(this);
		}

		::HEMHDLMIKKA* __cctor_b__18_0()
		{
			return ((::HEMHDLMIKKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMHDLMIKKA___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
