#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNEPAIGBPGM;
namespace System { class Object; }

#define MNEPAIGBPGM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA67760)
#define MNEPAIGBPGM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA677A0)
#define MNEPAIGBPGM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA677B0)

inline static constexpr unsigned int MNEPAIGBPGM___c_TypeDefinitionIndex = 34016;

	class MNEPAIGBPGM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x591D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNEPAIGBPGM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNEPAIGBPGM___C_CTOR_OFFSET))(this);
		}

		::MNEPAIGBPGM* __cctor_b__28_0()
		{
			return ((::MNEPAIGBPGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNEPAIGBPGM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
