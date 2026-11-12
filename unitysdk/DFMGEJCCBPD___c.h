#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFMGEJCCBPD;
namespace System { class Object; }

#define DFMGEJCCBPD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4826C0)
#define DFMGEJCCBPD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F482700)
#define DFMGEJCCBPD___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F482710)

inline static constexpr unsigned int DFMGEJCCBPD___c_TypeDefinitionIndex = 30292;

	class DFMGEJCCBPD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2E700);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFMGEJCCBPD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMGEJCCBPD___C_CTOR_OFFSET))(this);
		}

		::DFMGEJCCBPD* __cctor_b__18_0()
		{
			return ((::DFMGEJCCBPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMGEJCCBPD___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
