#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNLBCCHFILK;
namespace System { class Object; }

#define GNLBCCHFILK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4B7870)
#define GNLBCCHFILK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4B78A0)
#define GNLBCCHFILK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E4B78B0)

inline static constexpr unsigned int GNLBCCHFILK___c_TypeDefinitionIndex = 33043;

	class GNLBCCHFILK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x215A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNLBCCHFILK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLBCCHFILK___C_CTOR_OFFSET))(this);
		}

		::GNLBCCHFILK* __cctor_b__28_0()
		{
			return ((::GNLBCCHFILK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLBCCHFILK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
