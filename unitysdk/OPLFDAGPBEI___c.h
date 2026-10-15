#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OPLFDAGPBEI;
namespace System { class Object; }

#define OPLFDAGPBEI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEB86C0)
#define OPLFDAGPBEI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB8700)
#define OPLFDAGPBEI___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DEB8710)

inline static constexpr unsigned int OPLFDAGPBEI___c_TypeDefinitionIndex = 25250;

	class OPLFDAGPBEI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B450);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPLFDAGPBEI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLFDAGPBEI___C_CTOR_OFFSET))(this);
		}

		::OPLFDAGPBEI* __cctor_b__38_0()
		{
			return ((::OPLFDAGPBEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLFDAGPBEI___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
