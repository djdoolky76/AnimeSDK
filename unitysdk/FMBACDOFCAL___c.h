#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMBACDOFCAL;
namespace System { class Object; }

#define FMBACDOFCAL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE48EC0)
#define FMBACDOFCAL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE48F00)
#define FMBACDOFCAL___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1FE48F10)

inline static constexpr unsigned int FMBACDOFCAL___c_TypeDefinitionIndex = 30561;

	class FMBACDOFCAL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4BFE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMBACDOFCAL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBACDOFCAL___C_CTOR_OFFSET))(this);
		}

		::FMBACDOFCAL* __cctor_b__48_0()
		{
			return ((::FMBACDOFCAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBACDOFCAL___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
