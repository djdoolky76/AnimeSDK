#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHDNIIFHFGB;
namespace System { class Object; }

#define GHDNIIFHFGB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E486520)
#define GHDNIIFHFGB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E486560)
#define GHDNIIFHFGB___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E486570)

inline static constexpr unsigned int GHDNIIFHFGB___c_TypeDefinitionIndex = 27664;

	class GHDNIIFHFGB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16C50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHDNIIFHFGB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDNIIFHFGB___C_CTOR_OFFSET))(this);
		}

		::GHDNIIFHFGB* __cctor_b__18_0()
		{
			return ((::GHDNIIFHFGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDNIIFHFGB___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
