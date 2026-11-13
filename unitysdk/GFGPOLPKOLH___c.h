#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFGPOLPKOLH;
namespace System { class Object; }

#define GFGPOLPKOLH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2007F740)
#define GFGPOLPKOLH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2007F780)
#define GFGPOLPKOLH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x2007F790)

inline static constexpr unsigned int GFGPOLPKOLH___c_TypeDefinitionIndex = 28783;

	class GFGPOLPKOLH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xBB80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFGPOLPKOLH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGPOLPKOLH___C_CTOR_OFFSET))(this);
		}

		::GFGPOLPKOLH* __cctor_b__23_0()
		{
			return ((::GFGPOLPKOLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGPOLPKOLH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
