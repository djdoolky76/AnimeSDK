#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGPBONMLNAJ;
namespace System { class Object; }

#define HGPBONMLNAJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB06290)
#define HGPBONMLNAJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB062D0)
#define HGPBONMLNAJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FB062E0)

inline static constexpr unsigned int HGPBONMLNAJ___c_TypeDefinitionIndex = 30831;

	class HGPBONMLNAJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D880);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGPBONMLNAJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGPBONMLNAJ___C_CTOR_OFFSET))(this);
		}

		::HGPBONMLNAJ* __cctor_b__33_0()
		{
			return ((::HGPBONMLNAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGPBONMLNAJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
