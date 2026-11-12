#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJDPBAPPHGO;
namespace System { class Object; }

#define LJDPBAPPHGO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC9A2A0)
#define LJDPBAPPHGO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC9A2D0)
#define LJDPBAPPHGO___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1FC9A2E0)

inline static constexpr unsigned int LJDPBAPPHGO___c_TypeDefinitionIndex = 28231;

	class LJDPBAPPHGO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38A70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJDPBAPPHGO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDPBAPPHGO___C_CTOR_OFFSET))(this);
		}

		::LJDPBAPPHGO* __cctor_b__48_0()
		{
			return ((::LJDPBAPPHGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDPBAPPHGO___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
