#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFPGDJJKGKJ;
namespace System { class Object; }

#define OFPGDJJKGKJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE1FB40)
#define OFPGDJJKGKJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE1FB80)
#define OFPGDJJKGKJ___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DE1FB90)

inline static constexpr unsigned int OFPGDJJKGKJ___c_TypeDefinitionIndex = 31031;

	class OFPGDJJKGKJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17340);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFPGDJJKGKJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPGDJJKGKJ___C_CTOR_OFFSET))(this);
		}

		::OFPGDJJKGKJ* __cctor_b__43_0()
		{
			return ((::OFPGDJJKGKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPGDJJKGKJ___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
