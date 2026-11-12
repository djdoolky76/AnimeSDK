#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLOOHFMLFMM;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define FKLOAACMIGL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1677AEF0)
#define FKLOAACMIGL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1677AF30)
#define FKLOAACMIGL___C___SETUPORBS_B__18_0_OFFSET UNITYSDK_OFFSET(0x1677AF40)

inline static constexpr unsigned int FKLOAACMIGL___c_TypeDefinitionIndex = 74362;

	class FKLOAACMIGL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x671A0);
		}

		static ::System::Comparison_1<::NLOOHFMLFMM*>** StaticGet___9__18_0()
		{
			return (::System::Comparison_1<::NLOOHFMLFMM*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x671A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKLOAACMIGL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLOAACMIGL___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __SetupOrbs_b__18_0(::NLOOHFMLFMM* a1, ::NLOOHFMLFMM* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::NLOOHFMLFMM*, ::NLOOHFMLFMM*))((::PBYTE)hIl2Cpp + FKLOAACMIGL___C___SETUPORBS_B__18_0_OFFSET))(this, a1, a2);
		}

	};
