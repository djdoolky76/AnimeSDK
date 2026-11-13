#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJNEHIMBFMC;
namespace System { class Object; }

#define GJNEHIMBFMC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBE0AB0)
#define GJNEHIMBFMC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBE0AF0)
#define GJNEHIMBFMC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FBE0B00)

inline static constexpr unsigned int GJNEHIMBFMC___c_TypeDefinitionIndex = 26870;

	class GJNEHIMBFMC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJNEHIMBFMC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJNEHIMBFMC___C_CTOR_OFFSET))(this);
		}

		::GJNEHIMBFMC* __cctor_b__23_0()
		{
			return ((::GJNEHIMBFMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJNEHIMBFMC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
