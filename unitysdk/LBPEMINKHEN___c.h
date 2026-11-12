#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBPEMINKHEN;
namespace System { class Object; }

#define LBPEMINKHEN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC1E7E0)
#define LBPEMINKHEN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC1E820)
#define LBPEMINKHEN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FC1E830)

inline static constexpr unsigned int LBPEMINKHEN___c_TypeDefinitionIndex = 28758;

	class LBPEMINKHEN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x27E60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBPEMINKHEN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPEMINKHEN___C_CTOR_OFFSET))(this);
		}

		::LBPEMINKHEN* __cctor_b__28_0()
		{
			return ((::LBPEMINKHEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPEMINKHEN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
