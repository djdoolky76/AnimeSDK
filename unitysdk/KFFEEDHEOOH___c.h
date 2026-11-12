#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFFEEDHEOOH;
namespace System { class Object; }

#define KFFEEDHEOOH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB2E850)
#define KFFEEDHEOOH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB2E890)
#define KFFEEDHEOOH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FB2E8A0)

inline static constexpr unsigned int KFFEEDHEOOH___c_TypeDefinitionIndex = 33171;

	class KFFEEDHEOOH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xB6C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFFEEDHEOOH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFFEEDHEOOH___C_CTOR_OFFSET))(this);
		}

		::KFFEEDHEOOH* __cctor_b__28_0()
		{
			return ((::KFFEEDHEOOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFFEEDHEOOH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
