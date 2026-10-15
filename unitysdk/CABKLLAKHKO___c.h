#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CABKLLAKHKO;
namespace System { class Object; }

#define CABKLLAKHKO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0286E0)
#define CABKLLAKHKO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E028710)
#define CABKLLAKHKO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E028720)

inline static constexpr unsigned int CABKLLAKHKO___c_TypeDefinitionIndex = 33671;

	class CABKLLAKHKO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x600A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CABKLLAKHKO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABKLLAKHKO___C_CTOR_OFFSET))(this);
		}

		::CABKLLAKHKO* __cctor_b__23_0()
		{
			return ((::CABKLLAKHKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CABKLLAKHKO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
