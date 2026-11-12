#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJEHDBECIMM;
namespace System { class Object; }

#define JJEHDBECIMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA876C0)
#define JJEHDBECIMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA87700)
#define JJEHDBECIMM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FA87710)

inline static constexpr unsigned int JJEHDBECIMM___c_TypeDefinitionIndex = 29253;

	class JJEHDBECIMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DB50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJEHDBECIMM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEHDBECIMM___C_CTOR_OFFSET))(this);
		}

		::JJEHDBECIMM* __cctor_b__23_0()
		{
			return ((::JJEHDBECIMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEHDBECIMM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
