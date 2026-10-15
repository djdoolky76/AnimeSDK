#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PKPFAHEBJIO;
namespace System { class Object; }

#define PKPFAHEBJIO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF696E0)
#define PKPFAHEBJIO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF69720)
#define PKPFAHEBJIO___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DF69730)

inline static constexpr unsigned int PKPFAHEBJIO___c_TypeDefinitionIndex = 25587;

	class PKPFAHEBJIO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3AE50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKPFAHEBJIO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPFAHEBJIO___C_CTOR_OFFSET))(this);
		}

		::PKPFAHEBJIO* __cctor_b__43_0()
		{
			return ((::PKPFAHEBJIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPFAHEBJIO___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
