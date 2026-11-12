#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGKEDBCAADJ;
namespace System { class Object; }

#define GGKEDBCAADJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F76EC20)
#define GGKEDBCAADJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F76EC60)
#define GGKEDBCAADJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F76EC70)

inline static constexpr unsigned int GGKEDBCAADJ___c_TypeDefinitionIndex = 28310;

	class GGKEDBCAADJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xED70);
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
