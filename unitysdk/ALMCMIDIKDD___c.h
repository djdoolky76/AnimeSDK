#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPHINGPIEAJ;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define ALMCMIDIKDD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x197CACF0)
#define ALMCMIDIKDD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x197CAD30)
#define ALMCMIDIKDD___C___COLLECTMISSINGDISHES_B__6_0_OFFSET UNITYSDK_OFFSET(0x197CAD40)

inline static constexpr unsigned int ALMCMIDIKDD___c_TypeDefinitionIndex = 79894;

	class ALMCMIDIKDD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53E60);
		}

		static ::System::Comparison_1<::LPHINGPIEAJ*>** StaticGet___9__6_0()
		{
			return (::System::Comparison_1<::LPHINGPIEAJ*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53E68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALMCMIDIKDD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMCMIDIKDD___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __CollectMissingDishes_b__6_0(::LPHINGPIEAJ* a1, ::LPHINGPIEAJ* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::LPHINGPIEAJ*, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + ALMCMIDIKDD___C___COLLECTMISSINGDISHES_B__6_0_OFFSET))(this, a1, a2);
		}

	};
