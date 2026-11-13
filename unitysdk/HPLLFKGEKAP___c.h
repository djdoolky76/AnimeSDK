#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDKHADGLIPJ;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define HPLLFKGEKAP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF41D70)
#define HPLLFKGEKAP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1AF41DB0)
#define HPLLFKGEKAP___C___TRIGGERCHIMERADEATH_B__2_0_OFFSET UNITYSDK_OFFSET(0x1AF41DC0)

inline static constexpr unsigned int HPLLFKGEKAP___c_TypeDefinitionIndex = 78081;

	class HPLLFKGEKAP___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::KDKHADGLIPJ*>** StaticGet___9__2_0()
		{
			return (::System::Comparison_1<::KDKHADGLIPJ*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2A0D0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2A0D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPLLFKGEKAP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLLFKGEKAP___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __TriggerChimeraDeath_b__2_0(::KDKHADGLIPJ* a1, ::KDKHADGLIPJ* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::KDKHADGLIPJ*, ::KDKHADGLIPJ*))((::PBYTE)hIl2Cpp + HPLLFKGEKAP___C___TRIGGERCHIMERADEATH_B__2_0_OFFSET))(this, a1, a2);
		}

	};
