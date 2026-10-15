#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMIFOPAPNNI;
namespace System { class Object; }

#define PMIFOPAPNNI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFABDD0)
#define PMIFOPAPNNI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFABE10)
#define PMIFOPAPNNI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DFABE20)

inline static constexpr unsigned int PMIFOPAPNNI___c_TypeDefinitionIndex = 26720;

	class PMIFOPAPNNI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D9D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMIFOPAPNNI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIFOPAPNNI___C_CTOR_OFFSET))(this);
		}

		::PMIFOPAPNNI* __cctor_b__28_0()
		{
			return ((::PMIFOPAPNNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIFOPAPNNI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
