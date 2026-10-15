#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOBICCEGAMM;
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define DPHKGPCGIDB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1263E7B0)
#define DPHKGPCGIDB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1263E7E0)
#define DPHKGPCGIDB___C__HANDLEPOSTPROCESS_B__0_0_OFFSET UNITYSDK_OFFSET(0x1263E7F0)

inline static constexpr unsigned int DPHKGPCGIDB___c_TypeDefinitionIndex = 67151;

	class DPHKGPCGIDB___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::AOBICCEGAMM*>** StaticGet___9__0_0()
		{
			return (::System::Predicate_1<::AOBICCEGAMM*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FC00);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FC08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPHKGPCGIDB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPHKGPCGIDB___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _HandlePostProcess_b__0_0(::AOBICCEGAMM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AOBICCEGAMM*))((::PBYTE)hIl2Cpp + DPHKGPCGIDB___C__HANDLEPOSTPROCESS_B__0_0_OFFSET))(this, a1);
		}

	};
