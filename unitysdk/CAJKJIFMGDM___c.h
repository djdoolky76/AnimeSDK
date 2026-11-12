#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAJKJIFMGDM;
namespace System { class Object; }

#define CAJKJIFMGDM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3206A0)
#define CAJKJIFMGDM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3206E0)
#define CAJKJIFMGDM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F3206F0)

inline static constexpr unsigned int CAJKJIFMGDM___c_TypeDefinitionIndex = 27766;

	class CAJKJIFMGDM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58980);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAJKJIFMGDM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJKJIFMGDM___C_CTOR_OFFSET))(this);
		}

		::CAJKJIFMGDM* __cctor_b__33_0()
		{
			return ((::CAJKJIFMGDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJKJIFMGDM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
