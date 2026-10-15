#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAFBIMIHOOL;
namespace System { class Object; }

#define EAFBIMIHOOL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1F8150)
#define EAFBIMIHOOL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1F8180)
#define EAFBIMIHOOL___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E1F8190)

inline static constexpr unsigned int EAFBIMIHOOL___c_TypeDefinitionIndex = 30508;

	class EAFBIMIHOOL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3CEE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAFBIMIHOOL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFBIMIHOOL___C_CTOR_OFFSET))(this);
		}

		::EAFBIMIHOOL* __cctor_b__48_0()
		{
			return ((::EAFBIMIHOOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFBIMIHOOL___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
