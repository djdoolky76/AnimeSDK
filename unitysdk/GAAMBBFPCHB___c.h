#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAAMBBFPCHB;
namespace System { class Object; }

#define GAAMBBFPCHB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3E4840)
#define GAAMBBFPCHB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3E4870)
#define GAAMBBFPCHB___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E3E4880)

inline static constexpr unsigned int GAAMBBFPCHB___c_TypeDefinitionIndex = 30892;

	class GAAMBBFPCHB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x601E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAAMBBFPCHB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAMBBFPCHB___C_CTOR_OFFSET))(this);
		}

		::GAAMBBFPCHB* __cctor_b__38_0()
		{
			return ((::GAAMBBFPCHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAMBBFPCHB___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
