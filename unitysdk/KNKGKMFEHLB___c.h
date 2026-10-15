#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNKGKMFEHLB;
namespace System { class Object; }

#define KNKGKMFEHLB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E878BE0)
#define KNKGKMFEHLB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E878C20)
#define KNKGKMFEHLB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E878C30)

inline static constexpr unsigned int KNKGKMFEHLB___c_TypeDefinitionIndex = 27668;

	class KNKGKMFEHLB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x205D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNKGKMFEHLB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKGKMFEHLB___C_CTOR_OFFSET))(this);
		}

		::KNKGKMFEHLB* __cctor_b__28_0()
		{
			return ((::KNKGKMFEHLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNKGKMFEHLB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
