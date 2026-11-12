#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HODEJIOONON_CCECOCKDPIC.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define HODEJIOONON___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x16D52A10)
#define HODEJIOONON___C_CTOR_OFFSET UNITYSDK_OFFSET(0x16D52A50)
#define HODEJIOONON___C__EXECUTE_B__1_0_OFFSET UNITYSDK_OFFSET(0x16D52A60)

inline static constexpr unsigned int HODEJIOONON___c_TypeDefinitionIndex = 80011;

	class HODEJIOONON___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1EDF0);
		}

		static ::System::Comparison_1<::System::Object*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::System::Object*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1EDF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HODEJIOONON___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HODEJIOONON___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _Execute_b__1_0(::HODEJIOONON_CCECOCKDPIC a1, ::HODEJIOONON_CCECOCKDPIC a2)
		{
			return ((::System::Int32(*)(::PVOID, ::HODEJIOONON_CCECOCKDPIC, ::HODEJIOONON_CCECOCKDPIC))((::PBYTE)hIl2Cpp + HODEJIOONON___C__EXECUTE_B__1_0_OFFSET))(this, a1, a2);
		}

	};
