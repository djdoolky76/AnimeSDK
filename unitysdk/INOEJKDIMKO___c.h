#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INOEJKDIMKO;
namespace System { class Object; }

#define INOEJKDIMKO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E699DD0)
#define INOEJKDIMKO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E699E10)
#define INOEJKDIMKO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E699E20)

inline static constexpr unsigned int INOEJKDIMKO___c_TypeDefinitionIndex = 31632;

	class INOEJKDIMKO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54070);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INOEJKDIMKO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INOEJKDIMKO___C_CTOR_OFFSET))(this);
		}

		::INOEJKDIMKO* __cctor_b__23_0()
		{
			return ((::INOEJKDIMKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + INOEJKDIMKO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
