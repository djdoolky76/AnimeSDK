#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKEOMFNPKPO;
namespace System { class Object; }

#define CKEOMFNPKPO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0BC940)
#define CKEOMFNPKPO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0BC980)
#define CKEOMFNPKPO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0BC990)

inline static constexpr unsigned int CKEOMFNPKPO___c_TypeDefinitionIndex = 32871;

	class CKEOMFNPKPO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19420);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKEOMFNPKPO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKEOMFNPKPO___C_CTOR_OFFSET))(this);
		}

		::CKEOMFNPKPO* __cctor_b__23_0()
		{
			return ((::CKEOMFNPKPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKEOMFNPKPO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
