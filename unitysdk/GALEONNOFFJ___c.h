#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAKADGHNMFK;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define GALEONNOFFJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x159423A0)
#define GALEONNOFFJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x159423E0)
#define GALEONNOFFJ___C__INFOMODIFIEREFFECTTARGETS_B__19_0_OFFSET UNITYSDK_OFFSET(0x159423F0)

	class GALEONNOFFJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EE50);
		}

		static ::System::Func_2<::KAKADGHNMFK*, ::System::String*>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::KAKADGHNMFK*, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EE58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GALEONNOFFJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GALEONNOFFJ___C_CTOR_OFFSET))(this);
		}

		::System::String* _InfoModifierEffectTargets_b__19_0(::KAKADGHNMFK* a1)
		{
			return ((::System::String*(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + GALEONNOFFJ___C__INFOMODIFIEREFFECTTARGETS_B__19_0_OFFSET))(this, a1);
		}

	};
