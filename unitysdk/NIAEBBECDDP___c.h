#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NIAEBBECDDP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBBDC890)
#define NIAEBBECDDP___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBBDC8D0)
#define NIAEBBECDDP___C__SATISFY_B__0_0_OFFSET UNITYSDK_OFFSET(0xBBDC8E0)

inline static constexpr unsigned int NIAEBBECDDP___c_TypeDefinitionIndex = 64913;

	class NIAEBBECDDP___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B8A0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B8A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIAEBBECDDP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIAEBBECDDP___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _Satisfy_b__0_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + NIAEBBECDDP___C__SATISFY_B__0_0_OFFSET))(this, a1);
		}

	};
