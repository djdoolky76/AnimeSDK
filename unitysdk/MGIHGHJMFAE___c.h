#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGIHGHJMFAE;
namespace System { class Object; }

#define MGIHGHJMFAE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA26A10)
#define MGIHGHJMFAE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA26A50)
#define MGIHGHJMFAE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EA26A60)

inline static constexpr unsigned int MGIHGHJMFAE___c_TypeDefinitionIndex = 33502;

	class MGIHGHJMFAE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E3D0);
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
