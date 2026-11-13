#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IIFPPBCFBBC;
namespace System { class Object; }

#define IIFPPBCFBBC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F804170)
#define IIFPPBCFBBC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8041B0)
#define IIFPPBCFBBC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F8041C0)

inline static constexpr unsigned int IIFPPBCFBBC___c_TypeDefinitionIndex = 30404;

	class IIFPPBCFBBC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46800);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIFPPBCFBBC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFPPBCFBBC___C_CTOR_OFFSET))(this);
		}

		::IIFPPBCFBBC* __cctor_b__23_0()
		{
			return ((::IIFPPBCFBBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFPPBCFBBC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
