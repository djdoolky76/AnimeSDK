#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PAOMMOHKLCO;
namespace System { class Object; }

#define PAOMMOHKLCO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEC5610)
#define PAOMMOHKLCO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC5640)
#define PAOMMOHKLCO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DEC5650)

inline static constexpr unsigned int PAOMMOHKLCO___c_TypeDefinitionIndex = 33959;

	class PAOMMOHKLCO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C310);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAOMMOHKLCO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAOMMOHKLCO___C_CTOR_OFFSET))(this);
		}

		::PAOMMOHKLCO* __cctor_b__33_0()
		{
			return ((::PAOMMOHKLCO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAOMMOHKLCO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
