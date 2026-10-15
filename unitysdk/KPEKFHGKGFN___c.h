#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDADEGMMPPD;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define KPEKFHGKGFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB5AFC20)
#define KPEKFHGKGFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB5AFC60)
#define KPEKFHGKGFN___C__GETSHOWSPONSORS_B__5_0_OFFSET UNITYSDK_OFFSET(0xB5AFC70)

inline static constexpr unsigned int KPEKFHGKGFN___c_TypeDefinitionIndex = 80338;

	class KPEKFHGKGFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x630E0);
		}

		static ::System::Comparison_1<::GDADEGMMPPD*>** StaticGet___9__5_0()
		{
			return (::System::Comparison_1<::GDADEGMMPPD*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x630E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPEKFHGKGFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPEKFHGKGFN___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetShowSponsors_b__5_0(::GDADEGMMPPD* a1, ::GDADEGMMPPD* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::GDADEGMMPPD*, ::GDADEGMMPPD*))((::PBYTE)hIl2Cpp + KPEKFHGKGFN___C__GETSHOWSPONSORS_B__5_0_OFFSET))(this, a1, a2);
		}

	};
