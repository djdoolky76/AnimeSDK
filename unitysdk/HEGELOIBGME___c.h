#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HEGELOIBGME;
namespace System { class Object; }

#define HEGELOIBGME___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E52C480)
#define HEGELOIBGME___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E52C4C0)
#define HEGELOIBGME___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E52C4D0)

inline static constexpr unsigned int HEGELOIBGME___c_TypeDefinitionIndex = 31076;

	class HEGELOIBGME___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2CEF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEGELOIBGME___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGELOIBGME___C_CTOR_OFFSET))(this);
		}

		::HEGELOIBGME* __cctor_b__28_0()
		{
			return ((::HEGELOIBGME*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEGELOIBGME___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
