#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLBDIAMCOME;
namespace System { class Object; }

#define JLBDIAMCOME___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAA2970)
#define JLBDIAMCOME___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAA29A0)
#define JLBDIAMCOME___C___CCTOR_B__36_0_OFFSET UNITYSDK_OFFSET(0x1FAA29B0)

inline static constexpr unsigned int JLBDIAMCOME___c_TypeDefinitionIndex = 34824;

	class JLBDIAMCOME___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x520E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLBDIAMCOME___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBDIAMCOME___C_CTOR_OFFSET))(this);
		}

		::JLBDIAMCOME* __cctor_b__36_0()
		{
			return ((::JLBDIAMCOME*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBDIAMCOME___C___CCTOR_B__36_0_OFFSET))(this);
		}

	};
