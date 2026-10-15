#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPEHFAHLDNM;
namespace System { class Object; }

#define NPEHFAHLDNM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB97320)
#define NPEHFAHLDNM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB97350)
#define NPEHFAHLDNM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB97360)

inline static constexpr unsigned int NPEHFAHLDNM___c_TypeDefinitionIndex = 27805;

	class NPEHFAHLDNM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xDB00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPEHFAHLDNM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEHFAHLDNM___C_CTOR_OFFSET))(this);
		}

		::NPEHFAHLDNM* __cctor_b__28_0()
		{
			return ((::NPEHFAHLDNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEHFAHLDNM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
