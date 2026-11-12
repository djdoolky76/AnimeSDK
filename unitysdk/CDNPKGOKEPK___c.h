#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDNPKGOKEPK;
namespace System { class Object; }

#define CDNPKGOKEPK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F351480)
#define CDNPKGOKEPK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3514B0)
#define CDNPKGOKEPK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F3514C0)

inline static constexpr unsigned int CDNPKGOKEPK___c_TypeDefinitionIndex = 32258;

	class CDNPKGOKEPK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D350);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDNPKGOKEPK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNPKGOKEPK___C_CTOR_OFFSET))(this);
		}

		::CDNPKGOKEPK* __cctor_b__33_0()
		{
			return ((::CDNPKGOKEPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNPKGOKEPK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
