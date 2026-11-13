#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KEHOGIENDKC;
namespace System { class Object; }

#define KEHOGIENDKC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F99D600)
#define KEHOGIENDKC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F99D640)
#define KEHOGIENDKC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F99D650)

inline static constexpr unsigned int KEHOGIENDKC___c_TypeDefinitionIndex = 33127;

	class KEHOGIENDKC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xA8A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEHOGIENDKC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHOGIENDKC___C_CTOR_OFFSET))(this);
		}

		::KEHOGIENDKC* __cctor_b__33_0()
		{
			return ((::KEHOGIENDKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHOGIENDKC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
