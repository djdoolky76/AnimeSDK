#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBDPDGAHPNK;
namespace System { class Object; }

#define GBDPDGAHPNK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F717330)
#define GBDPDGAHPNK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F717370)
#define GBDPDGAHPNK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F717380)

inline static constexpr unsigned int GBDPDGAHPNK___c_TypeDefinitionIndex = 27901;

	class GBDPDGAHPNK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55470);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBDPDGAHPNK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDPDGAHPNK___C_CTOR_OFFSET))(this);
		}

		::GBDPDGAHPNK* __cctor_b__28_0()
		{
			return ((::GBDPDGAHPNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDPDGAHPNK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
