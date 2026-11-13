#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGridMember; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define JHLCCGABEGB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x173E3990)
#define JHLCCGABEGB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x173E39D0)
#define JHLCCGABEGB___C__SATISFY_B__0_0_OFFSET UNITYSDK_OFFSET(0x173E39E0)

inline static constexpr unsigned int JHLCCGABEGB___c_TypeDefinitionIndex = 66475;

	class JHLCCGABEGB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xD580);
		}

		static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0xD588);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHLCCGABEGB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHLCCGABEGB___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _Satisfy_b__0_0(::RPG::Client::GridFightGridMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + JHLCCGABEGB___C__SATISFY_B__0_0_OFFSET))(this, a1);
		}

	};
