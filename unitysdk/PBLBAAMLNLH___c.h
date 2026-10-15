#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBLBAAMLNLH;
namespace System { class Object; }

#define PBLBAAMLNLH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEF9130)
#define PBLBAAMLNLH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEF9160)
#define PBLBAAMLNLH___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1DEF9170)

inline static constexpr unsigned int PBLBAAMLNLH___c_TypeDefinitionIndex = 30270;

	class PBLBAAMLNLH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33790);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBLBAAMLNLH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBLBAAMLNLH___C_CTOR_OFFSET))(this);
		}

		::PBLBAAMLNLH* __cctor_b__53_0()
		{
			return ((::PBLBAAMLNLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBLBAAMLNLH___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
