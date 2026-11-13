#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGKEDBCAADJ;
namespace System { class Object; }

#define GGKEDBCAADJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2026C340)
#define GGKEDBCAADJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2026C380)
#define GGKEDBCAADJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x2026C390)

inline static constexpr unsigned int GGKEDBCAADJ___c_TypeDefinitionIndex = 28310;

	class GGKEDBCAADJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xE1E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGKEDBCAADJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKEDBCAADJ___C_CTOR_OFFSET))(this);
		}

		::GGKEDBCAADJ* __cctor_b__33_0()
		{
			return ((::GGKEDBCAADJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKEDBCAADJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
