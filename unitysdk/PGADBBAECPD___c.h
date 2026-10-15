#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGADBBAECPD;
namespace System { class Object; }

#define PGADBBAECPD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEFE9C0)
#define PGADBBAECPD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEFEA00)
#define PGADBBAECPD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DEFEA10)

inline static constexpr unsigned int PGADBBAECPD___c_TypeDefinitionIndex = 27002;

	class PGADBBAECPD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32610);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGADBBAECPD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGADBBAECPD___C_CTOR_OFFSET))(this);
		}

		::PGADBBAECPD* __cctor_b__28_0()
		{
			return ((::PGADBBAECPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGADBBAECPD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
