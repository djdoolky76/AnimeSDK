#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPAIOFMJEPM;
namespace System { class Object; }

#define JPAIOFMJEPM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7CD400)
#define JPAIOFMJEPM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7CD440)
#define JPAIOFMJEPM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7CD450)

inline static constexpr unsigned int JPAIOFMJEPM___c_TypeDefinitionIndex = 25627;

	class JPAIOFMJEPM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x29E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPAIOFMJEPM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPAIOFMJEPM___C_CTOR_OFFSET))(this);
		}

		::JPAIOFMJEPM* __cctor_b__23_0()
		{
			return ((::JPAIOFMJEPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPAIOFMJEPM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
