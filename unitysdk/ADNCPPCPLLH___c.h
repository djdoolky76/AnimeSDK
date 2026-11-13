#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ADNCPPCPLLH;
namespace System { class Object; }

#define ADNCPPCPLLH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x200A0180)
#define ADNCPPCPLLH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x200A01C0)
#define ADNCPPCPLLH___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x200A01D0)

inline static constexpr unsigned int ADNCPPCPLLH___c_TypeDefinitionIndex = 31942;

	class ADNCPPCPLLH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A770);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADNCPPCPLLH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADNCPPCPLLH___C_CTOR_OFFSET))(this);
		}

		::ADNCPPCPLLH* __cctor_b__38_0()
		{
			return ((::ADNCPPCPLLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADNCPPCPLLH___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
