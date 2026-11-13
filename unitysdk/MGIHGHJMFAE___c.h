#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGIHGHJMFAE;
namespace System { class Object; }

#define MGIHGHJMFAE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA4EEA0)
#define MGIHGHJMFAE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA4EEE0)
#define MGIHGHJMFAE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FA4EEF0)

inline static constexpr unsigned int MGIHGHJMFAE___c_TypeDefinitionIndex = 34417;

	class MGIHGHJMFAE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46F80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGIHGHJMFAE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGIHGHJMFAE___C_CTOR_OFFSET))(this);
		}

		::MGIHGHJMFAE* __cctor_b__33_0()
		{
			return ((::MGIHGHJMFAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGIHGHJMFAE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
