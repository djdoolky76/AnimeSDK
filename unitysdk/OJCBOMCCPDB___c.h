#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OJCBOMCCPDB;
namespace System { class Object; }

#define OJCBOMCCPDB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE7DF80)
#define OJCBOMCCPDB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE7DFC0)
#define OJCBOMCCPDB___C___CCTOR_B__118_0_OFFSET UNITYSDK_OFFSET(0x1DE7DFD0)

inline static constexpr unsigned int OJCBOMCCPDB___c_TypeDefinitionIndex = 25544;

	class OJCBOMCCPDB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1EA90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJCBOMCCPDB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCBOMCCPDB___C_CTOR_OFFSET))(this);
		}

		::OJCBOMCCPDB* __cctor_b__118_0()
		{
			return ((::OJCBOMCCPDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCBOMCCPDB___C___CCTOR_B__118_0_OFFSET))(this);
		}

	};
