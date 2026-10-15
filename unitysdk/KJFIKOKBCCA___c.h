#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICFEIEJDMIB.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define KJFIKOKBCCA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD6C4F0)
#define KJFIKOKBCCA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD6C520)
#define KJFIKOKBCCA___C__CREATE_B__6_0_OFFSET UNITYSDK_OFFSET(0x1DD6C530)

inline static constexpr unsigned int KJFIKOKBCCA___c_TypeDefinitionIndex = 6440;

	class KJFIKOKBCCA___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::ICFEIEJDMIB>** StaticGet___9__6_0()
		{
			return (::System::Action_1<::ICFEIEJDMIB>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C600);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C608);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJFIKOKBCCA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFIKOKBCCA___C_CTOR_OFFSET))(this);
		}

		::System::Void _Create_b__6_0(::ICFEIEJDMIB a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICFEIEJDMIB))((::PBYTE)hIl2Cpp + KJFIKOKBCCA___C__CREATE_B__6_0_OFFSET))(this, a1);
		}

	};
