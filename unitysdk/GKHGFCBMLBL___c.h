#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKHGFCBMLBL;
namespace System { class Object; }

#define GKHGFCBMLBL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E487680)
#define GKHGFCBMLBL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4876C0)
#define GKHGFCBMLBL___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1E4876D0)

inline static constexpr unsigned int GKHGFCBMLBL___c_TypeDefinitionIndex = 32687;

	class GKHGFCBMLBL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1BAD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKHGFCBMLBL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHGFCBMLBL___C_CTOR_OFFSET))(this);
		}

		::GKHGFCBMLBL* __cctor_b__68_0()
		{
			return ((::GKHGFCBMLBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHGFCBMLBL___C___CCTOR_B__68_0_OFFSET))(this);
		}

	};
