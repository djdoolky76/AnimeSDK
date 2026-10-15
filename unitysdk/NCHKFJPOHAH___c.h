#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCHKFJPOHAH;
namespace System { class Object; }

#define NCHKFJPOHAH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAB1930)
#define NCHKFJPOHAH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB1960)
#define NCHKFJPOHAH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EAB1970)

inline static constexpr unsigned int NCHKFJPOHAH___c_TypeDefinitionIndex = 29664;

	class NCHKFJPOHAH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EF20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCHKFJPOHAH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHKFJPOHAH___C_CTOR_OFFSET))(this);
		}

		::NCHKFJPOHAH* __cctor_b__23_0()
		{
			return ((::NCHKFJPOHAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHKFJPOHAH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
