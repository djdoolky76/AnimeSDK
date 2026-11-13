#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJNDMBCDEOL;
namespace System { class Object; }

#define AJNDMBCDEOL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206347D0)
#define AJNDMBCDEOL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20634810)
#define AJNDMBCDEOL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20634820)

inline static constexpr unsigned int AJNDMBCDEOL___c_TypeDefinitionIndex = 33642;

	class AJNDMBCDEOL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31FF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJNDMBCDEOL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNDMBCDEOL___C_CTOR_OFFSET))(this);
		}

		::AJNDMBCDEOL* __cctor_b__28_0()
		{
			return ((::AJNDMBCDEOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNDMBCDEOL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
