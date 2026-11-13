#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHFEIJJDJIE;
namespace System { class Object; }

#define OHFEIJJDJIE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCDF100)
#define OHFEIJJDJIE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCDF140)
#define OHFEIJJDJIE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FCDF150)

inline static constexpr unsigned int OHFEIJJDJIE___c_TypeDefinitionIndex = 26519;

	class OHFEIJJDJIE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16DF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHFEIJJDJIE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHFEIJJDJIE___C_CTOR_OFFSET))(this);
		}

		::OHFEIJJDJIE* __cctor_b__33_0()
		{
			return ((::OHFEIJJDJIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHFEIJJDJIE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
