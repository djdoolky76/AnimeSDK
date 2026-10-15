#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKPKIINILKA;
namespace System { class Object; }

#define CKPKIINILKA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0C3500)
#define CKPKIINILKA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C3540)
#define CKPKIINILKA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0C3550)

inline static constexpr unsigned int CKPKIINILKA___c_TypeDefinitionIndex = 32955;

	class CKPKIINILKA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19C80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKPKIINILKA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPKIINILKA___C_CTOR_OFFSET))(this);
		}

		::CKPKIINILKA* __cctor_b__28_0()
		{
			return ((::CKPKIINILKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPKIINILKA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
