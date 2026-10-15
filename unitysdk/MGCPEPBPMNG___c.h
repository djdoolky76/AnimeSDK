#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGCPEPBPMNG;
namespace System { class Object; }

#define MGCPEPBPMNG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA21C90)
#define MGCPEPBPMNG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA21CD0)
#define MGCPEPBPMNG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA21CE0)

inline static constexpr unsigned int MGCPEPBPMNG___c_TypeDefinitionIndex = 31703;

	class MGCPEPBPMNG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D520);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGCPEPBPMNG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGCPEPBPMNG___C_CTOR_OFFSET))(this);
		}

		::MGCPEPBPMNG* __cctor_b__28_0()
		{
			return ((::MGCPEPBPMNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGCPEPBPMNG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
