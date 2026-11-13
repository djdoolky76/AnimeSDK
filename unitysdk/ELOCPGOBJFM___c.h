#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELOCPGOBJFM;
namespace System { class Object; }

#define ELOCPGOBJFM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206CEE50)
#define ELOCPGOBJFM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206CEE90)
#define ELOCPGOBJFM___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x206CEEA0)

inline static constexpr unsigned int ELOCPGOBJFM___c_TypeDefinitionIndex = 28505;

	class ELOCPGOBJFM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47840);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELOCPGOBJFM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOCPGOBJFM___C_CTOR_OFFSET))(this);
		}

		::ELOCPGOBJFM* __cctor_b__38_0()
		{
			return ((::ELOCPGOBJFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOCPGOBJFM___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
