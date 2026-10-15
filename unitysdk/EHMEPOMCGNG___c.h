#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EHMEPOMCGNG;
namespace System { class Object; }

#define EHMEPOMCGNG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E275130)
#define EHMEPOMCGNG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E275170)
#define EHMEPOMCGNG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E275180)

inline static constexpr unsigned int EHMEPOMCGNG___c_TypeDefinitionIndex = 25753;

	class EHMEPOMCGNG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHMEPOMCGNG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMEPOMCGNG___C_CTOR_OFFSET))(this);
		}

		::EHMEPOMCGNG* __cctor_b__28_0()
		{
			return ((::EHMEPOMCGNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMEPOMCGNG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
