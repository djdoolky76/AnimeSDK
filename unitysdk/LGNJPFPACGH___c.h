#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGNJPFPACGH;
namespace System { class Object; }

#define LGNJPFPACGH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E958350)
#define LGNJPFPACGH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E958390)
#define LGNJPFPACGH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9583A0)

inline static constexpr unsigned int LGNJPFPACGH___c_TypeDefinitionIndex = 30005;

	class LGNJPFPACGH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3FE70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGNJPFPACGH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGNJPFPACGH___C_CTOR_OFFSET))(this);
		}

		::LGNJPFPACGH* __cctor_b__28_0()
		{
			return ((::LGNJPFPACGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGNJPFPACGH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
