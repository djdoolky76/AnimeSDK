#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MENEHKHKFOI;
namespace System { class Object; }

#define MENEHKHKFOI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB0E2A0)
#define MENEHKHKFOI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB0E2E0)
#define MENEHKHKFOI___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FB0E2F0)

inline static constexpr unsigned int MENEHKHKFOI___c_TypeDefinitionIndex = 30617;

	class MENEHKHKFOI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DDC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MENEHKHKFOI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MENEHKHKFOI___C_CTOR_OFFSET))(this);
		}

		::MENEHKHKFOI* __cctor_b__18_0()
		{
			return ((::MENEHKHKFOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MENEHKHKFOI___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
