#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPGLHPGGPHM;
namespace System { class Object; }

#define DPGLHPGGPHM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4EED30)
#define DPGLHPGGPHM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4EED70)
#define DPGLHPGGPHM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F4EED80)

inline static constexpr unsigned int DPGLHPGGPHM___c_TypeDefinitionIndex = 34253;

	class DPGLHPGGPHM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40B20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPGLHPGGPHM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGLHPGGPHM___C_CTOR_OFFSET))(this);
		}

		::DPGLHPGGPHM* __cctor_b__33_0()
		{
			return ((::DPGLHPGGPHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPGLHPGGPHM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
