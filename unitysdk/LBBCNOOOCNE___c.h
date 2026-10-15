#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBBCNOOOCNE;
namespace System { class Object; }

#define LBBCNOOOCNE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8A95F0)
#define LBBCNOOOCNE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A9630)
#define LBBCNOOOCNE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8A9640)

inline static constexpr unsigned int LBBCNOOOCNE___c_TypeDefinitionIndex = 33082;

	class LBBCNOOOCNE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25430);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBBCNOOOCNE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBCNOOOCNE___C_CTOR_OFFSET))(this);
		}

		::LBBCNOOOCNE* __cctor_b__23_0()
		{
			return ((::LBBCNOOOCNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBCNOOOCNE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
