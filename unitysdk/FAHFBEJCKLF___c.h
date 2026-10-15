#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAHFBEJCKLF;
namespace System { class Object; }

#define FAHFBEJCKLF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E31FB90)
#define FAHFBEJCKLF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E31FBC0)
#define FAHFBEJCKLF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E31FBD0)

inline static constexpr unsigned int FAHFBEJCKLF___c_TypeDefinitionIndex = 34081;

	class FAHFBEJCKLF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x578D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAHFBEJCKLF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHFBEJCKLF___C_CTOR_OFFSET))(this);
		}

		::FAHFBEJCKLF* __cctor_b__33_0()
		{
			return ((::FAHFBEJCKLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHFBEJCKLF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
