#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDBJKKCHNGJ;
namespace System { class Object; }

#define LDBJKKCHNGJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8F1B80)
#define LDBJKKCHNGJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8F1BC0)
#define LDBJKKCHNGJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8F1BD0)

inline static constexpr unsigned int LDBJKKCHNGJ___c_TypeDefinitionIndex = 29683;

	class LDBJKKCHNGJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x336C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDBJKKCHNGJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDBJKKCHNGJ___C_CTOR_OFFSET))(this);
		}

		::LDBJKKCHNGJ* __cctor_b__23_0()
		{
			return ((::LDBJKKCHNGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDBJKKCHNGJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
