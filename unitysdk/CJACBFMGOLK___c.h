#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJACBFMGOLK;
namespace System { class Object; }

#define CJACBFMGOLK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0D8640)
#define CJACBFMGOLK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D8680)
#define CJACBFMGOLK___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E0D8690)

inline static constexpr unsigned int CJACBFMGOLK___c_TypeDefinitionIndex = 33530;

	class CJACBFMGOLK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18B00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJACBFMGOLK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJACBFMGOLK___C_CTOR_OFFSET))(this);
		}

		::CJACBFMGOLK* __cctor_b__18_0()
		{
			return ((::CJACBFMGOLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJACBFMGOLK___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
