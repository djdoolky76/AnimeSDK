#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class COKKOEBBEGM;
namespace System { class Object; }

#define COKKOEBBEGM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E135DB0)
#define COKKOEBBEGM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E135DF0)
#define COKKOEBBEGM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E135E00)

inline static constexpr unsigned int COKKOEBBEGM___c_TypeDefinitionIndex = 33345;

	class COKKOEBBEGM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21880);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COKKOEBBEGM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COKKOEBBEGM___C_CTOR_OFFSET))(this);
		}

		::COKKOEBBEGM* __cctor_b__23_0()
		{
			return ((::COKKOEBBEGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + COKKOEBBEGM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
