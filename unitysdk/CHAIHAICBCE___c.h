#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHAIHAICBCE;
namespace System { class Object; }

#define CHAIHAICBCE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F828850)
#define CHAIHAICBCE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F828890)
#define CHAIHAICBCE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F8288A0)

inline static constexpr unsigned int CHAIHAICBCE___c_TypeDefinitionIndex = 30209;

	class CHAIHAICBCE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xDA40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHAIHAICBCE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHAIHAICBCE___C_CTOR_OFFSET))(this);
		}

		::CHAIHAICBCE* __cctor_b__23_0()
		{
			return ((::CHAIHAICBCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHAIHAICBCE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
