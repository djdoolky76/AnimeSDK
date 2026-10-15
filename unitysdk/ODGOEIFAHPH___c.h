#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ODGOEIFAHPH;
namespace System { class Object; }

#define ODGOEIFAHPH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDEEDC0)
#define ODGOEIFAHPH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDEEE00)
#define ODGOEIFAHPH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DDEEE10)

inline static constexpr unsigned int ODGOEIFAHPH___c_TypeDefinitionIndex = 30563;

	class ODGOEIFAHPH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODGOEIFAHPH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGOEIFAHPH___C_CTOR_OFFSET))(this);
		}

		::ODGOEIFAHPH* __cctor_b__28_0()
		{
			return ((::ODGOEIFAHPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGOEIFAHPH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
