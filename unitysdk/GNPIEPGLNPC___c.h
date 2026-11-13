#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNPIEPGLNPC;
namespace System { class Object; }

#define GNPIEPGLNPC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE0A070)
#define GNPIEPGLNPC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE0A0B0)
#define GNPIEPGLNPC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FE0A0C0)

inline static constexpr unsigned int GNPIEPGLNPC___c_TypeDefinitionIndex = 31257;

	class GNPIEPGLNPC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A830);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNPIEPGLNPC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPIEPGLNPC___C_CTOR_OFFSET))(this);
		}

		::GNPIEPGLNPC* __cctor_b__23_0()
		{
			return ((::GNPIEPGLNPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPIEPGLNPC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
