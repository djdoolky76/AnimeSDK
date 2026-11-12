#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGFDCGKPJBE;
namespace System { class Object; }

#define IGFDCGKPJBE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F96BB90)
#define IGFDCGKPJBE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F96BBD0)
#define IGFDCGKPJBE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F96BBE0)

inline static constexpr unsigned int IGFDCGKPJBE___c_TypeDefinitionIndex = 33509;

	class IGFDCGKPJBE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x492E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGFDCGKPJBE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGFDCGKPJBE___C_CTOR_OFFSET))(this);
		}

		::IGFDCGKPJBE* __cctor_b__23_0()
		{
			return ((::IGFDCGKPJBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGFDCGKPJBE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
