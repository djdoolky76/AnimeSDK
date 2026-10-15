#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MEEPKFKOAHA.h"
#include "unitysdk/System/Object.h"
class INBDPGBJIFA;
namespace System { class Object; }

#define INBDPGBJIFA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E691A10)
#define INBDPGBJIFA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E691A40)
#define INBDPGBJIFA___C___CCTOR_B__73_0_OFFSET UNITYSDK_OFFSET(0x1E691A50)
#define INBDPGBJIFA___C___CCTOR_B__73_1_OFFSET UNITYSDK_OFFSET(0x1E691A80)
#define INBDPGBJIFA___C___CCTOR_B__73_2_OFFSET UNITYSDK_OFFSET(0x1E691A90)

inline static constexpr unsigned int INBDPGBJIFA___c_TypeDefinitionIndex = 33981;

	class INBDPGBJIFA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x533B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INBDPGBJIFA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INBDPGBJIFA___C_CTOR_OFFSET))(this);
		}

		::INBDPGBJIFA* __cctor_b__73_0()
		{
			return ((::INBDPGBJIFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + INBDPGBJIFA___C___CCTOR_B__73_0_OFFSET))(this);
		}

		::System::Int32 __cctor_b__73_1(::MEEPKFKOAHA a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MEEPKFKOAHA))((::PBYTE)hIl2Cpp + INBDPGBJIFA___C___CCTOR_B__73_1_OFFSET))(this, a1);
		}

		::MEEPKFKOAHA __cctor_b__73_2(::System::Int32 a1)
		{
			return ((::MEEPKFKOAHA(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INBDPGBJIFA___C___CCTOR_B__73_2_OFFSET))(this, a1);
		}

	};
