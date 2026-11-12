#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMEBOJEOJPD;
namespace System { class Object; }

#define LMEBOJEOJPD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCC6FE0)
#define LMEBOJEOJPD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCC7020)
#define LMEBOJEOJPD___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FCC7030)

inline static constexpr unsigned int LMEBOJEOJPD___c_TypeDefinitionIndex = 27389;

	class LMEBOJEOJPD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3FC50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMEBOJEOJPD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEBOJEOJPD___C_CTOR_OFFSET))(this);
		}

		::LMEBOJEOJPD* __cctor_b__18_0()
		{
			return ((::LMEBOJEOJPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEBOJEOJPD___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
