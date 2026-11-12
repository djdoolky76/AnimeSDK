#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENIDJAFECBD;
namespace System { class Object; }

#define ENIDJAFECBD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5D51A0)
#define ENIDJAFECBD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5D51D0)
#define ENIDJAFECBD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F5D51E0)

inline static constexpr unsigned int ENIDJAFECBD___c_TypeDefinitionIndex = 30738;

	class ENIDJAFECBD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50450);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENIDJAFECBD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIDJAFECBD___C_CTOR_OFFSET))(this);
		}

		::ENIDJAFECBD* __cctor_b__28_0()
		{
			return ((::ENIDJAFECBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIDJAFECBD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
