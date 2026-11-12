#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHGJBIJKIMM;
namespace System { class Object; }

#define DHGJBIJKIMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4901E0)
#define DHGJBIJKIMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F490220)
#define DHGJBIJKIMM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F490230)

inline static constexpr unsigned int DHGJBIJKIMM___c_TypeDefinitionIndex = 35053;

	class DHGJBIJKIMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x302D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHGJBIJKIMM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGJBIJKIMM___C_CTOR_OFFSET))(this);
		}

		::DHGJBIJKIMM* __cctor_b__28_0()
		{
			return ((::DHGJBIJKIMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGJBIJKIMM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
