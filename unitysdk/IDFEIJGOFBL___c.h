#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDFEIJGOFBL;
namespace System { class Object; }

#define IDFEIJGOFBL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E62A570)
#define IDFEIJGOFBL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E62A5B0)
#define IDFEIJGOFBL___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E62A5C0)

inline static constexpr unsigned int IDFEIJGOFBL___c_TypeDefinitionIndex = 32250;

	class IDFEIJGOFBL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45CA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDFEIJGOFBL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFEIJGOFBL___C_CTOR_OFFSET))(this);
		}

		::IDFEIJGOFBL* __cctor_b__18_0()
		{
			return ((::IDFEIJGOFBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFEIJGOFBL___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
