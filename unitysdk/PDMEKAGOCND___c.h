#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDMEKAGOCND;
namespace System { class Object; }

#define PDMEKAGOCND___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF12990)
#define PDMEKAGOCND___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF129D0)
#define PDMEKAGOCND___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DF129E0)

inline static constexpr unsigned int PDMEKAGOCND___c_TypeDefinitionIndex = 29959;

	class PDMEKAGOCND___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37E80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDMEKAGOCND___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMEKAGOCND___C_CTOR_OFFSET))(this);
		}

		::PDMEKAGOCND* __cctor_b__18_0()
		{
			return ((::PDMEKAGOCND*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMEKAGOCND___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
