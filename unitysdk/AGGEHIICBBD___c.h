#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGGEHIICBBD;
namespace System { class Object; }

#define AGGEHIICBBD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E12D460)
#define AGGEHIICBBD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E12D4A0)
#define AGGEHIICBBD___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E12D4B0)

inline static constexpr unsigned int AGGEHIICBBD___c_TypeDefinitionIndex = 32796;

	class AGGEHIICBBD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30930);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGGEHIICBBD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGEHIICBBD___C_CTOR_OFFSET))(this);
		}

		::AGGEHIICBBD* __cctor_b__18_0()
		{
			return ((::AGGEHIICBBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGEHIICBBD___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
