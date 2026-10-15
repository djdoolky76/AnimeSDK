#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPNHGDGLICN;
namespace System { class Object; }

#define KPNHGDGLICN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8C1FA0)
#define KPNHGDGLICN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C1FE0)
#define KPNHGDGLICN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E8C1FF0)

inline static constexpr unsigned int KPNHGDGLICN___c_TypeDefinitionIndex = 25308;

	class KPNHGDGLICN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D5B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPNHGDGLICN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNHGDGLICN___C_CTOR_OFFSET))(this);
		}

		::KPNHGDGLICN* __cctor_b__28_0()
		{
			return ((::KPNHGDGLICN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNHGDGLICN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
