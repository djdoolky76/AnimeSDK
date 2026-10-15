#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBNFMNHGIPN;
namespace System { class Object; }

#define BBNFMNHGIPN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7C9CB0)
#define BBNFMNHGIPN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C9CF0)
#define BBNFMNHGIPN___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E7C9D00)

inline static constexpr unsigned int BBNFMNHGIPN___c_TypeDefinitionIndex = 28896;

	class BBNFMNHGIPN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x484B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBNFMNHGIPN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNFMNHGIPN___C_CTOR_OFFSET))(this);
		}

		::BBNFMNHGIPN* __cctor_b__48_0()
		{
			return ((::BBNFMNHGIPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNFMNHGIPN___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
