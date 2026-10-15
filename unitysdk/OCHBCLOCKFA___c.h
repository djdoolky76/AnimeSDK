#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGridMember; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define OCHBCLOCKFA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBD63180)
#define OCHBCLOCKFA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBD631C0)
#define OCHBCLOCKFA___C___ISROLEAFFECTEDBYTRAIT_B__4_0_OFFSET UNITYSDK_OFFSET(0xBD631D0)

inline static constexpr unsigned int OCHBCLOCKFA___c_TypeDefinitionIndex = 65139;

	class OCHBCLOCKFA___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E950);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E958);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCHBCLOCKFA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHBCLOCKFA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __IsRoleAffectedByTrait_b__4_0(::RPG::Client::GridFightGridMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + OCHBCLOCKFA___C___ISROLEAFFECTEDBYTRAIT_B__4_0_OFFSET))(this, a1);
		}

	};
