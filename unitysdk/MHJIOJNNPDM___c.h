#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHJIOJNNPDM;
namespace System { class Object; }

#define MHJIOJNNPDM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD85240)
#define MHJIOJNNPDM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD85280)
#define MHJIOJNNPDM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FD85290)

inline static constexpr unsigned int MHJIOJNNPDM___c_TypeDefinitionIndex = 30215;

	class MHJIOJNNPDM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHJIOJNNPDM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJIOJNNPDM___C_CTOR_OFFSET))(this);
		}

		::MHJIOJNNPDM* __cctor_b__23_0()
		{
			return ((::MHJIOJNNPDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJIOJNNPDM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
