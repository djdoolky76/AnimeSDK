#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNHCOJNOCHP;
namespace System { class Object; }

#define PNHCOJNOCHP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF8D090)
#define PNHCOJNOCHP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF8D0C0)
#define PNHCOJNOCHP___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DF8D0D0)

inline static constexpr unsigned int PNHCOJNOCHP___c_TypeDefinitionIndex = 34063;

	class PNHCOJNOCHP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x424F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNHCOJNOCHP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHCOJNOCHP___C_CTOR_OFFSET))(this);
		}

		::PNHCOJNOCHP* __cctor_b__43_0()
		{
			return ((::PNHCOJNOCHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHCOJNOCHP___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
