#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;
namespace System { class Object; }

#define DPAAAFINPEB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x191B82E0)
#define DPAAAFINPEB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x191B8310)
#define DPAAAFINPEB___C___CCTOR_B__3_0_OFFSET UNITYSDK_OFFSET(0x191B8320)

inline static constexpr unsigned int DPAAAFINPEB___c_TypeDefinitionIndex = 50821;

	class DPAAAFINPEB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x702E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPAAAFINPEB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPAAAFINPEB___C_CTOR_OFFSET))(this);
		}

		::System::Void __cctor_b__3_0(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + DPAAAFINPEB___C___CCTOR_B__3_0_OFFSET))(this, a1);
		}

	};
