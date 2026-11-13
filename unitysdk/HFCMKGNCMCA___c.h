#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFCMKGNCMCA;
namespace System { class Object; }

#define HFCMKGNCMCA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAE5900)
#define HFCMKGNCMCA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAE5940)
#define HFCMKGNCMCA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FAE5950)

inline static constexpr unsigned int HFCMKGNCMCA___c_TypeDefinitionIndex = 32456;

	class HFCMKGNCMCA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AA40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFCMKGNCMCA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCMKGNCMCA___C_CTOR_OFFSET))(this);
		}

		::HFCMKGNCMCA* __cctor_b__23_0()
		{
			return ((::HFCMKGNCMCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFCMKGNCMCA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
