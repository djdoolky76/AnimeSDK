#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPBCIIFIAGI;
namespace System { class Object; }

#define KPBCIIFIAGI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8899B0)
#define KPBCIIFIAGI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8899E0)
#define KPBCIIFIAGI___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1E8899F0)

inline static constexpr unsigned int KPBCIIFIAGI___c_TypeDefinitionIndex = 34665;

	class KPBCIIFIAGI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21F10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPBCIIFIAGI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPBCIIFIAGI___C_CTOR_OFFSET))(this);
		}

		::KPBCIIFIAGI* __cctor_b__63_0()
		{
			return ((::KPBCIIFIAGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPBCIIFIAGI___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
