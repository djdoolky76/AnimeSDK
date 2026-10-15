#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHENECNMFPI;
namespace System { class Object; }

#define KHENECNMFPI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8142B0)
#define KHENECNMFPI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8142E0)
#define KHENECNMFPI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E8142F0)

inline static constexpr unsigned int KHENECNMFPI___c_TypeDefinitionIndex = 26522;

	class KHENECNMFPI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15EF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHENECNMFPI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHENECNMFPI___C_CTOR_OFFSET))(this);
		}

		::KHENECNMFPI* __cctor_b__28_0()
		{
			return ((::KHENECNMFPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHENECNMFPI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
