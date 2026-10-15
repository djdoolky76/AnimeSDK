#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHMJIHDLDEB;
namespace System { class Object; }

#define CHMJIHDLDEB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0CBB70)
#define CHMJIHDLDEB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CBBB0)
#define CHMJIHDLDEB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0CBBC0)

inline static constexpr unsigned int CHMJIHDLDEB___c_TypeDefinitionIndex = 31399;

	class CHMJIHDLDEB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16E50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHMJIHDLDEB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMJIHDLDEB___C_CTOR_OFFSET))(this);
		}

		::CHMJIHDLDEB* __cctor_b__23_0()
		{
			return ((::CHMJIHDLDEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMJIHDLDEB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
