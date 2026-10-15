#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELOCPGOBJFM;
namespace System { class Object; }

#define ELOCPGOBJFM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2AA660)
#define ELOCPGOBJFM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2AA6A0)
#define ELOCPGOBJFM___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E2AA6B0)

inline static constexpr unsigned int ELOCPGOBJFM___c_TypeDefinitionIndex = 27915;

	class ELOCPGOBJFM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x521B0);
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
