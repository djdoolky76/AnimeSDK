#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKPBGMKJGDL;
namespace System { class Object; }

#define EKPBGMKJGDL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E29AD90)
#define EKPBGMKJGDL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E29ADD0)
#define EKPBGMKJGDL___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E29ADE0)

inline static constexpr unsigned int EKPBGMKJGDL___c_TypeDefinitionIndex = 31843;

	class EKPBGMKJGDL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKPBGMKJGDL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKPBGMKJGDL___C_CTOR_OFFSET))(this);
		}

		::EKPBGMKJGDL* __cctor_b__38_0()
		{
			return ((::EKPBGMKJGDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKPBGMKJGDL___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
