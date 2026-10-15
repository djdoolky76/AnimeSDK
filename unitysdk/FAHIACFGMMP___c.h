#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAHIACFGMMP;
namespace System { class Object; }

#define FAHIACFGMMP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E321990)
#define FAHIACFGMMP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3219D0)
#define FAHIACFGMMP___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E3219E0)

inline static constexpr unsigned int FAHIACFGMMP___c_TypeDefinitionIndex = 26917;

	class FAHIACFGMMP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57B10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAHIACFGMMP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHIACFGMMP___C_CTOR_OFFSET))(this);
		}

		::FAHIACFGMMP* __cctor_b__18_0()
		{
			return ((::FAHIACFGMMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHIACFGMMP___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
