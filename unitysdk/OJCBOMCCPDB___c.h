#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OJCBOMCCPDB;
namespace System { class Object; }

#define OJCBOMCCPDB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F699EE0)
#define OJCBOMCCPDB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F699F20)
#define OJCBOMCCPDB___C___CCTOR_B__123_0_OFFSET UNITYSDK_OFFSET(0x1F699F30)

inline static constexpr unsigned int OJCBOMCCPDB___c_TypeDefinitionIndex = 26039;

	class OJCBOMCCPDB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B2F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJCBOMCCPDB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCBOMCCPDB___C_CTOR_OFFSET))(this);
		}

		::OJCBOMCCPDB* __cctor_b__123_0()
		{
			return ((::OJCBOMCCPDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCBOMCCPDB___C___CCTOR_B__123_0_OFFSET))(this);
		}

	};
