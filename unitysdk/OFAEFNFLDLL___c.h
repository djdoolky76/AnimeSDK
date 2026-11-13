#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define OFAEFNFLDLL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x17661670)
#define OFAEFNFLDLL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x176616B0)
#define OFAEFNFLDLL___C__TOEFFECT_B__0_0_OFFSET UNITYSDK_OFFSET(0x176616C0)

inline static constexpr unsigned int OFAEFNFLDLL___c_TypeDefinitionIndex = 65842;

	class OFAEFNFLDLL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F6A0);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F6A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFAEFNFLDLL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFAEFNFLDLL___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _ToEffect_b__0_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + OFAEFNFLDLL___C__TOEFFECT_B__0_0_OFFSET))(this, a1);
		}

	};
