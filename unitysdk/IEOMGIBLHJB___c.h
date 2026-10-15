#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEOMGIBLHJB;
namespace System { class Object; }

#define IEOMGIBLHJB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E613E90)
#define IEOMGIBLHJB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E613ED0)
#define IEOMGIBLHJB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E613EE0)

inline static constexpr unsigned int IEOMGIBLHJB___c_TypeDefinitionIndex = 29325;

	class IEOMGIBLHJB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49B60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEOMGIBLHJB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOMGIBLHJB___C_CTOR_OFFSET))(this);
		}

		::IEOMGIBLHJB* __cctor_b__28_0()
		{
			return ((::IEOMGIBLHJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOMGIBLHJB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
