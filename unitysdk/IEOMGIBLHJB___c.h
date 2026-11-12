#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEOMGIBLHJB;
namespace System { class Object; }

#define IEOMGIBLHJB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F95F800)
#define IEOMGIBLHJB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F95F840)
#define IEOMGIBLHJB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F95F850)

inline static constexpr unsigned int IEOMGIBLHJB___c_TypeDefinitionIndex = 30022;

	class IEOMGIBLHJB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47510);
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
