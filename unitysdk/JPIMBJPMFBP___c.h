#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPIMBJPMFBP;
namespace System { class Object; }

#define JPIMBJPMFBP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7A8E40)
#define JPIMBJPMFBP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A8E80)
#define JPIMBJPMFBP___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E7A8E90)

inline static constexpr unsigned int JPIMBJPMFBP___c_TypeDefinitionIndex = 26950;

	class JPIMBJPMFBP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPIMBJPMFBP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIMBJPMFBP___C_CTOR_OFFSET))(this);
		}

		::JPIMBJPMFBP* __cctor_b__18_0()
		{
			return ((::JPIMBJPMFBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIMBJPMFBP___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
